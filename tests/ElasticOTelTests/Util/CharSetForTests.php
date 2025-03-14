<?php

/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. See the NOTICE file distributed with
 * this work for additional information regarding copyright
 * ownership. Elasticsearch B.V. licenses this file to you under
 * the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

declare(strict_types=1);

namespace ElasticOTelTests\Util;

use Ds\Set;
use IteratorAggregate;
use Override;
use PHPUnit\Framework\Assert;
use Traversable;

/**
 * @implements IteratorAggregate<string>
 *
 * @noinspection PhpUnused
 */
final class CharSetForTests implements IteratorAggregate
{
    private static ?CharSetForTests $digits = null;
    private static ?CharSetForTests $lowerCaseLetters = null;
    private static ?CharSetForTests $lowerCaseLettersAndDigits = null;
    /** @var Set<string> */
    private Set $chars;

    public static function digits(): CharSetForTests
    {
        if (self::$digits === null) {
            self::$digits = new CharSetForTests();
            self::$digits->addCharRange('0', '9');
        }
        return self::$digits;
    }

    public static function lowerCaseLetters(): CharSetForTests
    {
        if (self::$lowerCaseLetters === null) {
            self::$lowerCaseLetters = new CharSetForTests();
            self::$lowerCaseLetters->addCharRange('a', 'z');
        }
        return self::$lowerCaseLetters;
    }

    /** @noinspection PhpUnused */
    public static function lowerCaseLettersAndDigits(): CharSetForTests
    {
        if (self::$lowerCaseLettersAndDigits === null) {
            self::$lowerCaseLettersAndDigits = new CharSetForTests();
            self::$lowerCaseLettersAndDigits->addCharSet(self::digits());
            self::$lowerCaseLettersAndDigits->addCharSet(self::lowerCaseLetters());
        }
        return self::$lowerCaseLettersAndDigits;
    }

    public function __construct()
    {
        $this->chars = new Set();
    }

    public function addChar(string $char): void
    {
        Assert::assertSame(1, strlen($char), $char);
        $this->chars->add($char);
    }

    public function addCharRange(string $first, string $last): void
    {
        Assert::assertSame(1, strlen($first), $first);
        Assert::assertSame(1, strlen($last), $last);
        $firstCodePoint = ord($first);
        $lastCodePoint = ord($last);
        Assert::assertGreaterThanOrEqual($firstCodePoint, $lastCodePoint);
        foreach (RangeUtil::generateFromToIncluding($firstCodePoint, $lastCodePoint) as $codepoint) {
            $this->addChar(chr($codepoint));
        }
    }

    public function addCharSet(CharSetForTests $charSet): void
    {
        foreach ($charSet as $char) {
            $this->addChar($char);
        }
    }

    /**
     * @return Traversable<string>
     */
    #[Override]
    public function getIterator(): Traversable
    {
        return $this->chars;
    }

    /** @noinspection PhpUnused */
    public function getRandom(): string
    {
        Assert::assertGreaterThan(0, $this->chars->count());
        $randomIndex = mt_rand(0, $this->chars->count() - 1);
        return $this->chars->get($randomIndex);
    }

    /**
     * @param non-negative-int $length
     *
     * @noinspection PhpUnused
     */
    public function generateString(int $length): string
    {
        Assert::assertGreaterThanOrEqual(0, $length);
        $result = '';
        while (true) {
            foreach ($this->chars as $char) {
                if (strlen($result) === $length) {
                    return $result;
                }
                $result .= $char;
            }
        }
    }
}

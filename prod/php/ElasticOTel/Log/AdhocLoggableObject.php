<?php

/*
 * Licensed to Elasticsearch B.V. under one or more contributor
 * license agreements. See the NOTICE file distributed with
 * this work for additional information regarding copyright
 * ownership. Elasticsearch B.V. licenses this file to you under
 * the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

declare(strict_types=1);

namespace Elastic\OTel\Log;

/**
 * Code in this file is part of implementation internals and thus it is not covered by the backward compatibility.
 *
 * @internal
 */
final class AdhocLoggableObject implements LoggableInterface
{
    /** @var array<string, mixed> */
    private $propertyNameToData = [];

    /**
     * @param array<string, mixed> $nameToValue
     * @param int                  $logPriority
     */
    public function __construct(array $nameToValue, int $logPriority = PropertyLogPriority::NORMAL)
    {
        $this->addProperties($nameToValue, $logPriority);
    }

    /**
     * @param array<string, mixed> $nameToValue
     * @param int                  $logPriority
     *
     * @return self
     */
    public function addProperties(
        array $nameToValue,
        /** @noinspection PhpUnusedParameterInspection */ int $logPriority = PropertyLogPriority::NORMAL
    ): self {
        $this->propertyNameToData += $nameToValue;
        return $this;
    }

    public function toLog(LogStreamInterface $stream): void
    {
        $stream->toLogAs($this->propertyNameToData);
    }
}
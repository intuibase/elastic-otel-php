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

use ElasticOTelTests\substitutes\PHPUnitFrameworkAssertionFailedErrorAutoloader;
use ElasticOTelTests\substitutes\SubstitutesUtil;
use PHPUnit\Framework\AssertionFailedError;

require __DIR__ . '/PHPUnitFrameworkAssertionFailedErrorAutoloader.php';

SubstitutesUtil::assertClassNotLoaded(AssertionFailedError::class, autoload: false);
PHPUnitFrameworkAssertionFailedErrorAutoloader::register();
SubstitutesUtil::assertClassLoaded(AssertionFailedError::class, autoload: true);

SubstitutesUtil::assertClassHasProperty(AssertionFailedError::class, 'preprocessMessage');

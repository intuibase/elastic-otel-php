/*
 * Copyright The OpenTelemetry Authors
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * DO NOT EDIT, this is an Auto-generated file from:
 * buildscripts/semantic-convention/templates/registry/semantic_attributes-h.j2
 */












#pragma once


namespace opentelemetry {
namespace semconv
{
namespace exception
{

/**
 * Indicates that the exception is escaping the scope of the span.
 *
 * @deprecated
 * {"note": "It's no longer recommended to record exceptions that are handled and do not escape the scope of a span.", "reason": "uncategorized"}
 */
OPENTELEMETRY_DEPRECATED
static constexpr const char *kExceptionEscaped
 = "exception.escaped";

/**
 * The exception message.
 */
static constexpr const char *kExceptionMessage
 = "exception.message";

/**
 * A stacktrace as a string in the natural representation for the language runtime. The representation is to be determined and documented by each language SIG.
 */
static constexpr const char *kExceptionStacktrace
 = "exception.stacktrace";

/**
 * The type of the exception (its fully-qualified class name, if applicable). The dynamic type of the exception should be preferred over the static type in languages that support it.
 */
static constexpr const char *kExceptionType
 = "exception.type";



}
}
}

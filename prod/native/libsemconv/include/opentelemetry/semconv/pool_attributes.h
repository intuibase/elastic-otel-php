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
namespace pool
{

/**
 * Deprecated, use @code db.client.connection.pool.name @endcode instead.
 *
 * @deprecated
 * {"note": "Replaced by @code db.client.connection.pool.name @endcode.", "reason": "uncategorized"}
 */
OPENTELEMETRY_DEPRECATED
static constexpr const char *kPoolName
 = "pool.name";



}
}
}

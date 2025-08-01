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
namespace enduser
{

/**
 * Unique identifier of an end user in the system. It maybe a username, email address, or other identifier.
 * <p>
 * Unique identifier of an end user in the system.
 * <blockquote>
 * [!Warning]
 * This field contains sensitive (PII) information.</blockquote>
 */
static constexpr const char *kEnduserId
 = "enduser.id";

/**
 * Pseudonymous identifier of an end user. This identifier should be a random value that is not directly linked or associated with the end user's actual identity.
 * <p>
 * Pseudonymous identifier of an end user.
 * <blockquote>
 * [!Warning]
 * This field contains sensitive (linkable PII) information.</blockquote>
 */
static constexpr const char *kEnduserPseudoId
 = "enduser.pseudo.id";

/**
 * Deprecated, use @code user.roles @endcode instead.
 *
 * @deprecated
 * {"note": "Replaced by @code user.roles @endcode attribute.", "reason": "uncategorized"}
 */
OPENTELEMETRY_DEPRECATED
static constexpr const char *kEnduserRole
 = "enduser.role";

/**
 * Deprecated, no replacement at this time.
 *
 * @deprecated
 * {"note": "Removed.", "reason": "uncategorized"}
 */
OPENTELEMETRY_DEPRECATED
static constexpr const char *kEnduserScope
 = "enduser.scope";



}
}
}

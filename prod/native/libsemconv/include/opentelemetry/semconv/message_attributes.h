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
namespace message
{

/**
 * Deprecated, use @code rpc.message.compressed_size @endcode instead.
 *
 * @deprecated
 * {"note": "Replaced by @code rpc.message.compressed_size @endcode.", "reason": "uncategorized"}
 */
OPENTELEMETRY_DEPRECATED
static constexpr const char *kMessageCompressedSize
 = "message.compressed_size";

/**
 * Deprecated, use @code rpc.message.id @endcode instead.
 *
 * @deprecated
 * {"note": "Replaced by @code rpc.message.id @endcode.", "reason": "uncategorized"}
 */
OPENTELEMETRY_DEPRECATED
static constexpr const char *kMessageId
 = "message.id";

/**
 * Deprecated, use @code rpc.message.type @endcode instead.
 *
 * @deprecated
 * {"note": "Replaced by @code rpc.message.type @endcode.", "reason": "uncategorized"}
 */
OPENTELEMETRY_DEPRECATED
static constexpr const char *kMessageType
 = "message.type";

/**
 * Deprecated, use @code rpc.message.uncompressed_size @endcode instead.
 *
 * @deprecated
 * {"note": "Replaced by @code rpc.message.uncompressed_size @endcode.", "reason": "uncategorized"}
 */
OPENTELEMETRY_DEPRECATED
static constexpr const char *kMessageUncompressedSize
 = "message.uncompressed_size";


namespace MessageTypeValues
{
/**
 * none
 */
static constexpr const char *
 kSent
 = "SENT";

/**
 * none
 */
static constexpr const char *
 kReceived
 = "RECEIVED";

}


}
}
}

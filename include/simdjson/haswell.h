#ifndef SIMDJSON_HASWELL_H
#define SIMDJSON_HASWELL_H

#include "simdjson/implementation-base.h"

#if SIMDJSON_IMPLEMENTATION_HASWELL

namespace simdjson {
/**
 * Implementation for Haswell (Intel AVX2).
 */
namespace haswell {
} // namespace haswell
} // namespace simdjson

//
// These two need to be included outside SIMDJSON_TARGET_HASWELL
//
#include "simdjson/haswell/implementation.h"
#include "simdjson/haswell/intrinsics.h"

//
// The rest need to be inside the region
//
#include "simdjson/haswell/begin.h"

// Declarations
#include "simdjson/generic/dom_parser_implementation.h"
#include "simdjson/haswell/bitmanipulation.h"
#include "simdjson/haswell/bitmask.h"
#include "simdjson/haswell/simd.h"
#include "simdjson/generic/jsoncharutils.h"
#include "simdjson/generic/atomparsing.h"
#include "simdjson/haswell/stringparsing.h"
#include "simdjson/haswell/numberparsing.h"
#include "simdjson/haswell/end.h"

#endif // SIMDJSON_IMPLEMENTATION_HASWELL
#endif // SIMDJSON_HASWELL_COMMON_H

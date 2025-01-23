// murmur3.h

#ifndef MURMUR3_X64_128_H
#define MURMUR3_X64_128_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct murmur128_t {
  uint64_t h1;
  uint64_t h2;
} murmur128_t;

murmur128_t MurmurHash3(const void *key, size_t len, uint32_t seed);

#ifdef __cplusplus
}
#endif

#endif

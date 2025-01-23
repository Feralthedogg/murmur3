// main.c

#include "murmur3.h"
#include <stdio.h>
#include <string.h>

int main(void) {
  const char *text = "Hello, World!";
  uint32_t seed = 1234;

  murmur128_t hash_val = MurmurHash3(text, strlen(text), seed);

  printf("Input text: \"%s\"\n", text);
  printf("Seed      : %u\n", seed);
  printf("Hash (128-bit) => h1: 0x%016llx, h2: 0x%016llx\n",
         (unsigned long long)hash_val.h1, (unsigned long long)hash_val.h2);

  char hash_string[33];
  sprintf(hash_string, "%016llx%016llx", hash_val.h1, hash_val.h2);
  printf("Hash (string): %s\n", hash_string);

  return 0;
}

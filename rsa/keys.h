#include "common.h"

typedef struct {
  ll publickey;
  ll privatekey;
} KEYS;

void generate_keys(KEYS* result);
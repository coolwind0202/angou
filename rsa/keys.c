#include "common.h"
#include "keys.h"


void generate_keys(KEYS* result) {
  ll p, q, n, l, e, d;
  p = find_prime_number();
  q = find_prime_number();

  n = p * q;
  l = lcd(p - 1, q - 1);
  
  /*
    e の生成方法
  */

  /*
    d の生成方法
    L を法として d は e の逆数
  */

  d = reciprocal(e, l);

  result->publickey = d;
  result->privatekey = e;
}
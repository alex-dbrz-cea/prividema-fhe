#ifndef GLWE_ENCRYPT_PARAMS_H
#define GLWE_ENCRYPT_PARAMS_H

#include <stdint.h>

typedef struct glwe_encrypt_params{
    uint64_t N;
    uint64_t k;
    uint64_t kappa; //base_2k
    uint64_t l_a; //size of the decomposition of a
    uint64_t l_b; //size of the decomposition of b
} GLWE_ENCRYPT_PARAMS;

#endif // GLWE_ENCRYPT_PARAMS_H
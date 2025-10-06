#ifndef GLWE_CIPHERTEXT_H
#define GLWE_CIPHERTEXT_H

#include "glwe_encrypt_params.h"
#include <stdint.h>

typedef struct glwe_ciphertext {
    GLWE_ENCRYPT_PARAMS* params;
    int64_t* b; 
    int64_t* a; // vector of k elements
    void* data; // memory of the struct
} GLWE_CIPHERTEXT;

#endif // GLWE_CIPHERTEXT_H
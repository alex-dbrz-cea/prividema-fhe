#ifndef GGSW_KEY_H
#define GGSW_KEY_H

#include "ggsw_ciphertext.h"

// TODO : To be Defined (spqlios).
typedef struct int_pol {} INT_POL;

typedef struct ggsw_secret_key{
    INT_POL* values; // The key itself.
} GGSW_SECRET_KEY;

typedef struct ggsw_public_key{
    GGSW_CIPHERTEXT* pk; // Public key is multiple encryptions of 0
    // Another thing to count size of key ?
} GGSW_PUBLIC_KEY;

#endif // GGSW_KEY_H
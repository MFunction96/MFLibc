//
// Created by MFunction on 09/07/2019.
//

#ifndef MFLIBC_BIGDOUBLE_H
#define MFLIBC_BIGDOUBLE_H

#include "BigInteger.h"

namespace mflibc
{
    class BigDouble : public BigInteger
    {
    protected:
        unsigned long long _point_position;
    public:
        explicit BigDouble(const char *&number);

        BigDouble *operator+(const BigDouble &number) const;

        BigDouble *operator-(const BigDouble &number) const;

        BigDouble *operator*(const BigDouble &number) const;

        BigDouble *operator/(const BigDouble &number) const;

        ~BigInteger();
    };
}


#endif //MFLIBC_BIGDOUBLE_H

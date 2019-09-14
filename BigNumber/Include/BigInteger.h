//
// Created by MFunction on 09/04/2019.
//

#ifndef MFLIBC_BIGINTEGER_H
#define MFLIBC_BIGINTEGER_H

#include <cstring>
#include <cctype>
#include <memory>
#include <vector>

#include "BigNumber.h"
#include "Exception.h"

using namespace std;

namespace mflibc {
    class BigInteger : public BigNumber {
    protected:

    public:
        explicit BigInteger(const char *&number);

        BigInteger *operator+(const BigInteger &number) const;

        BigInteger *operator-(const BigInteger &number) const;

        BigInteger *operator*(const BigInteger &number) const;

        BigInteger *operator/(const BigInteger &number) const;

        ~BigInteger();
    };
}

#endif //MFLIBC_BIGINTEGER_H

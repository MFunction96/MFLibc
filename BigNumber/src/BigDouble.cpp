//
// Created by MFunction on 09/07/2019.
//

#include "BigDouble.h"

mflibc::BigDouble::BigDouble(const char *&number) : BigInteger(number) {
    _point_position = 0;
}

mflibc::BigDouble *mflibc::BigDouble::operator+(const mflibc::BigDouble &number) const {
    return nullptr;
}

mflibc::BigDouble *mflibc::BigDouble::operator-(const mflibc::BigDouble &number) const {
    return nullptr;
}

mflibc::BigDouble *mflibc::BigDouble::operator*(const mflibc::BigDouble &number) const {
    return nullptr;
}

mflibc::BigDouble *mflibc::BigDouble::operator/(const mflibc::BigDouble &number) const {
    return nullptr;
}

mflibc::BigDouble::~BigInteger() {

}

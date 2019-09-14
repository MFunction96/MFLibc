//
// Created by MFunction on 09/04/2019.
//

#include <BigInteger.h>

using namespace mflibc;

BigInteger::BigInteger(const char *&number) {
    const auto len = strlen(number);
    unsigned long long num = 0;
    for (auto i = len - 1; i >= 0; --i) {
        if (i == 0 && number[i] == '-') {
            _negative = true;
            _big_number->push_front(num);
        } else {
            if (!isdigit(number[i])) throw Exception();
            ++_digitals;
            num = num * 10 + number[i] - '0';
            if (_digitals % 8 == 0 || !i) {
                _big_number->push_front(num);
                num = 0;
            }
        }
    }
}

BigInteger::~BigInteger() {

}

BigInteger *BigInteger::operator+(const BigInteger &number) const {

    return nullptr;
}

BigInteger *BigInteger::operator-(const BigInteger &number) const {
    return nullptr;
}

BigInteger *BigInteger::operator*(const BigInteger &number) const {
    return nullptr;
}

BigInteger *BigInteger::operator/(const BigInteger &number) const {
    return nullptr;
}



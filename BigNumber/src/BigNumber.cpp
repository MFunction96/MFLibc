//
// Created by MFunction on 09/07/2019.
//

#include "BigNumber.h"

using namespace mflibc;

BigNumber::BigNumber() {
    _big_number = shared_ptr<list<unsigned long long>>();
    _negative = false;
    _digitals = 0;
}

BigNumber::BigNumber(const BigNumber &bigNumber) {
    _big_number = bigNumber._big_number;
    _negative = bigNumber._negative;
    _digitals = bigNumber._digitals;
}

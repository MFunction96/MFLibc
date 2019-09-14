//
// Created by MFunction on 09/07/2019.
//

#ifndef MFLIBC_BIGNUMBER_H
#define MFLIBC_BIGNUMBER_H

#include <memory>
#include <list>

using namespace std;

namespace mflibc {
    class BigNumber {
    protected:
        shared_ptr<list<unsigned long long>> _big_number;
        bool _negative;
        unsigned long long _digitals;

        explicit BigNumber();

        BigNumber(const BigNumber &bigNumber);

        virtual shared_ptr<char[]> C_Str() = 0;
    };
}

#endif //MFLIBC_BIGNUMBER_H

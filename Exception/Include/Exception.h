//
// Created by MFunction on 09/04/2019.
//

#ifndef MFLIBC_EXCEPTION_H
#define MFLIBC_EXCEPTION_H

using namespace std;

namespace mflibc
{
    class Exception : public exception{
    public:
        explicit Exception() = default;
        explicit Exception(int error_code);
        explicit Exception(const char* & message);
    };
}

#endif //MFLIBC_EXCEPTION_H

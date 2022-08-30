#ifndef HELPER_H
#define HELPER_H

//
//  time related macros
//

#define SEC_2_MILLISEC(x)   x*1000

#define SEC_2_MICROSEC(x)   x*1000000

#define MILLIS_2_MICROS(x)  x*1000

#define MILLISEC_2_SEC(x)   x/1000


//
//  macros for bitwise operations
//
#define SET_BIT(X,N)        (X | (1 << N))

#define CLEAR_BIT(X,N)      (X & ~(1 << N))

#define TOGGLE_BIT(X,N)     (X ^ (1 << N))

#define CHECK_BIT(X,N)      (X & (1 << N))

//
//  unions
//
typedef union FLOAT_2_UNSIGNED16
{
    float flt32;
    unsigned short ui16_Array[2];
}uFloatToUInt16_t;

typedef union INT32_2_UNSIGNED16
{
    int int32;
    unsigned short ui16_Array[2];
}uInt32ToInt16_t;

#endif

#include<stdio.h>
#include<stdint.h>
int main()
{
    uint8_t value=5; //0000 0101 ;
    uint8_t leftshift= value<<2; //left shift;
    uint8_t rightshift= value>>1; //right shift;
    printf("Original value: %u \n", value);
    printf("left shift by 2: %u \n",leftshift );
    printf("right shift by 1: %u \n",rightshift);
}
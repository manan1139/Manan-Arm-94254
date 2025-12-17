#include<stdio.h>
#include<stdint.h>
int main(void){
    uint16_t reg=0xABCD;
    uint8_t lower4=reg & 0x0F;
    uint8_t upper4_lowerbyte = (reg& 0xF0)>>4;
    printf("lower 4 bit:0x%X\n",lower4);
    printf("upper 4 bit of lower byte:0x%X\n",upper4_lowerbyte);
    }

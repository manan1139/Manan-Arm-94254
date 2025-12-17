#include <stdio.h>
#include <stdint.h>

int main(void) {
    int8_t value = 0x08;      
    int bitPosition = 3;       

    uint8_t mask = (uint8_t)(1u << bitPosition);
    if (((uint8_t)value & mask) != 0u) {
        int bit = ((uint8_t)value >> bitPosition) & 1u;
        printf("Bit %d is set (value = %d)\n", bitPosition, bit);
    } else {
        printf("Bit %d is clear\n", bitPosition);
    }
   return 0;
}


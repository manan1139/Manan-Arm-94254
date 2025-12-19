#include <stdio.h>

int main() {
    int value = 8;        
    int bitPosition = 3;  
    if ((value >> bitPosition) & 1) {
        printf("Bit %d is set\n", bitPosition);
    } else {
        printf("Bit %d is clear\n", bitPosition);
    }

    return 0;
}
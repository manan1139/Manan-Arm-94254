#include <stdio.h>

int main() {
    int value = 8;        // Binary: 00001000
    int bitPosition = 3;  // We want to check the 4th bit (index 3)

    // Move the bit we want to the far right, then check it with '& 1'
    if ((value >> bitPosition) & 1) {
        printf("Bit %d is set\n", bitPosition);
    } else {
        printf("Bit %d is clear\n", bitPosition);
    }

    return 0;
}
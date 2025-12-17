#include <stdio.h>
void printBinary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}
int main() {
    unsigned char reg = 0x2A;   // Initial register value = 0x2A (00101010)
    int n = 4;        // Bit to set

    // Create mask and set bit
    unsigned char mask = 1 << n;
    reg = reg | mask;

    // Print results
    printf("Register value after setting bit %d:\n", n);
    printf("Hexadecimal: 0x%X\n", reg);
    printf("Binary :");
    printBinary(reg);
    printf("\n");
    return 0;
}
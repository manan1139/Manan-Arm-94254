#include <stdio.h>
void printBinary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}
int main() {
    unsigned char reg = 0x2A;   // Initial register value = 0x2A (00101010)
    int n = 5;        // Bit to toggle

    // Create mask and toggle bit
    unsigned char mask = ^(1 << n);
    reg = reg ^(1<<n);

    // Print results
    printf("Register value after clearing bit %d:\n", n);
    printf("Hexadecimal: 0x%X\n", reg);
    printf("Binary :");
    printBinary(reg);
    printf("\n");
    return 0;
}
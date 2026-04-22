#include <stdio.h>
#include <stdint.h>

// Function to print 8-bit binary representation
void print_bits(uint8_t n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    // -------------------------------
    // Initial values (8-bit integers)
    // -------------------------------
    
    int8_t  a = 127;   // Max signed 8-bit value:  127  (01111111)
    uint8_t b = 255;   // Max unsigned 8-bit:     255  (11111111)

    int8_t  x = -128;  // Min signed 8-bit value: -128 (10000000)
    uint8_t y = 0;     // Min unsigned 8-bit:       0  (00000000)

    // -------------------------------
    // BEFORE operations
    // -------------------------------
    
    printf("Before overflow:\n");

    printf("a = %4d (", a); print_bits(a); printf(")\n");
    printf("b = %4u (", b); print_bits(b); printf(")\n");
    printf("x = %4d (", x); print_bits(x); printf(")\n");
    printf("y = %4u (", y); print_bits(y); printf(")\n");

    // -------------------------------
    // Perform operations (overflow)
    // -------------------------------
    
    a = a + 1;  // 127 + 1  → wraps to -128
    b = b + 1;  // 255 + 1  → wraps to 0

    x = x - 1;  // -128 - 1 → wraps to 127
    y = y - 1;  // 0 - 1    → wraps to 255

    // -------------------------------
    // AFTER operations
    // -------------------------------
    
    printf("\nAfter overflow:\n");

    printf("a = %4d (", a); print_bits(a); printf(")\n");
    printf("b = %4u (", b); print_bits(b); printf(")\n");
    printf("x = %4d (", x); print_bits(x); printf(")\n");
    printf("y = %4u (", y); print_bits(y); printf(")\n");

    return 0;
}
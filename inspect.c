#include <stdio.h>
#include <stdint.h>
#include <string.h>

void print_binary_8bit(unsigned char value) {
    for (int i = 7; i >= 0; i--) {
        printf("%u", (value >> i) & 1u);
    }
}

void check_endianness() {
    uint16_t x = 0x0001;
    unsigned char *ptr = (unsigned char *)&x;

    if (*ptr == 1) {
        printf("Byte order: Little-endian\n");
    } else {
        printf("Byte order: Big-endian\n");
    }
}

int main(void) {
    int input;
    printf("Enter value (0-255): ");
    if (scanf("%d", &input) != 1) return 1;

    if (input < 0 || input > 255) {
        printf("Invalid value. Must be 0-255.\n");
        return 1;
    }

    uint8_t val = (uint8_t)input;

    printf("\n=== 8-bit Value ===\n");
    printf("Decimal:      %u\n", val);
    printf("Hexadecimal:  0x%02X\n", val);
    printf("Binary:       ");
    print_binary_8bit(val);
    printf("\n");

    if (val >= 32 && val <= 126) {
        printf("Character:    %c\n", val);
    } else {
        printf("Character:    (not printable)\n");
    }

    printf("\n=== 32-bit Value ===\n");
    uint32_t val32 = 0x12345678;
    unsigned char *p = (unsigned char *)&val32;

    printf("Value: 0x%08X\n", val32);
    printf("Size: %zu bytes\n", sizeof(val32));
    printf("Memory:\n");
    for (int i = 0; i < 4; i++) {
        printf("  byte %d: 0x%02X\n", i, p[i]);
    }
    check_endianness();

    return 0;
}

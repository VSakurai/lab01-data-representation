#include <stdio.h>

void print_binary(unsigned int value) {
    for (int i = 31; i >= 0; i--) {
        printf("%u", (value >> i) & 1u);
    }
}

int main(void) {
    unsigned int values[] = {10, 65, 127, 255, 256, 1024};

    for (int i = 0; i < 6; i++) {
        printf("Decimal: %4u\tHex: 0x%03X\tBinary: ", values[i], values[i]);
        print_binary(values[i]);
        printf("\n");
    }
    return 0;
}

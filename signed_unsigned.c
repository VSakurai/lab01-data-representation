#include <stdio.h>
#include <stdint.h>

int main(void) {
    int8_t signed_value = -1;
    uint8_t unsigned_value = 255;

    printf("signed -1:    %d (Hex: 0x%02X)\n", signed_value, (uint8_t)signed_value);
    printf("unsigned 255: %u (Hex: 0x%02X)\n", unsigned_value, unsigned_value);

    return 0;
}

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t value = 255;

    printf("Initial value: %u\n", value);
    value++;
    printf("After value++: %u\n", value);

    return 0;
}

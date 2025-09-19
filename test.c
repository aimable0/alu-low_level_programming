#include <stdio.h>

int main(void)
{

    for (int i = 0; i < 10; i++) {
        for (int m = 0; m < 10; m++) {
            if (m == 0) {
                putchar('0');
                continue;
            }
            if (i * m < 10) {
                putchar(',');
                putchar(' ');
                putchar(' ');
                putchar((i * m) + '0');
            } else {
                int product = i * m;
                int last_digit = product % 10;
                int first_digit = (product  - last_digit) / 10;
                putchar(',');
                putchar(' ');
                putchar(first_digit + '0');
                putchar(last_digit + '0');

            }
        }
        printf("\n");
    }
    return 0;
}
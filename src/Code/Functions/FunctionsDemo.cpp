#include <stdio.h>

#define square(x) x * x
main() {
    int z = 3;
    printf("%d\n", square(z));

    printf("%d\n", square(z + 1));

    printf("%d\n", square(z + 2));
}
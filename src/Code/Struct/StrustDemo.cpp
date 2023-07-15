#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atoi */

int main ()
{
    int a;
    char memory[256];
    printf ("Enter a number: ");
    fgets (memory, 256, stdin);
    a = atoi (memory);
    printf ("The value entered is %d. Its double is %d.\n", a, a*2);
    return 0;
}
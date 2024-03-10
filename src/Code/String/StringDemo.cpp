#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atoi */

#include <iostream>
#include <string>

using namespace std;
int main ()
{
    int a;
    char memory[256];
    printf ("Enter a number: ");
    fgets (memory, 256, stdin);
    a = atoi (memory);
    printf ("The value entered is %d. Its double is %d.\n", a, a*2);

    string s="12";
    int i=atoi(s.c_str());

    cout << "number is " << i << endl;
    return 0;
}
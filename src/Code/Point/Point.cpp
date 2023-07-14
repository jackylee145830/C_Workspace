#include <iostream>

using namespace std;

int main()
{
    int a1=5;
    int *p=NULL;      
    int **q=NULL;

    int a2;

    printf("\n");
    printf("A ==self adress==\n");
    printf("The address of &a1 is %x.\n", &a1);
    printf("The address of &p is %x.\n", &p);
    printf("The address of &q is %x.\n", &q);

    p=&a1;
    q=&p;
    printf("B ==point adress==\n");
    printf("The address of &a1 is %x.\n", &a1);
    printf("The point address of p is %x.\n", p);
    printf("The point address of q is %x.\n", q);

    printf("Z ==value==\n");
    printf("The value of a1 is %d.\n", a1);
    printf("pointing to the value *p is %d.\n", *p);
    printf("pointing to the value **q is %d.\n", **q);


    //指標也可以像一般變數一樣做運算
    a2 = a1 + 2;    // a2 變成 (5+2) 7
    a2 += a1;       // a2 變成 (7+5) 12
    *p = a2;        // a1 從5變成 12       //取出p內記憶體位址中的值 等於目前a2的值
    (*p)++;         // a1 變成 (12++) 13

    printf("Z1 ==value==\n");
    printf("The value of a1 is %d.\n", a1);
    printf("The value of a2 is %d.\n", a2);
    printf("pointing to the value *p is %d.\n", *p);
    printf("pointing to the value **q is %d.\n", **q);


    return 0;

}


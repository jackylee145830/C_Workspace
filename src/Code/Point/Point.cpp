#include<stdio.h>
#include <iostream>
using namespace std;

int * even(); //先告訴電腦說我有一個函式

int main()
{
    int *arr; //用來存陣列
    
    arr = even();
    for(int i = 0; i < 15; ++i)
    {
        printf("%d\n", arr[i]);
		 //printf("%d\n", *(arr+i));
    }
    return 0;
}
int * even() // 回傳值是一個指標
{
     static int num[15];
     int even = 0;
     for(int i = 0; i < 15; ++i)
     {
           num[i] = even;
           even += 2;
     }
     return (num); // 直接回傳陣列（指標）回去
}

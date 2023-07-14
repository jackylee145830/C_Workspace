
#include<stdio.h>
int main(){
	int x = 38; //宣告變數x並指定初值
	int *p; //宣告指標變數p儲存int變數位址
	p = &x; //指定指標變數p的值是變數x的位址
	printf("變數x的位址 >> %p\n\n", &x);
	printf("指標變數p的值 >> %p\n\n", p);
	printf("指標變數p的位址 >> %p", &p);
	return 0;
}
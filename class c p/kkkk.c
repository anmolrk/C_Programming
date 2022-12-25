#include<stdio.h>
int cubebyvalue(int n);
int main()
{
	int no=5;
	printf("the original value of number id %d",no);
	no=cubebyvalue(no);
	printf("\n the new value of number is %d",no);
	return 0;
}
 int cubebyvalue(int n)
 {
 	return n*n*n;
 }


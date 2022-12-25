#include<stdio.h>
int main()
{
	int n;
	for(n=10;n>0;--n)
	{
		if(n<8){
		printf("no is less then 8 not print");
		break;}
		printf("\t%d\n",n);
	}
}

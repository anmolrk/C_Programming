#include<stdio.h>
void main()
{
	int a=10;
	char c='R';
	void *p;
	p=&a;
	printf("\n value of pointer to by generic pointr is %d",(*(int *)p));
	p=&c;
	printf("\n value of pointer to by generic pointr is %d",(*(char *)p));

}

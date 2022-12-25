#include<stdio.h>
int main()
{
	
	void abc(float,int);
	void xyz(int);

	abc(2.5,3);
	xyz(4);
}
void abc(float s,int d)
{
	s=d;
	printf("%d\n",s);
}
void xyz(int w)
{
	printf("%d\n",w);
}

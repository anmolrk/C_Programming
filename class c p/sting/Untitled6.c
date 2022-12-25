#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[10], s2[10];
	int n;
	printf("enter string  ");
	gets(s1);
	printf("enter string  ");
	gets(s2);
	int diff=stricmp(s1,s2);
	if(diff==0)
	printf("equal");
	else
	printf("not equal");}

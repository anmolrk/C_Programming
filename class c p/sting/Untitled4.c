#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[10], s2[10];
	int n;
	printf("enter string  ");
	gets(s1);
	printf("enter destination string  ");
	gets(s2);
	printf("enter no. of char to be replaced");
	scanf("%d",&n);
	strncpy(s1,s2,n);
	printf("first string %s",s1);
	printf("second string %s",s2);
}

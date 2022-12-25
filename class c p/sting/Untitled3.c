#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[10], s2[10];
	printf("enter string  ");
	gets(s1);
	strcpy(s2,s1);
	printf("First string %s",s1);
	printf("Second string %s",s2);
}
	

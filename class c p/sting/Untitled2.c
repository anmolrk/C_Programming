#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	int length;
	printf("enter string  ");
	gets(str);
	length=strlen(str);
	printf("length of string = %d",length);
}

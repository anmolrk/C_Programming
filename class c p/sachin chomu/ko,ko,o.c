#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100],s3[100];
	int x;
	printf("enter the string s1");
	gets(s1);
	printf("enter lenght of string is %d",strlen(s1));
	printf("enter the string s2");
	gets(s2);
	printf("\n string after the concatenation \n");
	puts(s2);
	printf("\n string copy %s,strcpy(s1,s2)");
	printf("\n string s1 &s2 after copy");
	puts(s1);
	puts(s2);
	printf("\n string 3 reverse %s",strrev(s2));
	printf("\n string s1 upper case %s",strupr  (s1));
	printf("\n string s3 lower case %s",strlwr(s2));

}

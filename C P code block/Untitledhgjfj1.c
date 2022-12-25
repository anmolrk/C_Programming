#include<stdio.h>
#include<conio.h>
void a();
void b();
main()
{
    a();
}
void a()
{
    printf("This is a \n");
    b();
}
void b()
{
    printf("this is a calling to b\n");
}

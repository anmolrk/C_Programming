#include<stdio.h>
void a()
{
    printf("Hello\t");
}
void b()
{
a();    a();    a();
}
void c()
{
a();    b();    c();
}
int main()
{
a();    b();    c();
}

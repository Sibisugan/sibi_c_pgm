#include <stdio.h>

int main()
{   int x=-25;
unsigned int y=36;
char charact='h';
float pi=3.14;
double z;
short a;
long b;
long long c;
long double d;


    printf("Value of integer X : %d\n",x);
    printf("Value of unsigned int Y : %u\n",y);
    printf("Value of character test : %c\n",charact);
    printf("Value of pi=%2.f\n",pi);
    printf("Size of double : %d\n ",sizeof(z));
    printf("Size of short : %d\n ",sizeof(a));
    printf("Size of long : %d\n",sizeof(b));
    printf("Size of long long : %d\n",sizeof(c));
    printf("Size of long double : %d\n",sizeof(d));
 
    return 0;
}

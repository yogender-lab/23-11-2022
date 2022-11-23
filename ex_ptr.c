
#include <stdio.h>

int main()
{
    int a=5;
    int *p;
    int **pa;
    p=&a;
    pa=&p;
    printf("adress of a=%p\n",&a);
    printf("The value of p=%p\n",p);
    printf("the value of *p=%d\n",*p);
    printf("the value of pa=%p\n",pa);
    printf("the value of &pa=%p\n",&pa);
    printf("the value of pa=%p\n",pa);
    printf("the value of *pa=%p\n",*pa);
    printf("the value of **pa=%d\n",**pa);
    printf("the value of &ppa=%p\n",&pa);
    return 0;
}

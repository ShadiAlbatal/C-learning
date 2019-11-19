
#include<stdio.h>

void main(){

// 1)

    int a= 5;
    char b= 's';

    int *ptr_pa= &a;
    char *ptr_pb= &b;

    printf("1");
    printf("\n a:%d, b=:%c", a, b);
    printf("\n ptr_pa:%p, ptr_pb=:%p", ptr_pa, ptr_pb);

// 2)
    *ptr_pa= 10;
    *ptr_pb= 'lH';

    printf("\n 2");
    printf("\n pa:%d, pb=:%c", a, b);
    printf("\n ptr_pa:%p, ptr_pb=:%p", ptr_pa, ptr_pb);

    myfunc(ptr_pa);
}

// 3)
    void myfunc(int *pa){

        *pa= *pa + 5;
        printf("\n 3");
        printf("\n%d", *pa);
        printf("\n%d", pa);
    }



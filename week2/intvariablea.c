#include<stdio.h>

void main(){

    int a= 7;

    int *ptr_a= &a;

    *ptr_a=62;
    printf(" 0x%p, %d", ptr_a, *ptr_a);

}

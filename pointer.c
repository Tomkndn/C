#include<stdio.h>

int main(){
    int m=10,n,o;
    int *z = &m;
    n=4;
    o=8;
    printf("z stores the address of m  = %p\n", z);
    printf("*z stores the value of m =%d\n", *z);
    printf("&m is the address of m =%u\n", &m);
    printf("&n stores the address of n =%p\n", &n);
    printf("&o  stores the address of o =%u\n", &o);
    printf("&z stores the address of z =%p\n", &z);
    return 0;
}
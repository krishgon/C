#include <stdio.h>

int main(void){
    int i = 45;

    int *ptr;
    int* ptr2;

    ptr = &i;
    ptr2 = ptr;

    printf("%p\n", ptr);
    printf("%p\n", &ptr2);


}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char name[5] = "Aarth";
    int code = tolower(name[0]);

    // printf("your name is %d\n", tolower(name[0]));
    printf("%i", code);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    printf("the value of argc is: %i\n", argc);

    for(int i=0; i < argc; i++){
        printf("Argument number %d has value of %s\n", i, argv[i]);
    }

    return 0;

}
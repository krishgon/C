#include <stdio.h>


int main(void)
{
    
    int i[5];
    i[0] = 1;
    i[1] = 2;
    i[2] = 45;


    if (i[2] == 45){
        i[2] = 3; 
    }

    printf("the third number was: %i\n", i[2]);

    return 0;


}

#include <stdio.h>
#include <stdlib.h>

int main(const char *file1){
    char str[60];

    FILE *fp = fopen(file1,"r");
    if(fp == NULL){
        perror("Error opening file");
        return(-1);
    }
    else
    {
        char *char1;
        char1 = fgets(str, 2, fp);
        if(*char1 == 'H'){
            printf("You passed and the letter was: %c \n", *char1);

        }
        else
        {
            printf("You did not pass\n");
        }
        
        
    }

    fclose(fp);

    return(0);
    






}
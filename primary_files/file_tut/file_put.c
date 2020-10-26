#include <stdio.h>
#include <stdlib.h>


int main(){
    // initalize pointer to the file
    FILE* tutfile;

    // create a file with write mode
    tutfile = fopen("text1.txt","w");

    // add content to the file
    fprintf(tutfile, "%s","Hello\n");

    fclose(tutfile);

    return 0;

}
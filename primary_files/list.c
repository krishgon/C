#include <stdio.h>
#include <stdlib.h>

// create the node structure
typedef struct node
{
    int number;
    // set the 'next' pointer automatically to the next node
    struct node *next;
}node;


int main(void){

// initialise node type list which is a pointer of size 0
    node *list = NULL;


// add number to the list
    // create a chunk of memory for one number
    node *n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    // put the numbers in the chunk of memory
    n->number = 1;
    n->next = NULL;
    // point list to the first number
    list = n; 


// add number to the list
    // create a chunk of memory for one number
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    // put the numbers in the chunk of memory
    n->number = 2;
    n->next = NULL;
    list->next = n;


// add number to the list
    // create a chunk of memory for one number
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    // put the numbers in the chunk of memory
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

// print list
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
       printf("%i\n", tmp->number);
    }
    
// free list
    while(list != NULL){
        node *tmp = list->next;
        free(list);
        list = tmp;
    }

}
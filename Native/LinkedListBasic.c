#include<stdio.h>

#define EXIT_VAL 3

//Linked List Node
struct node {
    int value;
    struct node *next;
};

//Start of execution
void main(int args, char **argv){

    int userInput = 0;
    do{
        //Options to select the input
        printf("Please select one below\n");
        printf("1. Add an element into the last of Linked List\n");
        printf("2. Delete an element from Linked List\n");
        printf("3. Exit\n");
        printf(": ");
        
        //Getting the user input
        scanf("%d", &userInput);

    }while(userInput != EXIT_VAL);

    return;

}

#include<stdio.h>
#include<stdlib.h>

#define EXIT_VAL 4


//Linked List Node
struct node {
    int value;
    struct node *next;
};

struct node *head = NULL;

//Function to create a new node with a value entered by user
struct node* createNewNode(){

    //Allocating memory for the new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    //Getting the value from user
    printf("Enter the Integer value to be added to the linked list:");
    scanf("%d",&newNode->value);

    //Assigning NULL to the next pointer
    newNode->next = NULL;

    //returning the node created
    return newNode;
}

//Function to add element into the linked List
void addNode(){
    
    //Creating new Node
    struct node *newNode = createNewNode();

    //Checking if it is the first node
    if(head == NULL){

        //Making the new Node as the head
        head = newNode;

        return;
    }

    //Looping through the linked List
    struct node *tmp = head;

    while(tmp->next != NULL){

        tmp = tmp -> next;
    }

    //temp is at the last node
    //New Node is now added as the last node
    tmp -> next = newNode;
    
    return;
}

//Function to print the list
void printList(){

    //check if the list is empty
    if(head == NULL){
        printf("Empty List\n");
        return;
    }

    //Loop through the list to print each elements
    struct node *tmp = head;
    while(tmp != NULL){

        printf("%d -> ", tmp->value);
        tmp = tmp -> next;
    }

    printf("NULL\n");
    return;
}
//Function to handle user options
void handleUserInput(int option){

    //Switch case logic
    switch(option){
        case 1:
            //Option to add elements into the linked List
            addNode(); 
            break;
        case 2:break;
        case 3:
               printList();
               //Option to print the lsit
               break;
        default:break;
    }

}

//Start of execution
void main(int args, char **argv){

    //User input variable
    int userInput = 0;
    do{
        //Options to select the input
        printf("Please select one below\n");
        printf("1. Add an element into the last of Linked List\n");
        printf("2. Delete an element from Linked List\n");
        printf("3. Print List\n");
        printf("4. Exit\n");
        printf(": ");
        
        //Getting the user input
        scanf("%d", &userInput);

        //Handling User Input
        handleUserInput(userInput);

    }while(userInput != EXIT_VAL);

    return;

}

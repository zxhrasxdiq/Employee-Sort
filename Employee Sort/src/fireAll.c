#include "../include/headerA3.h"

void fireAll (a3Emp ** headLL){

    a3Emp * currEmployee= *headLL;
    a3Emp * temp= NULL;   // creating  a temp

    if(currEmployee==NULL){  // checking if empty
    printf("Linked List is Empty\n");
    }

    while(currEmployee!=NULL){
    temp = currEmployee;  // making the temp point to currEmployee
    currEmployee= currEmployee->nextEmployee;  // moving through the list
    free(temp);  // freeing temp
    }

    *headLL=NULL;  //making the head = NULL indicating the list is empty

    printf("All fired. Linked list is now empty.\n");

}

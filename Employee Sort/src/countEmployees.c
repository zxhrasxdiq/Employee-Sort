#include "../include/headerA3.h"

int countEmployees (a3Emp * headLL){

    a3Emp * currEmployee=headLL;    //initializing variables
    int counter=0;

    if(currEmployee==NULL){  //checking if list is empty
      printf("Linked list is Empty\n");
    }

    while(currEmployee!=NULL){
    counter++;  // if the while condition is met increment counter
    currEmployee = currEmployee->nextEmployee;  // move to the next node
    }

    return counter;  //return the counter
}

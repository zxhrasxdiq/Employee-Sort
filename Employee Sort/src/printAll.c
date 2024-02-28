#include "../include/headerA3.h"

void printAll (struct employee * headLL){

    int j=1;                       //intializing variables
    a3Emp * currEmployee = headLL;

    if(currEmployee==NULL){    //if currEmployee (which is the head) is null that means the list is empty
    printf("Linked List is Empty\n");
    }

    while (currEmployee != NULL){

    printf("Employee #%d:\n", j);   // j is 1 first because we want the head to hold position 1
    printf("Employee ID: %d\n", currEmployee->empId);   // printing elements within the linked structs
    printf("First Name: %s\n", currEmployee->fname);
    printf("Last Name: %s\n", currEmployee->lname);

    printf("Dependents[%d]: ",currEmployee->numDependents);


    for(int i=0; i< currEmployee->numDependents;i++){  // nested for loop for loop for the 2D array (dependents

      if(i == (currEmployee->numDependents)-1){  // this if statement is used when i is 1 less then numDependents so that it doesnt
        printf("%s",currEmployee->dependents[i]);  //end in an ","
      }
      else{
        printf("%s,",currEmployee->dependents[i]);
      }
    }

    printf("\n");

    j++;  //increment j
    currEmployee = currEmployee-> nextEmployee;  // move to the next node

    printf("\n");

    }


}

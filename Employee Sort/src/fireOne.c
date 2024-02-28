#include "../include/headerA3.h"

void fireOne (a3Emp ** headLL, int whichOne){

a3Emp *currEmployee = *headLL;
a3Emp *prevEmployee =NULL;

int counter=1;  // because the head is one

    if(currEmployee == NULL){   // checking if the function is empty
      printf("Linked list is Empty\n");
    }

    while(currEmployee != NULL){   // while not at the end of the linked list
      if(counter == whichOne){   //if the counter is the same as the user input
        if(prevEmployee == NULL){  // if the previous employee is null
          *headLL=currEmployee->nextEmployee;  // make the next employee the head (the way the head is not lost)
        }
        else{
          prevEmployee->nextEmployee=currEmployee->nextEmployee; //since the previous employee is currEmployee, we have to make the nextEmployee for both the same
        }
        printf("Employee [Id:%d] fired.\n",currEmployee->empId); //prints the empId of the current employee
        free(currEmployee);  // then frees it
        //printf("There are now %d employees.\n",counter); // prints the counter of the employees left
      }

    prevEmployee=currEmployee;      //if the counter is not the same as whichOne then excute this block of code thart traverses the list and increments counter
    currEmployee= currEmployee->nextEmployee;
    counter++;

    }

   //printf("There are now %d employees.\n",countEmployees(headLL));
}




#include "../include/headerA3.h"

int lookOnId (struct employee * headLL, int whichEmpId){

    a3Emp * currEmployee = headLL;
    int position=1;  // starts with 1 because one of the requirements is that the head takes position 1


    if(currEmployee==NULL){  //checking if empty
      printf("Linked List is Empty\n");
    }


    while(currEmployee!=NULL){  // if not empty then go into while
      if(currEmployee->empId==whichEmpId){  // if the currEmployee->empId is the same as the user input(whichEmpId) then return the position
        return position;
      }

      currEmployee = currEmployee->nextEmployee;  // if not then go to the next node
      position++;  //and increment the postion
    }

    return -1; //if whichEmpId is not there then return a -1
}

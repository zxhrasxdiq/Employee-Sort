#include "../include/headerA3.h"

void printOne (struct employee * headLL, int whichOne){

    a3Emp * currEmployee = headLL;   // intializing variables
    int counter=1;

    if(currEmployee==NULL){
    printf("Linked List is Empty\n");
    }

    while (currEmployee != NULL){

      if(whichOne==counter){  // this condtion must be met so that the it only prints the node with the same position(counter) as whichOne
      printf("Employee ID: %d\n", currEmployee->empId); // printing members within struct (similar explaination to printAll)
      printf("First Name: %s\n", currEmployee->fname);
      printf("Last Name: %s\n", currEmployee->lname);

      printf("Dependents[%d]: ",currEmployee->numDependents);

      for(int i=0; i< currEmployee->numDependents;i++){

        if(i == (currEmployee->numDependents)-1){
          printf("%s\n",currEmployee->dependents[i]);
        }
        else {
          printf("%s,",currEmployee->dependents[i]);
        }
      }

      }
     currEmployee = currEmployee-> nextEmployee; //currEmployee is now the next node
     counter++; //incrementing counter
    }

}

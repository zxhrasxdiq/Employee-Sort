
#include "../include/headerA3.h"

void sortEmployeesId(struct employee * headLL) {
    a3Emp * currEmployee;
    a3Emp * prevEmployee;
    a3Emp * tempEmployee;
    int sorted;

//The way I approached sorting function is by using bubble sort//

    if (headLL == NULL) {
        printf("Linked List is Empty\n");
    }

    sorted = 0;  // sort = 0 (false)
    while (!sorted) { // while not sorted
      sorted = 1; // sort = 1 (true)
      prevEmployee = NULL;
      currEmployee = headLL;

        while (currEmployee->nextEmployee != NULL) { //while not the end of the linked list

          if (currEmployee->empId > currEmployee->nextEmployee->empId) {
            tempEmployee = currEmployee->nextEmployee;               // this block of code basically swaps the current employee
            currEmployee->nextEmployee = tempEmployee->nextEmployee;   // and the next employee
            tempEmployee->nextEmployee = currEmployee;
              if (prevEmployee == NULL) {  // this if statement is if the first employee was swapped so it updates the head
                headLL = tempEmployee;
              }
              else {
                prevEmployee->nextEmployee = tempEmployee;
                }
           prevEmployee = tempEmployee;              // keeps track/updates previous and current
           currEmployee = tempEmployee->nextEmployee;
           sorted = 0;
           }
           else {
             prevEmployee = currEmployee;      // this moves the list to the next node
             currEmployee = currEmployee->nextEmployee;
            }
        }
    }

    printf("After sorting on empId, the employees are as follows:\n");
    printf("\n");
    printAll(headLL); // prints the sorted linked list
}

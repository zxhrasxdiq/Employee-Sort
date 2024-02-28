#include "../include/headerA3.h"

int lookOnFullName (struct employee * headLL, char whichName [100]){

    a3Emp * currEmployee = headLL;   //initalizing variables 
    int position=1;
    char firstName[100];
    char lastName[100];

    sscanf(whichName,"%s%s",firstName,lastName); //using sscanf to split what whichName is into firstname and lastname

    if(currEmployee==NULL){   //checking if list is empty
      printf("Linked List is Empty\n");
    }


    while(currEmployee!=NULL){   // while not empty 
      if((strcmp(currEmployee->fname,firstName)==0)&&(strcmp(currEmployee->lname,lastName)==0)){ //used && because both must be true
        return position;  // return the postion on the list this condtion is true
      }

      currEmployee = currEmployee->nextEmployee;  //if the condtion isn't met move to the next employee in the list
      position++;  //increment the position

    }

    return -1;  // if whichName isnt found then return -1

}

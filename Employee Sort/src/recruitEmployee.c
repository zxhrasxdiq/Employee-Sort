#include "../include/headerA3.h"


void recruitEmployee (struct employee ** headLL){

    a3Emp *newEmployee=NULL;  //this varibale is for adding new employees
    a3Emp *currEmployee=NULL; // this variable is responsible for traversing the list
    int count=0;
    char response;
    char dNames [MAX_LENGTH][MAX_LENGTH];
    int dependentsCounter=0;

    currEmployee=*headLL;
    newEmployee= malloc(sizeof(a3Emp)); // mallocing the size of the new employee using the struct

    if(newEmployee==NULL){        // if the newEmployee is null there was an error in memory allocation
      printf("Error in Memory Allocation\n");
      return;
    }

    if(*headLL==NULL){   // if the headLL is null then make the newEmployee the head
    *headLL=newEmployee;
    }

    printf("First name: ");
    scanf("%s",newEmployee->fname);  //putting the first and last name into the linked list using arrow notation

    printf("Last name: ");
    scanf("%s",newEmployee->lname);

    for (int i=0;i< strlen(newEmployee->fname);i++){
    count+=(int)(newEmployee->fname[i]); //casting the empId by multipling it int to cast it
    }

    newEmployee->empId=count+strlen(newEmployee->lname); // adding the final empId by the length of lastname as required

    while(currEmployee!=NULL){

    if((currEmployee->empId)==(newEmployee->empId)){  // this if statement is used when two nodes have the same empId
    newEmployee->empId+=rand()%999 +1;               // if this happens a randomly generated number is used
    currEmployee=*headLL;
    }

    else{
    currEmployee=currEmployee->nextEmployee;  //else continue to the next node
    }

    }

    int i=1;
    do {   //using a do while loop as it only stops asking the user for dependent names if they answer 'y'
    printf("Enter the name of dependent %d: ",i);
    scanf("%s",dNames[dependentsCounter]); //scanning the string for dependents name
    dependentsCounter++;  //incrementing for number of dependents
    i++;  //incrementing so that the it displays the number of dependents

    printf("Do you have any more dependents? (y or n):");
    scanf(" %c",&response); // getting user response on whether they wish to continue

    }

    while (response=='y');
    newEmployee->dependents= malloc(sizeof(char*)*(dependentsCounter)); //malloc the space for char * using the dependentsCounter (rows)

    for (int i=0;i<dependentsCounter;i++){
    newEmployee->dependents[i]= malloc(sizeof(char)*MAX_LENGTH);  // malloc space using the MAX_LENGTH for char (colloumns)
    strcpy(newEmployee->dependents[i],dNames[i]); //strcpying what we hace in dNames into the linked list
    }

    newEmployee->numDependents= dependentsCounter; //making the numDependents hold the number dependentsCounter generated

    if(*headLL==NULL){
      *headLL=newEmployee;
    }

    else{
    currEmployee=*headLL;
      while (currEmployee->nextEmployee!=NULL){
        currEmployee= currEmployee->nextEmployee; // adding nodes
      }
    currEmployee->nextEmployee=newEmployee; //intializing currEmp->next to be newEmployee
    newEmployee->nextEmployee = NULL;       //and newEmp->next to be null (end of list)
    }

    if (dependentsCounter==1){  // if the dependents are only 1 do this do that it doesn't say "dependents"
      printf("You have 1 dependent.\n");
    }
    else{
      printf("You have %d dependents.\n",dependentsCounter);
    }
    printf("Your generated EmpID is %d\n", newEmployee->empId);   //printing generated empId
  }

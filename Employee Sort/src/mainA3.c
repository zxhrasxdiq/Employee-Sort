#include "../include/headerA3.h"

int main(){
                    //intializing variables
    int choice;
    a3Emp *headLL= malloc(sizeof(a3Emp));  //mallocing space for the head
    headLL = NULL;
    int userResponse=0;
    int userResponse2=0;
    char userResponse3[100];
    char userResponse6;
    int userResponse4=0;
    int position=0;
    int position2=0;
    int total=0;
    int total2=0;

do {

    for (int i=0; i<90;i++){
    printf("*");
    }
        printf ("\nHere is the menu \n");       //Printing the menu
        printf ("1.    Add a new employee.\n");
        printf ("2.    Print data of all employees.\n");
        printf ("3.    Print data nth employee.\n");
        printf ("4.    Search for employee based on empId.\n");
        printf ("5.    Search for employee based on full name.\n");
        printf ("6.    Count the total number of employees.\n");
        printf ("7.    Sort the employees based on their empId.\n");
        printf ("8.    Remove the nth employee in the LL.\n");
        printf ("9.    Remove the employee in the current LL.\n");
        printf ("10.    Exit\n");

    for(int i=0;i<90;i++){
      printf("*");
    }
        printf ("\nEnter your choice: ");
        scanf ("%d", &choice);

        switch (choice) {

    case 1:
    recruitEmployee(&headLL);  // &headLL because it is a **
    break;

    case 2:
    printAll(headLL);  //calling the printing function
    break;

    case 3:
    printf("Enter a position:\n");
    scanf("%d",&userResponse);
    printOne(headLL,userResponse); //sending the head and the userResponse to the printOne Function

    break;

    case 4:
    printf("Enter an Employee ID #:");
    scanf("%d",&userResponse2);

    position=lookOnId(headLL,userResponse2);  //sending the head and the userResponse2 to the lookOnId and returning the position 
    printOne(headLL,position);    // sending the position and head to be printOne

    if(position==-1){
    printf("Employee ID is not found\n");  //if returned -1 then ID is not found
    }

    break;

    case 5:
    printf("Enter an Employee Name:");
    getchar();
    fgets(userResponse3,100,stdin);  // using fgets to catch both lastname and firstname

    position2=lookOnFullName(headLL,userResponse3); // sending the head and the userResponse3 to the function lookOnFullName
    printOne(headLL,position2);  // the returned postion is sent to printOne function

    if(position2==-1){
    printf("Employee Name is not found\n");  //if -1 then the employee is not found
    }

    break;

    case 6:
    total=countEmployees(headLL);  //sending the head to the function the counter is returned
    printf("Total number of Employees = %d \n",total);  // the returned the counter is printed
    break;

    case 7:
    sortEmployeesId(headLL); //sending the head to the sorting function
    break;

    case 8:
    total2=countEmployees(headLL); // finding the total of the list
    printf("Currently there are %d employees.\n",total2);  // printing the amount total
    printf("Which employee do you want to fire - enter a value between 1 and %d: ",total2);
    scanf("%d",&userResponse4); //finding which employee the user wants to fire

    fireOne(&headLL,userResponse4); // &head because ** and userResponse4 to the function
    printf("There are now %d employees.\n",countEmployees(headLL));

    break;

    case 9:
    printf("Are you sure you want to fire everyone (y/n):");
    scanf(" %c",&userResponse6);  //getting the user response

    if(userResponse6 == 'y'|| userResponse6 == 'Y'){  // if either y or Y send the &head to the fireAll function
    fireAll(&headLL);
    }

    else{
    printf("Okay. No Employees were fired.\n");  // print this if they do not want to
    }

    break;

    case 10:
     printf("Exit\n");
    break;

    case 11:
     loadEmpData (&headLL,"proFile.txt");  // case 11 for creating a linked list
    break;

    default: printf ("That is an invalid choice.\n");

        }

    } while (choice != 10);


    return 0;
}

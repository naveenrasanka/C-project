#include<stdio.h>
#include<string.h>
#include "addDoctor.c"
#include "DisplayAllDoctor.c"
#include "searchDoctor.c"

int doctorManagement();

int main(){

    doctorManagement();
    
    return 0;
}

int doctorManagement(){

    int SectionNumber;

    

    printf("-----------------------------------\n");
    printf("**---Doctor Management Section---**\n");
    printf("-----------------------------------\n");
    printf("1.Add new Doctor\n");
    printf("2.Search Doctor by ID\n");
    printf("3.Display All Doctors\n");
    printf("4.Exit\n");
    printf("-----------------------------------\n");
    printf("Enter Section Number:\n");
    scanf("%d",&SectionNumber);

    switch(SectionNumber){
        case 1:
                addDoctor();
        break;

        case 2:
             searchDoctor();
        break;

        case 3:
            displayAllDoctor();
        break;
        case 4:
        printf("-------------------\n");
        printf("**** Exiting ****\n");
        printf("-------------------");
        break;
        default:

            printf("!!--Please Enter Valid Section Number--!!");
    }


}







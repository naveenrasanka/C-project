#include <stdio.h>


   int doctorManagement(); 
int addDoctor()  
{
    char choice;
    do {

    FILE *doctor=fopen("doctor.txt","a");


    if(doctor==NULL){
          printf("Error open file!");
            return 1;
        }


    char InputName[40];
    int InputID;
    char InputSpecialization[50];
    char InputAvailability[50];
    char InputContactNumber[20];
    

    getchar();
    printf("Enter Doctor Full Name :");
    fgets(InputName,40,stdin);
    InputName[strcspn(InputName,"\n")]='\0';

    printf("Enter Doctor ID :");
    scanf("%d",&InputID);  

    getchar();
    printf("Enter Doctor Specialization :");
    fgets(InputSpecialization,50,stdin);
    InputSpecialization[strcspn(InputSpecialization,"\n")]='\0';

   
    printf("Enter Doctor Availability :");
    fgets(InputAvailability,50,stdin);

    InputAvailability[strcspn(InputAvailability,"\n")]='\0';

   
    printf("Enter Doctor Contact Number :");
    fgets(InputContactNumber,20,stdin);
    InputContactNumber[strcspn(InputContactNumber,"\n")]='\0';    

    fprintf(doctor,"\nDoctor ID : %d \n",InputID);
   
    fprintf(doctor,"Doctor Full Name : %s \n",InputName);
    
    fprintf(doctor,"Specialization : %s \n",InputSpecialization);

    fprintf(doctor,"Availability : %s \n",InputAvailability);

    fprintf(doctor,"Contact Number : %s \n",InputContactNumber);

    fclose(doctor);
    printf("-------------------------------------------------\n");
     printf("\tDoctor Details Successfully Added\n");
     printf("-------------------------------------------------\n");
     printf("Dou You Want to Add Another Doctor:(y/n):");
    
     scanf(" %c",&choice);

         if (choice == 'n' || choice == 'N') {
            doctorManagement(); 
        }


    }while(choice=='Y'||choice=='y');
return 0;
}
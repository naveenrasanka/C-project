#include<stdio.h>


int displayAllDoctor(){
        FILE *file;
        char doctordetails[]="doctor.txt";

        file=fopen(doctordetails,"r");

        if(file==NULL){
           printf("Error open file!");
           return 1;
       }
        
        char line[80];

        int id;
        char name[48];
        int yes;
        printf("--------------------------------------\n");
        printf("\tAll Doctor Details\n");
        printf("--------------------------------------");
      while(fgets(line,80,file)){

         printf("%s",line);

       }

        fclose(file);
        printf("----------------------------------------\n");
        printf("Please Enter 'y'  Go to the Dashboard:");
        scanf(" %c",&yes);

        if(yes=='y'){
          doctorManagement();


        }
        return 0;
}
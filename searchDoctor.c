#include<stdio.h>

int searchDoctor(){

    FILE*readFile=fopen("doctor.txt","r");

    if(readFile==NULL){

        printf("File open error!");
        return 1;
    }
    char line[100];
    char ID[20];
    int found=0;
    char choice;
        printf("Enter ID:");
        scanf("%s",ID);

        char scanID[40];
        while(fgets(line,100,readFile)){
            
       
         if(strncmp(line,"Doctor ID",9)==0){
           
            sscanf(line,"Doctor ID : %s",scanID); // scan karn line eke piliwalat  tin ew gani
    
           if(strcmp(ID,scanID) == 0){
                 printf("------------------------------\n");
                printf("%s",line);

                for(int i=0;i<4;i++){
                    fgets(line,100,readFile);
                    printf("%s",line);
                }
                printf("------------------------------\n");
            
                 found=1;
           }

        }

    }
     if(found!=1){

        printf("error not found!");
        
       }

       printf("\nPlease Enter 'y'  Go to the Dashboard:");
       scanf(" %c",&choice);
       if(choice=='y'||choice=='Y'){
            doctorManagement();

       }
       
    return 0;
}
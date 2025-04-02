#include<stdio.h>
typedef struct{
   int id;
   char name[100];
   float salary;
   }employee;
int main(){
       int n;
       employee employee[n];
       printf("Enter the number of employees:");
       scanf("%d",&n);
       for(int i=0;i<n;i++){
       printf("\nEnter the name:");
       scanf("%s",employee[i].name);
       printf("\nEnter the ID:");
       scanf("%d",&employee[i].id);
       printf("\nEnter the salary:");
       scanf("%f",&employee[i].salary);
       }
       printf("\nThe employee details:");
       for(int i=0;i<n;i++){
       printf("\nName:\t%s",employee[i].name);
       printf("\n ID:\t%d",employee[i].id);
       printf("\nsalary:\t%f",employee[i].salary);
       }
       return 0;
       }
       
       
   


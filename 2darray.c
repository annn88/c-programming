#include<stdio.h>
int main(){
   int row , col;
   printf("\n Enter the rows and column:");
   scanf("%d%d",&row,&col);
   int matrix[row][col];
   printf("\n enter the no of elements");
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
        scanf("%d",&matrix[i][j]);
        }
   }
   printf("\n the obtain matrix is:\n");
   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
           printf("%d\t",matrix[i][j]);
           }
           printf("\n");
       }
  return 0;
}  

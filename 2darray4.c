#include<stdio.h>
int main(){
   int row , col;
   printf("\n Enter the rows and column values:");
   scanf("%d%d",&row,&col);
   int m1[row][col],m2[row][col],m3[row][col];
   printf("\n enter the first matrix values:\n");
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          scanf("%d",&m1[i][j]);
       }
   }
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
       printf("%d\t",m1[j][i]);
       }
       printf("\n");
       }
  return 0;
  }

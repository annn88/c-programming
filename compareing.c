#include<stdio.h>
#include<string.h>
int main(){
    char str1[25],str2[25];
    printf("enter first string:");
    gets(str1);
    printf("enter second string:");
    gets(str2);
    if(strcmp(str1,str2)==0){
      printf("strings are equal");
    }else{
      printf("strings are not equal");
      }
return 0;
}
       

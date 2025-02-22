#include<stdio.h>
#include<string.h>
int main(){
    char inputstr[300];
    int freq[26] ={0};
    printf("\n Enter a string:");
    fgets(inputstr,sizeof(inputstr),stdin);
    for(int i=0;inputstr[i]!='\0';i++){
        char ch=inputstr[i];
        if(inputstr[i]>='A' && inputstr[i] <='Z'){
            ch =ch +32; //convert upper case to lower case
        }
        if(ch>='a'&& ch<='z'){
            freq[ch-97]++;
        }
      }
      for(int i=0;i<26;i++){
        if(freq[i]!=0){
        printf("%c:%d\n",i+97,freq[i]);
        }
      }  
      return 0;
      } 

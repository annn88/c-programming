#include<stdio.h>
int main(){
      FILE *fp;
      int wordCount=0,linecount=0,characterCount;
      fp = fopen("sample.txt","r");
      char ch;
      while(fscanf(fp,"%c",&ch)==1){
            if(ch==' '){
               wordCount++;
            }
            else if(ch=='.'){
              linecount++;
              wordCount++;
              }
              else{
                 characterCount++;
                 }
              }
      printf("word count=%d",wordCount);
      printf("sentence count=%d",linecount);
      printf("character count=%d",characterCount+wordCount);
      fclose(fp);
      return 0;
}

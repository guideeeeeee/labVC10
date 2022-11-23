#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   char c;
   FILE *fpt;
   if((fpt =fopen("personal.txt","r"))==NULL){
    printf("\n Error can't open/create file \n");
    exit(1);
   }
   while(c!= EOF){
    c = getc(fpt);
    printf("%c",c);
   }
   printf("\n...Read form file ready...!\n");
   system("pause");
}
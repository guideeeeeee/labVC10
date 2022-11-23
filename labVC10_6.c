#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {char name[30];
                int idnumber;
                float height; } person;
void main()
{
    void change(person *add);
    person story;
    printf("\n ****Initail Data****\n");
    strcpy(story.name,"Who I am...?");
    story.idnumber = 0;
    story.height = 0.00;
    printf("\n Name : %s",story.name);
    printf("\n ID : %d",story.idnumber);
    printf("\n Height : %f",story.height);
    change(&story);
    printf("\n ****** Changed Data ******\n");
    printf("\n Name : %s",story.name);
    printf("\n ID : %d",story.idnumber);
    printf("\n Height : %f",story.height);
    printf("\n *** End Main Fnct ***\n");
    system("pause");
}
void change(person *add){
    int id;
    float t;
    printf(" \n******Changing Data******\n");
    printf("Enter your Name:");
    gets(add->name);
    printf("Enter ID Number[xxx]:");
    scanf("%d",&id);
    add->idnumber = id;
    printf("Enter Height[xxx.x]:");
    scanf("%f",&t);
    add->height=t;
    return;
    }
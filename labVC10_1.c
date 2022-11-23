#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct Mystr{
    char name[30];
    int age;
    float tall, weight;};
void main(){
    struct Mystr mydata;
    strcpy(mydata.name,"Structure By Visual C++");
    mydata.age = 25;
    mydata.tall = 178.5;
    mydata.weight = 67.8;
    printf("Name :%s \n",mydata.name);
    printf("Age : %d \n",mydata.age);
    printf("Tall :%.2f , Weight :%.2f \n",mydata.tall,mydata.weight);
    system("pause");
}
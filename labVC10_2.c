#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct InfStr { char company[30];
int year;
float cost;};
void main(){
    struct InfStr data[3];
    int i;
    float t[3];
    strcpy(data[0].company, "Computer Company,LTD.");
    strcpy(data[1].company, "Internet Company,LTD.");
    strcpy(data[2].company, "Networks Company,LTD.");
    for(i=0;i<=2;i++){
        printf("Comp. Name : %s\n", data[i].company);
        printf("input Year(xxxx):"); scanf("%d",&data[i].year);
        printf("input Cost(xx.xx):"); scanf("%f",&t[i]);
        data[i].cost =t[i];
    }
    printf("\n\n----Show Data----\n");
    for(i=0;i<=2;i++){
        printf("Comp.Name :%s\n",data[i].company);
        printf("Year :%d\n",data[i].year);
        printf("Cost :%f\n\n",data[i].cost);
    }
    system("pause");
}
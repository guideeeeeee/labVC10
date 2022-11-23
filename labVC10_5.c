#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
float DIV(int n_1,int n_2);
typedef struct {int num_1;
                int num_2;
                float resolve;}calculate;
calculate cal;
void main(){
    float dp;
    printf("\nInput integer number[1]:");
    scanf("%d",&cal.num_1);
    printf("\nInput integer number[2]:");
    scanf("%d",&cal.num_2);
    dp = DIV(cal.num_1,cal.num_2);
    cal.resolve = dp;
    printf("\n Value of DIV = %f \n",cal.resolve);
    system("pause");
    }
    float DIV(int n_1,int n_2)
    {
        float fv;
        fv = (float)n_1 /(float)n_2;
        return(fv);
    }
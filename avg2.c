//function withno argument with return value
#include<stdio.h>
int avg();
int main()
{
    float a;
    a=avg();
    printf("the average value %.1f",a);
    return 0;
}
int avg()
{
    int a,b,c,sum=0;
    float avg=0;
    printf("enter 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    return avg;
}

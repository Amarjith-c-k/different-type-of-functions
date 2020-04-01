//Function with argument and return value
#include<stdio.h>
int avg(int a,int b,int c);
int main()
{
    int a,b,c;
    float av;
    printf("enter 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    av=avg(a,b,c);
    printf("the average value %.1f",av);
    return 0;
}
int avg(int a,int b,int c)
{
    int sum=0;
    float avg=0;
    sum=a+b+c;
    avg=sum/3;
    return avg;
}

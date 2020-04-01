//function with argument and without return value
#include<stdio.h>
int avg(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("enter 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    avg( a, b, c);
    return 0;
}
int avg(int a,int b,int c)
{
    int sum;
    float avg;
    sum=a+b+c;
    avg=sum/2;
    printf("average of 3 numbers %.1f",avg);
}

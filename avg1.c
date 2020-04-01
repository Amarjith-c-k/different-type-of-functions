//function no argument no return


#include<stdio.h>
int avg();
int main()
{
    avg();
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
    printf("the avg of 3 no. %.1f \n",avg);

}

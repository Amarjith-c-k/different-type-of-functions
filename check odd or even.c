//number is odd or even
#include<stdio.h>
int check(int a);
int main()
{
    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    check(a);
    return 0;
}
int check(int a)
{
    int s;
    s = a%2;
    if(s=0)
        printf("number is even %d",a);
    else
        printf("number is odd %d",a);
}

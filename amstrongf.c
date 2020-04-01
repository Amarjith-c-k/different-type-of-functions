//amstrong or not
#include<math.h>
#include<stdio.h>
int am(int n);
int main()
{
  int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    flag = am(n);
    if (flag == 1)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}

int am(int num) {
    int original, rem, n = 0, flag;
    double result = 0.0;
    original = num;
    while (original != 0) {
        original /= 10;
        ++n;
    }
    original = num;
    while (original != 0) {
        rem = original % 10;
        result += pow(rem, n);
        original /= 10;
    }
    if (result == num)
        flag = 1;
    else
        flag = 0;
    return flag;
}

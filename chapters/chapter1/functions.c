#include <stdio.h>
int main()
{

    int num1;
    int num2;
    int total;

    printf("Enter The num1 Value: ");
    scanf(" %d ", &num1);
    printf("Enter The num2 Value: ");
    scanf(" %d ", &num2);

    total = add(num1, num2);
    printf("The Total is %d :", total);
}

int add(int m, int n)
{

    int sum;
    sum = m + n;

    return sum;
}

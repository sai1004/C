
#include <stdio.h>

int main()
{

    int number = 0;

    printf("Enter a Number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf(" %d is the even number \n", number);
    }
    else
    {
        printf(" %d is odd number \n", number);
    }

    return 0;
}
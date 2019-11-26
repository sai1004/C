#include <stdio.h>

int main()
{

    float english, maths, science, social, computer, total;

    printf("\n Enter The English Marks: ");
    scanf("%d", &english);
    printf("\n Enter The Maths Marks: ");
    scanf("%d", &maths);

    printf("\n Enter The Science Marks: ");
    scanf("%d", &science);

    printf("\n Enter The Social Marks: ");
    scanf("%d", &social);

    printf("\n Enter The Computer Marks: ");
    scanf("%d", &computer);
    total = english + maths + science + social + computer;

    printf("\n You're Total Marks is : %d", total);

    if (total < 35)
    {
        printf("\n ahh ohh, you are failed DO BETTER next time");
    };
    if (total >= 35)
    {
        printf("\n ahh ohh, you are passed party time");
    }

    return 0;
}

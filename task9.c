#include <stdio.h>

int main()
{
    double num;

    printf("Enter number: ");
    scanf("%lf", &num);

    printf("Default=%lf\n", num);
    printf("2 decimal=%.2lf\n", num);
    printf("5 decimal=%.5lf\n", num);

    return 0;
}

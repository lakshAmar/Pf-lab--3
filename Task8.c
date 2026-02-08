#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter float: ");
    scanf("%f", &b);

    printf("Enter character: ");
    scanf(" %c", &c);

    printf("Integer=%d\n", a);
    printf("Float=%f\n", b);
    printf("Character=%c", c);

    return 0;
}

#include <stdio.h>

int main()
{
    int x, y, formula;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    formula = (x + y) * (x +y)*(x+y);

    printf("Answer = %d", formula);

    return 0;
}
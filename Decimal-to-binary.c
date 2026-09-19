#include <stdio.h>

int main()
{
    int n, remainder;
    int binary = 0;
    int place = 1;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d\n", binary);

    return 0;
}
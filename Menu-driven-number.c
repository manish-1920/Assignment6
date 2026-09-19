#include <stdio.h>

int main()
{
    int choice;
    int n, original, reverse, remainder;
    int i, isPrime;
    int sum, digits, temp;
    int armstrongSum, digit;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                reverse = 0;

                while (n != 0)
                {
                    remainder = n % 10;
                    reverse = reverse * 10 + remainder;
                    n = n / 10;
                }

                if (original == reverse)
                {
                    printf("%d is a palindrome number.\n", original);
                }
                else
                {
                    printf("%d is not a palindrome number.\n", original);
                }

                break;

            case 2:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                armstrongSum = 0;

                while (n != 0)
                {
                    digit = n % 10;
                    armstrongSum = armstrongSum + digit * digit * digit;
                    n = n / 10;
                }

                if (armstrongSum == original)
                {
                    printf("%d is an Armstrong number.\n", original);
                }
                else
                {
                    printf("%d is not an Armstrong number.\n", original);
                }

                break;

            case 3:
                printf("Enter an integer: ");
                scanf("%d", &n);

                if (n < 2)
                {
                    isPrime = 0;
                }
                else
                {
                    isPrime = 1;

                    for (i = 2; i < n; i++)
                    {
                        if (n % i == 0)
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime == 1)
                {
                    printf("%d is a prime number.\n", n);
                }
                else
                {
                    printf("%d is not a prime number.\n", n);
                }

                break;

            case 4:
                printf("Enter an integer: ");
                scanf("%d", &n);

                sum = 0;
                temp = n;

                while (temp != 0)
                {
                    remainder = temp % 10;
                    sum = sum + remainder;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &n);

                digits = 0;
                temp = n;

                if (temp == 0)
                {
                    digits = 1;
                }
                else
                {
                    while (temp != 0)
                    {
                        temp = temp / 10;
                        digits++;
                    }
                }

                printf("Number of digits = %d\n", digits);

                break;

            case 6:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a number from 1 to 6.\n");
        }

    } while (choice != 6);

    return 0;
}
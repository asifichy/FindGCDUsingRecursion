#include<stdio.h>

int gcd(int num1, int num2);

int main()
{
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("Output GCD: %d\n", gcd(n1, n2));

    return 0;
}

int gcd(int num1, int num2)
{
    if(num2 != 0)
    {
        return gcd(num2, num1 % num2);
    }
    else
    {
        return num1;
    }
}

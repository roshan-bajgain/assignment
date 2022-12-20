#include <stdio.h>
int main()
{

    int number1, number2, sum;

    printf("Enter First number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    // calculating sum
    sum = number1 + number2;

    printf("%d + %d = %d\t", number1, number2, sum);
    return 0;
}
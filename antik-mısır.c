#include <stdio.h>

int ancientEgyptianMultiplication(int num1, int num2) {
    int result = 0;

    while (num1 > 0) {
        if (num1 % 2 != 0) {
            result += num2;
        }
        num1 /= 2;
        num2 *= 2;
    }

    return result;
}

int main() {
    int num1, num2;

    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &num1, &num2);

    int product = ancientEgyptianMultiplication(num1, num2);

    printf("Product: %d\n", product);

    return 0;
}
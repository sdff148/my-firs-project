#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, exp,result = 1;

    printf("Enter the main number:\n");
    scanf("%d", &num);

    printf("Enter the exposant number:\n");
    scanf("%d", &exp);

    if (exp == 0){
        printf("The result is : %d\n", result);
    }
    for (int i = 1, i <= exp, i++){
        result = result * num;
    }
    printf("Your result is: %d\n", result);

    }

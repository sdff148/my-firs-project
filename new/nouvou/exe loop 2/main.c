#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, sum = 1;
    printf("Enter a positive number:\n");
    scanf("%d", &num);
    if( num <= 0){
        printf("Please enter a positive number:\n");
    }
    else {
    for (int i = 1; i <= num; i++ ){
        sum *= i;
            printf("%d\n", sum);
}

// if we want only the result, we put printf("%d\n", sum); after the for.
    }
    return 0;
}

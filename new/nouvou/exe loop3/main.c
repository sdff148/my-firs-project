#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++ ){
        sum += i;
            printf("%d\n", sum);
}
// directly to the result printf("%d\n", sum);
    return 0;
}

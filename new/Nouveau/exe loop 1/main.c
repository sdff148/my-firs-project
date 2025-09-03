#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
    printf("Enter your number:\n");
        scanf("%d", &num);

         if (num == 0){
                printf("This operation can not be on \n");
                return 0;
            }

    printf("The operation of number %d is :\n", num);
    for (int i = 1; i <= 10; i++){
            if (num !=0){
                printf("%d x %d = %d\n", num, i, num * i);
            }

    }
    return 0;
}

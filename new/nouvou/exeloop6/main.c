#include <stdio.h>
#include <stdlib.h>

int main(){

int num, even = 2;
//num is time of eve number.
//because the even number start from number 2, so we gave to the variable even 2
printf("Enter a number\n");
scanf("%d", &num);

for (int i = 1; i <= num; i++){
    printf("%d",even);
    // even num times
    even += 2;
}

    return 0;
}

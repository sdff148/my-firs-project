#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    char lastname[100];
    char sexe;
    char email[100];
    int age;


    printf("what is your name\n");
    scanf("%s", name);
    printf("what is your last name\n");
    scanf("%s", lastname);
    printf("what is your sexe\n");
    scanf(" %c", &sexe);
    printf("what is your Email\n");
    scanf("%s", email);
    printf("how old are you\n");
    scanf("%d", &age);


    printf("your personal information are:\n");
    printf("your name is %s\n", name);
    printf("your last name is %s \n", lastname);
    printf("your sexe is %c \n", &sexe);
    printf("your email is %s \n", email);
    printf("your age is %d \n", &age);

    return 0;
}

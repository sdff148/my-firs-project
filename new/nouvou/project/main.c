#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [30];
int num1, num2, num3, num4, num5;

printf("Enter your name\n");
scanf("%s", name);

printf("Enter your points that should be from 0 to 100\n");
scanf("%d",&num1);
scanf("%d",&num2);
scanf("%d",&num3);
scanf("%d",&num4);
scanf("%d",&num5);

printf("point 1:\n", num1);
printf("point 2:\n", num2);
printf("point 3:\n", num3);
printf("point 4:\n", num4);
printf("point 5:\n", num5);


printf("the total of your point is : %d \n",num1 + num2 + num3 + num4 + num5);
int moyan = num1 + num2 + num3 + num4 + num5) / 2;
printf("the moyan of your point is : %d \n", moyan);

if (moyan == 100){
    printf("A\n"\n);
}
 else if (moyan >= 80 && moyan < 100){
    printf("B\n");
}
else if (moyan >= 60 && moyan < 80){
    printf("C\n");
}
else if (moyan >= 40 && moyan < 60){
    printf("D\n");
}
else {
    printf("F\n");
        }

printf("the greater point of your points is :%,d\n", );

if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
printf("the greater point is : %d\n", num1);
}
else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){
printf("the greater point is : %d\n", num2);
{

else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){
printf("the greater point is : %d\n", num3);
{
else if (num4 > num1 && num4 > num3 && num4 > num2 && num4 > num5){
printf("the greater point is : %d\n", num4);
{
else {
printf("the greater point is : %d\n", num5);
{







    return 0;
}

#include<stdio.h>
#include<stdlib.h>


void hello()
{
    printf("Hello World!\n");
}

void help()
{
    printf("This is menu:\n");
    printf("help hello quit bigger\n");
    printf("add sub mul divi\n");
}

void quit()
{
    exit(0);
}

void bigger()
{
    double num1,num2,big;
    printf("please input two numbers:\n");
    scanf("%lf %lf", &num1, &num2);
    big = num1 > num2 ? num1 : num2;
    printf("The bigger number is:%lf",big);
}

void add()
{
    double num1,num2,add;
    printf("please input two numbers:\n");
    scanf("%lf %lf", &num1, &num2);
    add = num1 + num2;
    printf("%lf + %lf = %lf\n", num1, num2, add);
}

void sub()
{
    double num1,num2,sub;
    printf("please input two numbers:\n");
    scanf("%lf %lf", &num1, &num2);
    sub = num1 - num2;
    printf("%lf - %lf = %lf\n", num1, num2, sub);
}

void mul()
{
    double num1,num2,mul;
    printf("please input two numbers:\n");
    scanf("%lf %lf", &num1, &num2);
    mul = num1 * num2;
    printf("%lf * %lf = %lf\n", num1, num2, mul);
}

void divi()
{
    double num1,num2,divi;
    printf("please input two numbers:\n");
    scanf("%lf %lf", &num1, &num2);
    divi = num1 / num2;
    printf("%lf / %lf = %lf\n", num1, num2, divi);
}

int main()
{
    char cmd[256];
    while (1)
    {
        scanf("%s", cmd);
        if (strcmp(cmd, "help") == 0)
        {
            help();
        }
        else if (strcmp(cmd, "hello") == 0)
        {
            hello();
        }
        else if (strcmp(cmd, "quit") == 0)
        {
            quit();
        }
        else if (strcmp(cmd, "bigger") == 0)
        {
            bigger();
        }
        else if (strcmp(cmd, "add") == 0)
        {
            add();
        }
        else if (strcmp(cmd, "sub") == 0)
        {
            sub();
        }
        else if (strcmp(cmd, "mul") == 0)
        {
            mul();
        }
        else if (strcmp(cmd, "divi") == 0)
        {
            divi();
        }
        else 
        {
            printf("Error command!\n");
            help();
        }
    }
    return 0;
}

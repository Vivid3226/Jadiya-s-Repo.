
#include<stdio.h>
int main()
{
        float a;
        printf("Enter Your Salary: ",a);
        scanf("%f",&a);

        printf("Sr. No\t\t\tInput Output\t\t\tAmount\n");

        float b=a*(0.7);
        printf("1\t\t\tDA of Basic Salary\t\t%.2f\n",b);

        float c=a*(0.07);
        printf("2\t\t\tHRA of Basic Salary\t\t%.2f\n",c);

        float d=a*(0.02);
        printf("3\t\t\tMA of Basic Salary\t\t%.2f\n",d);

        float e=a*(0.04);
        printf("4\t\t\tTA of Basic Salary\t\t%.2f\n",e);

        float f=a*(0.12);
        printf("5\t\t\tPF of Basic Salary\t\t%.2f\n",f);

        float g=b+c+d+e;
        printf("6\t\t\tGross Salary\t\t\t%.2f\n",g);

        float h=g-f;
        printf("7\t\t\tNet Salary\t\t\t%.2f\n",h);

        return 0;

}

//This Program is Prepared By 23CS026_Om Jadiya
#include <stdio.h>
#include <math.h>
int main()
{
        float l;
        float g;
        float t;
        printf("Enter length of pendulum: ");
        scanf("%f",&l);
        printf("Enter acceleration due to gravity (m/s^2): ");
        scanf("%f",&g);

        t=2*3.14*sqrt(l/g);

        printf("Time period of pendulum is %.2f seconds.",t);

        printf("\n23CS026_Om Jadiya");
        return 0;
}

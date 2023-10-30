//This Program is Prepared By 23CS026_Om Jadiya
#include<stdio.h>
int main()
{
        int a1=80000; //total population
        int b1=a1*(0.52); //population of men
        int c1=a1*(0.35); //literate men &illiterate women
        int d1=a1*(0.65); //illiterate men & literate women
        int e1=a1*(0.48); //population of women

        printf("Sr.No\tGet Outcome\t\t\tValue\n");
        printf("1\tTotal Population\t\t%d\n",a1);
        printf("2\tNumber of Literate(Men+Women)\t%d\n",a1);
        printf("3\tNumber of Men\t\t\t%d\n",b1);
        printf("4\tNumber of Literate Men\t\t%d\n",c1);
        printf("5\tNumber of Illiterate Men\t%d\n",d1);
        printf("6\tNumber of Women\t\t\t%d\n",e1);
        printf("7\tNumber of Literate Women\t%d\n",d1);
        printf("8\tNumber of Illiterate Women\t%d\n",c1);

        printf("23CS026_Om Jadiya");

        return 0;
}


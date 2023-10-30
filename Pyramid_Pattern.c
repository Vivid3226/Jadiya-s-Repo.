#include <stdio.h>

int main()
{
int n;
printf("Enter Value of n:");
scanf("%d",&n);

// Here "i"-> Row && "j"-> Column..
//    1 2 3 4 5 6 7
//  1       *
//  2     * * *
//  3   * * * * *
//  4 *  *  *  *   *


//code:-
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=2*(n)-1;j++)
            {
                if(j>=n-(i-1) && j<=n+(i-1))
                {
                    printf("*");
                }
                    else{
                        printf(" ");
                        }
            }
            printf("\n"); 
        } 
      return 0;
}


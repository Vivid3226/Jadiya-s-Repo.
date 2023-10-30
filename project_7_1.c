#include <stdio.h>
int main(){
    int a[50];
    int even,odd,P,N,i;
        printf("Enter 25 Numbers:");
    for (int i=0;i<25;i++){
        scanf("%d",&a[i]);
        if(a[i]>=0)
            N++;
         else
                P++;
         if(a[i]%2==0)
            even++;
            else 
                odd++; 
                         }
                printf("\nOdd:%d",odd);
                printf("\nNegative:%d",N);
                printf("\nPositive:%d",P);
                printf("\nEven:%d",even);
return 0;
}
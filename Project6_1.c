#include <stdio.h>
#include <math.h>
int main(){
    
    int n, number,flag=0,sum=0,Temp,Remainder,Times=0;
printf("1. Prime Number: \n");
printf("2. Amstrong Number: \n");
printf("3. Perfect Number: \n");
printf("4. Exit: \n");
printf("Enter the Case Number(1-4): \n");
scanf("%d",&number);

printf("Enter any desired number: ");
scanf("%d",&n);

switch (number){
    case 1: 
     for(int i=2;i<=n/2;++i)
     {
        if(n%i==0)
         flag=1;
        break;
     }
     if (n==1)
     { printf("1 is niether prime nor composite.");}
     else 
     {
        if (flag==0)
    printf("%d is Prime Number",n);
       else
       {
        printf("%d is not a prime Number",n);}
     }
              break; 
            
    case 2: 
      Temp= number;
      while(Temp!=0)
      {
         Times=Times+1;
         Temp=Temp/10;
      }
       Temp=number;
         while(Temp>0)
      {
         Remainder=Temp%10;
         sum=sum+pow(Remainder,Times);
         Temp=Temp/10;
      }

     printf("Sum of entered Number is %d \n",sum);
     if (number==sum)
     printf("\n%d is Amstrong Number",sum);
     else 
     printf("%d is Not a Amstrong Number");
                     break;
    case 3:    
               for(int i=1;i<n;i++)
               {
                  if(n%i==0)
                  {
                  sum=sum+i;
                  }
 
             }
                  if (sum==n)
                     printf("%d is Perfect Number\n",n);
                   else{
                      printf("%d is not a perfect number",n);  
                }
                break;
    case 4:  printf("Exit\n");
                break;     
        default :
        printf("Invalid Number\n");            


return 0;
}
}
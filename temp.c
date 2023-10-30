#include <stdio.h>
int arr[8]={8,2,3,4,5,6,7,0},og=12,i; 
int max,smax;
int main(){
      for(int i=0;i<=7;i++)
         if(max<arr[i])
      {
         max=arr[i];
      }
      if(smax<arr[i] && max!=arr[i]){
         smax=arr[i];
      }
       printf("%d",smax);
}
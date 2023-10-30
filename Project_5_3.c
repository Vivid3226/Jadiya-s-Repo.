#include <stdio.h>
#include <conio.h>
int main (){
    int year;
    printf("Enter any year : ");
    scanf("%d",&year); 
    if (year%400==0){
        printf("The year %d  is leap year",year);
    }
    else if(year%100==0) {
        printf("The year %d is  not Leap year",year);
    }
    else if(year%4==0) {
    printf("The year %d is  a leap year",year); }
     else{
        printf("The year %d is  not Leap year",year);
    }
}
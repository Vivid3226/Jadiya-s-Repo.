//This Program is Prepared By 23CS026_Om Jadiya
#include <stdio.h>
#include <math.h>

int main (){
    float x1,x2,x3,y1,y2,y3,s1,s2,s3;
printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%*c%f%*c%f%*c", &x1, &y1);
     fflush(stdin);
       printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%*c%f%*c%f%*c", &x2, &y2);
    fflush(stdin); 
     printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%*c%f%*c%f%*c", &x3, &y3);
    fflush(stdin);
s1=fabs(x2-x1)/fabs(y2-y1);
s2=fabs(x3-x1)/fabs(y3-y1);
s3=fabs(x3-x2)/fabs(y3-y2);
if (s1==s2 && s2==s3){
printf("The points are \"collinear\" ");}
else{
printf("The points are \"Non-collinear\" "); 

printf("23CS026_Om Jadiya");
return 0;
}

}

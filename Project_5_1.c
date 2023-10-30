//This Program is Prepared By 23CS026_Om Jadiya
// include the standard input/output library
#include <stdio.h>

// define the main function
int main()
{
    // declare variables for quantity, price, discount and total
    int quantity;
    float price, total;
    char c;

    // prompt the user to enter the quantity and price
    printf("Enter price per item : ");
scanf("%f",&price);
    // read the input from the keyboard
    printf("Enter the quantity : ");
    scanf("%d", &quantity);

    // calculate the total without discount
    total = quantity * price;

    // check if the quantity is more than 1000
    if (quantity >= 1000)
    {
        // calculate the discount as 10% of the total
        total= total *= 0.9; 
        printf("Cngratulations !!\nYou Have got Discount of 10%c\n",37);
    }

    // print the total expenses
    printf("The total expenses are %.2f\n", total);


printf("23CS026_Om Jadiya");
    // return 0 to indicate successful execution
return 0;
}

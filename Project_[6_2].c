#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sticks = 21; // total number of match-sticks by the user 
    int user, comp; // number of match-sticks picked by user and computer
    printf("Welcome to the match-stick game!\n");
    printf("There are 21 match-sticks.\n");
    printf("You can pick 1, 2, 3, or 4 match-sticks at a time.\n");
    printf("Whoever picks the last match-stick loses the game.\n");
    printf("You will play against the computer, who always wins.\n");
    printf("Good luck!\n\n");

    while (1) // loop until there are no match-sticks left
    {
        printf("There are %d match-sticks left.\n", sticks);
        printf("How many match-sticks do you want to pick? ");
        scanf("%d", &user); // get user input
        if (user < 1 || user > 4) // check if user input is valid
        {
            printf("Invalid input. You can only pick 1, 2, 3, or 4 match-sticks.\n");
            continue; // skip the rest of the loop and ask for user input again
        }
        if (user > sticks) // check if user input is more than the remaining match-sticks
        {
            printf("Invalid input. You cannot pick more than the remaining match-sticks.\n");
        }
        continue; // skip the rest of the loop and ask for user input again
        }
        printf("You picked %d match-sticks.\n", user);
        sticks = sticks - user; // update the number of match-sticks left
        if (sticks == 0) // check if there are no match-sticks left
        {
            printf("You picked the last match-stick. You lose!\n");
            break; // end the loop and the game
        }
        comp = 5 - user; // calculate the number of match-sticks the computer will pick
        printf("The computer picked %d match-sticks.\n", comp);
        sticks = sticks - comp; // update the number of match-sticks left
        if (sticks == 0) // check if there are no match-sticks left
        {
            printf("The computer picked the last match-stick. You win!\n");
            break; // end the loop and the game
        }
        
        printf("Thank you for playing the match-stick game!\n");
    }
        
        return 0;
    }

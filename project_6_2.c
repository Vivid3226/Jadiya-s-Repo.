#include <stdio.h>
#include <conio.h>
int main() {
        int m,remaning=21,computer_choice;
    printf("Rules for the games are as follows: \n 1.There are 21 match-sticks.\n 2.The computer asks the player to pick 1, 2, 3, or 4 match-sticks.\n  3.After the person picks, the computer does its picking.\n4.Whoever is forced to pick up the last match-stick loses the game.\n -------------------------------------------------------------------------------------\n");
     while(1)
     {
        printf("Your turn - Pick 1, 2, 3, or 4 match-sticks: ");
        scanf("%d",&m);
    
     
            if(m<1 || m>4){
            printf("Invalid choice !..your turn\nPlease enter you choice: ");
                    continue; 
                    }  

                     remaning-=m;
                     if (remaning<=0){
                     printf("You picked the last match-stick. You lose! The computer wins!\n");
                     break;          }

                    computer_choice=5-m;
                    printf("The Computer picks %d match stick(s).\n",computer_choice);
                      remaning-=computer_choice;
                    
                if (remaning<=0) {
            printf("The computer picked the last match-stick. You win! Congrats!\n");
            break;
        }
     }
return 0;
}

/* Write a program for a matchstick game being played between the computer and a
user. Your program should ensure that the computer always wins. Rules for the game
are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
− After the person picks, the computer does its picking.
− Whoever is forced to pick up the last matchstick loses the game. */

#include <stdio.h>
int main() {
int matchsticks = 21;
int user_pick, computer_pick;
printf("Welcome to the Matchstick Game!\n");
printf("Rules:\n");
printf("1. There are 21 matchsticks.\n");
printf("2. You can pick 1, 2, 3, or 4 matchsticks.\n");
printf("3. Whoever picks the last matchstick loses.\n\n");
while (matchsticks > 1) {
printf("Matchsticks left: %d\n", matchsticks);
printf("Pick 1, 2, 3, or 4 matchsticks: ");
scanf("%d", &user_pick);
if (user_pick < 1 || user_pick > 4 || user_pick > matchsticks) {
printf("Invalid choice! Try again.\n");
continue;
}
matchsticks -= user_pick;
if (matchsticks == 1) {
printf("Only 1 matchstick left.\n");
printf("You are forced to pick it. You lose!\n");
break;
}

computer_pick = 5 - user_pick; 
printf("Computer picks %d matchstick(s).\n", computer_pick);
matchsticks -= computer_pick;
if (matchsticks == 1) {
printf("Only 1 matchstick left.\n");
printf("You are forced to pick it. You lose!\n");
break;
}
}
return 0;
}
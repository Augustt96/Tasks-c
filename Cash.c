#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;

    //ask for amount of change

    do 
    { 
        change = get_float("Change owed: ");
    }

    //to make sure it is not negative

    while (change < 0);

    //make change into cents

    int cents = round(change * 100);

    int coins = 0;

    //count how many quarters need

    coins += cents / 25;

    //how many cents left after giving away quarters

    cents = cents % 25;

    //how many dimes

    coins += cents / 10;

    //how much left

    cents = cents % 10;

    //how many nickels

    coins += cents / 5;

    //how much left

    cents = cents % 5;

    //how many pennies

    coins += cents / 1;

    //coins in total

    printf("Coins: %d\n", coins);
}

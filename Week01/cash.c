#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declaring the variables
    int changeOwed = 0;
    int noCoins = 0;
    int coins[] = {25, 10, 5, 1};

    // Input the change owed
    do
    {
        changeOwed = get_int("Change owed: ");
    }
    while (changeOwed < 0);

    // Assign change owed to a variable for calculation
    int numer = changeOwed;

    // Logic for generating number of coins
    for (int i = 0; i < 4; i++)
    {
        noCoins += numer / coins[i];
        numer = numer % coins[i];
    }

    // Print total number of coins
    printf("%i\n", noCoins);

    return 0;
}

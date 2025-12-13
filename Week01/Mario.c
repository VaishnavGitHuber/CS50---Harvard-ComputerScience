#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // input the value of height, untill it falls in the range of 1-8 inclusive
    int height = 0, i, j, k;

    while (height <= 0 || height > 8)
    {
        height = get_int("Height: ");
    }

    // Constructing a pyramid
    for (i = 1; i <= height; i++)
    {
        // space in each pyramid row
        for (j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        // hash in each pyramid
        for (k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

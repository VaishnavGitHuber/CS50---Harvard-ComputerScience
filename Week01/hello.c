#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // input the name of the user
    string name = get_string("What's your name ? ");
    // Print the name of the user with hello
    printf("Hello, %s\n", name);

    return 0;
}

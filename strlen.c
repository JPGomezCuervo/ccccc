#include <stdio.h>
// Write a function to calculate the length of a string without using any standard library functions.
int main(int carg, char **args)
{
    int c, count = 0;

    for (int i = 0 ; args[1][i] != '\0' ; i++)
        count++;

    printf("%s: %d\n", "The length is", count);
    return 0;
}

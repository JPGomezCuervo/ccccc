#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{

    int unsorted_index = argc - 1;
    int iteraciones = 0;
    int sorted = 0;

    while (unsorted_index >= 0) 
    {
        for (int i = 0; i < unsorted_index - 1; i++) 
        {
            iteraciones++;
            int a = atoi(argv[i + 1]);
            int b = atoi(argv[i + 2]);     

            if (a >= b) 
            {
                sorted = 0;
                char *temp = argv[i + 1];
                argv[i + 1] = argv[i + 2];
                argv[i + 2] = temp;
            } else {
                sorted++;
            }
        }
        unsorted_index = unsorted_index - sorted;
        --unsorted_index;
    }

    printf("iteraciones: %d \n", iteraciones);
    for (int i = 0; i < argc - 1; i++) 
    {
        printf("%s\n", argv[i+1]);
    }

    return 0;
}

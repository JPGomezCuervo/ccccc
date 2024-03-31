#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int unsorted_index = argc - 1;
    while (unsorted_index >= 0) {
        for (int i = 0; i < unsorted_index - 1; i++) {
            int a = atoi(argv[i + 1]);
            int b = atoi(argv[i + 2]);     

            if (a >= b) {
                char *temp = argv[i + 1];
                argv[i + 1] = argv[i + 2];
                argv[i + 2] = temp;
            }
        }
        --unsorted_index;
    }

    for (int i = 0; i < argc - 1; i++) {
        printf("%s\n", argv[i+1]);
    }

    return 0;
}

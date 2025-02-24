#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("argc = %d\n", argc);
    printf("argv contains\n");
    
    int sum = 0;
    if (argc > 1 ){
        for (int i=1; i<argc; i++) {
            printf("argv[%d] = %s\n", i, argv[i]);
            sum += atoi(argv[i]);
        }    
    } else {
        printf("No command line arguments provided.\n");
    }
   printf("The sum is: %d\n", sum);
}
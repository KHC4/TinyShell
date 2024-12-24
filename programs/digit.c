#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv) {

char number[10];
if (argc == 1){
scanf("%s", number);
} else {
strcpy(number, argv[1]);
}
if (strcmp(number, "zero") == 0){
        printf("%d\n", 0);
} else if (strcmp(number, "one") == 0){
        printf("%d\n", 1);
} else if (strcmp(number, "two") == 0){
        printf("%d\n", 2);
} else if (strcmp(number, "three") == 0){
        printf("%d\n", 3);
} else if (strcmp(number, "four") == 0){
        printf("%d\n", 4);
} else if (strcmp(number, "five") == 0){
        printf("%d\n", 5);
} else if (strcmp(number, "six") == 0){
        printf("%d\n", 6);
} else if (strcmp(number, "seven") == 0){
        printf("%d\n", 7);
} else if (strcmp(number, "eight") == 0){
        printf("%d\n", 8);
} else if (strcmp(number, "nine") == 0){
        printf("%d\n", 9);
}
    return 0;
}

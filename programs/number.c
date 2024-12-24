#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv) {

char number[10];
if (argc == 1){
int ret = scanf("%s", number);
} else {
strcpy(number, argv[1]);
}
if (strcmp(number, "0") == 0){
        printf("zero\n");
} else if (strcmp(number, "1") == 0){
        printf("one\n");
} else if (strcmp(number, "2") == 0){
        printf("two\n");
} else if (strcmp(number, "3") == 0){
        printf("three\n");
} else if (strcmp(number, "4") == 0){
        printf("four\n");
} else if (strcmp(number, "5") == 0){
        printf("five\n");
} else if (strcmp(number, "6") == 0){
        printf("six\n");
} else if (strcmp(number, "7") == 0){
        printf("seven\n");
} else if (strcmp(number, "8") == 0){
        printf("eight\n");
} else if (strcmp(number, "9") == 0){
        printf("nine\n");
}
    return 0;
}

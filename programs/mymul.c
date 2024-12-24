#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int val = strtol(argv[1], NULL, 10);
    print("%d", val * 2);

    exit(0);
}

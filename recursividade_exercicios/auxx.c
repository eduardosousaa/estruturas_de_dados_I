#include <stdio.h>

int main() {
    int var[] = {1, 2, 3, 4, 5, 0};
    //int len = sizeof(var)/sizeof(int);
    int len = sizeof(var)/sizeof(var[0]);

    printf("%i", len);
}
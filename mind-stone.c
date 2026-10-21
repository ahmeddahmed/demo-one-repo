
#include <stdio.h>

int main(void)
{
    int marks[] = {80, 90, 75, 88, 95};
    int size = 5;

    for (int i = 0; i < size; i++) {
        printf("%d\n", marks[i]);
    }
    //     int marks[] = {80, 90, 75, 88, 95};
    // int size = (int)(sizeof marks / sizeof marks[0]);
    return 0;
}

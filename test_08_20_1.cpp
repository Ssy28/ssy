#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int* arr[4] = {&a, &b, &c, &d};
    int i = 0;
    for(i=0; i<4; i++)
    {
        printf("%d ", *(arr[i]));
    }
    return 0;
}
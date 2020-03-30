#include <stdio.h>
#include <stdlib.h>

int fibonacci(int fibo)
{
    int i = 1, element0 = 1, element1 = 1, temp;
    if(fibo < 2) return 1;
    while(i < fibo)
    {
        temp = element0 + element1;
        element0 = element1;
        element1 = temp;
        i++;
    }
    return(element1);
}

int main(void)
{
    printf("%d\n", fibonacci(10));
    return 0;
}


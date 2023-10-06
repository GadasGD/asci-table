#include <stdio.h>

int main()
{   
    printf("oct\tdex\thex\tchar");
    for (unsigned int i = 0;i <= 127; i++)
    {
        printf("%o\t%d\t%x\t%c \n", i, i, i, i);
    }
    

}
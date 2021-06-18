#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int sum = 0;
    if (argc == 1)
        printf("you have not passed any argument\n");
    else if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            sum += atoi(argv[i]);
            /*  
            ABOUT ATOI() 
            1> Atoi ia a function  that converts a string into an integral numerical representation
            2> It is contained in stdlib.h
            */
        }
    }
    printf("The sum of numbers is %d\n", sum);
    return 0;
}

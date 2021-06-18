/*
71


you have  to create command line utility to add subtract divide and multiply two numbers
first command line argument of c program must be  the operation
the next arguments being the two numbers
for example--
>>command.c add 45 4
>>49
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char *op = argv[1];
    int n1 = atoi(argv[2]);
    int n2 = atoi(argv[3]);
    if (strcpy(op, "add") == 0)
    {
        printf("%d", n1 + n2);
    }
    if (strcpy(op, "subtract") == 0)
    {
        printf("%d", n1 - n2);
    }
    if (strcpy(op, "multiply") == 0)
    {
        printf("%d", n1 * n2);
    }
    if (strcpy(op, "division") == 0)
    {
        printf("%f", n1 / (float)n2);
    }
    if (strcpy(op, "remainder") == 0)
    {
        printf("%d", n1 % n2);
    }

    return 0;
}

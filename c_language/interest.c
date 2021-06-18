/*
        this programme will calculate compount
                       interest when compounded annualy    
                                                        */
#include <stdio.h>
int main()
{
    float p, r, t, A, it;
    float temp;
    printf("Enter \n principle \n rate per month \n and time in month\n ");
    scanf(" %f%f%f", &p, &r, &t);
    temp = p;
    for (int i = 1; i <= t; i++)
    {
        p = p + p * 0.01 * r;
    }
    printf(" Amount = %f", p);
    it = p - temp;
    printf("\n net interest earned= %f", it);
    return 0;
}
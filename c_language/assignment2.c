#include <stdio.h>
void main()
{
    int marks[5];
    int sum=0;
    printf("Enter the marks of 5 subjects of students\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    float avg=sum/5.0;
    printf("The sum of marks of 5 subjects is----------\n%d\n",sum);
    printf("The average marks of 5 subjects is --------\n%f\n",avg);
}
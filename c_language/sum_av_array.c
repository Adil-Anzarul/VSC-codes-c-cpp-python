#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter size of 1-D Array u wanna create\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element at %d index\n",i);
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    float average=(float)sum/n;
    printf("Sum of elements of array is\n %d\n",sum);
    printf("Average of elements of array is\n %f\n",average);
    return 0;
}

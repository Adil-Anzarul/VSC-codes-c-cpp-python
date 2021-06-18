//11
#include <stdio.h>
void main()
{
    printf("Enter n and m for arrays\n");
    int n, m;
    scanf("%d %d", &n, &m);
    int a1[n][m];
    printf("Enter elements for array \n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a1[i][j]);
    
    int min=a1[0][0],max=a1[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a1[i][j]>max)
            max=a1[i][j];
            if(a1[i][j]<min)
            min=a1[i][j];
        }
    }
    printf("max=%d\nmin=%d",max,min);
}
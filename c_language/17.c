//17
#include <stdio.h>
void main()
{
    printf("Enter n and m for arrays\n");
    int n, m;
    scanf("%d %d", &n, &m);
    int a1[n][m];
    printf("Enter elements for array 1\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a1[i][j]);
    int a2[n][m];
    printf("Enter elements for array 2\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a2[i][j]);
    int add[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            add[i][j] = a1[i][j] + a2[i][j];

for(int i=0;i<n;i++)
{
    printf("Element at index %d %d is = %d\n",i,i,add[i][i]);
}
}
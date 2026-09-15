#include <stdio.h>
#include<math.h>
int main()
{
    int a[4];
    int b[4];
    for (int i=0; i<4; i++)
    {
        printf("enter element %d ", i+1);
        scanf("%d", &a[i]);
    }
    for (int i=0; i<4; i++)
    {
        b[i]=a[i]*a[i]*a[i];
    }
    for (int i=0; i<4; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
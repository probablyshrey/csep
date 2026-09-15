#include <stdio.h>
int main(){
    int temp;
    int a[]={2,6,1,4,3,0,78,77};
    for (int i=0; i<7; i++)
    {
        for (int j=0; j<7-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i=0; i<8; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
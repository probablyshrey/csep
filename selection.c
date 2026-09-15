#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
void print(int *a)
{
    for (int i=0; i<9; i++)
    {
        printf("%d ", a[i]);
    }
}
int main(){
    int key;
    int a[]={3,2,4,5,7,3,78,9,99};
    for (int i=0; i<9; i++)
    {
        key=a[i];
        for (int j=i+1; j<9; j++)
        {
            if (a[j]<key)
            {
                swap(&a[j], &a[i]);
            }
        }
    }
    print(a);
}
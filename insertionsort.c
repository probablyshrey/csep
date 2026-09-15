#include<stdio.h>
void print(int *a)
{
    for (int i=0; i<8; i++)
    {
        printf("%d ", a[i]);
    }
}
int main(){
    int curr, prev;
    int a[]={3,2,55,6,2,78,3,5};
    for (int i=1; i<8; i++)
    {
        curr=a[i];
        prev=i-1;
        while((prev>=0) && (a[prev]>curr))
        {
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=curr;
    }
    print(a);
}
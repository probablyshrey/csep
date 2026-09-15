#include <stdio.h>
int main(){
    int k;
    printf("enter the element: ");
    scanf("%d", &k);
    int a[]={2,6,7,9,12,34,45,50};
    int low=0, high=(sizeof(a)/sizeof(int)-1), mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if (k>a[mid])
        {
            low=mid+1;
        }
        else if (k<a[mid])
        {
            high=mid-1;
        }
        else if (k==a[mid]){
            printf("Element found at position %d", mid+1);
            return 0;
        }
    }
    printf("Element not found.");
    return 0;
}
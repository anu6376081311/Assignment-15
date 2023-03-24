#include <stdio.h>
int smalltest(int [],int );
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf(" Smallest number of this given array is : %d ",smallest(a,n));

    return 0;
}
int smallest(int a[],int n)
{
    printf("Enter the array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[0]>a[i])
        a[0]=a[i];
    }
    return a[0];
}
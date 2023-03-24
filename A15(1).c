#include <stdio.h>
int greatest(int [],int );
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf(" Grestest number of this given array is : %d ",greatest(a,n));

    return 0;
}
int greatest(int a[],int n)
{
    printf("Enter the array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[0]<a[i])
        a[0]=a[i];
    }
    return a[0];
}

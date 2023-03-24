#include<stdio.h>
void sort(int b[],int N);
int main()
{
    int a[10000],x;
    sort(a,x);
    return 0;
}
void sort(int b[],int N)
{
    int t;
    printf("Enter the size of array :");
    scanf("%d",&N);
    printf("Enter the numbers :");
    for(int i=0;i<N;i++)
       scanf("%d",&b[i]);
    for(int i=0;i<N;i++)    
       {
           for(int j=i+1;j<N;j++)
           {
               if(b[i]>b[j])
               {
                  t=b[i];
                  b[i]=b[j];
                  b[j]=t;
               }
           }
           printf("%d ",b[i]);
       }
}
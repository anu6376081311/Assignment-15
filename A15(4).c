#include<stdio.h>
void rotate(int b[],int N);
int main()
{
    int a[10000],x;
    rotate(a,x);
    
    return 0;
}
void rotate(int b[],int N)
{
    int i,d,temp;
    printf("Enter the size of array :");
    scanf("%d",&N);
    printf("Enter the numbers :");
    for(int i=0;i<N;i++)
       scanf("%d",&b[i]);
       printf("enter the value of d :");
       scanf("%d",&d);
    
           for(int j=0;j<d;j++)
           {
               temp=b[0];
               for(int i=0;i<N-1;i++)
               {
                   b[i]=b[i+1];
               }
               b[N-1]=temp;
           }
           for(i=0;i<N;i++)
    printf("%d ",b[i]);
       
}
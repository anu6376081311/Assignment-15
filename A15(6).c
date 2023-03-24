#include<stdio.h>
void revorder(int b[],int N);
int main()
{
    int a[10000],x;
     revorder(a,x);
     
    
    return 0;
}
void revorder(int b[],int N)
{
    int i,j,temp;
    printf("Enter the size of array :");
    scanf("%d",&N);
    printf("Enter the numbers :");
    for(i=0;i<N;i++)
       scanf("%d",&b[i]);
               for(i=N-1;i>=0;i--)
               {
                   printf("%d ",b[i]);
               }
            
}
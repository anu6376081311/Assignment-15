#include<stdio.h>
int sort(int b[],int N);
int main()
{
    int a[10000],x;
    printf("%d",sort(a,x));
    
    return 0;
}
int sort(int b[],int N)
{
    int i;
    printf("Enter the size of array :");
    scanf("%d",&N);
    printf("Enter the numbers :");
    for(i=0;i<N;i++)
       scanf("%d",&b[i]);
               for(i=0;i<N;i++)
               
                  if(b[i]==b[i+1])
                  return b[i];
}
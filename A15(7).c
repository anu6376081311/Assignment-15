#include<stdio.h>
void duplecate(int b[],int N);
int main()
{
    int a[10000],x;
     duplecate(a,x);
     
    
    return 0;
}
void duplecate(int b[],int N)
{
    int i,j,count=0;
    printf("Enter the size of array :");
    scanf("%d",&N);
    printf("Enter the numbers :");
    for(i=0;i<N;i++)
       scanf("%d",&b[i]);
               for(i=0;i<N-1;i++)
               {
                   for(j=i+1;j<N;j++)
                   {
                   if(b[i]==b[j])
                   count++;
                   }
                   
               }
               printf("%d",count);
               
            
}
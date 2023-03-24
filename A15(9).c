 #include<stdio.h>
int main()
{
    int a[] = {3,4,8,9,5};
    int b[]={7,2,13,1,25};
    int c[10],k=0,i=0,j=0;
    for(k=0;k<10;k++)
    {
        if(i>=5)
        {
            while(k<10)
            {
                c[k]=b[j];
                j++;
                k++;
                if(k==10)
                break;
            }
        }
        else if(a[i]<b[j])
        {
        c[k]=a[i];
        i++;
        }
        else
        
        {
            c[k]=b[j];
            j++;
        }
    }
    for(k=0;k<10;k++)
    printf("%d",c[k]);
    return 0;
}

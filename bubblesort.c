#include<stdio.h>
void main()
{
    int a[20],temp,size;
    printf("Enter size of an array:\n");
    scanf("%d",&size);

    for(int i=0;i<size;i++)
    {
        printf("Enter the elements:\n");
        scanf("%d",&a[i]);
    }
    for(int b=0;b<size-1;b++)
    {
        for( int k=0;k<size-1;k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    for(int j=0;j<size;j++)
    {
        printf(" %d\t",a[j]);
    }
}
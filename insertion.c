#include<stdio.h>
#include<conio.h>
int main()
{
    int  size, i, j, k, temp;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array eleemtns\n");
     for(i=0; i<size; i++)
    scanf("%d",&arr[i]);
    
    for(i=1; i<size; i++)
    {
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    }
    printf("\nSorted Array:\n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int size, i, j, temp, small, count=0, index;
    printf("Enter size for Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: \n");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<(size-1); i++)
    {
        small = arr[i];
        for(j=(i+1); j<size; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                count++;
                index = j;
            }
        }
        if(count!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
        count=0;
    }
    printf("\n Array after sorting is:\n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
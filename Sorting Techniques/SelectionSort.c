// selection sort
#include<stdio.h>

int main()
{
    int a[50], size, i, j, swap, key, min;
    printf("Array sorting with selection sort\n");
    // Get array size and array from user
    printf("Enter the array size : ");
    size:
    scanf("%d",&size);
    if(size>0 && size<=50)
    {
        for ( i = 0; i < size; i++)
        {
            printf("Value %d : ",i);
            scanf("%d",&a[i]);
        }
    }
    else
    {
        printf("Enter the array size from '1' to '50' : ");
        goto size;
    }
    // print the entered array    
    printf("Entered array is : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d  ",a[i]);
    }

    // SELECTION SORT implimentaion  -  sample input : 11  8  12  7  4
    for(i=0; i<size-1; i++)
    {
        min = 0;
        for(j=i+1; j<size; j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        swap = a[i];
        a[i] = a[min];
        a[min] = swap;
    }

    // print the entered array    
    printf("\nSorted array is : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}

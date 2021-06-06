// insertion sort
#include<stdio.h>

int main()
{
    int a[50], size, i, j, swap, key;
    printf("Array sorting with insertion sort\n");
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

    // INSERTION SORT implimentaion  -  sample input : 11  8  12  7  4
    for(i=1; i<size; i++)
    {
        j= i-1;
        key = a[i];
        while(j>=0 && key>a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    // print the entered array    
    printf("\nSorted array is : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}

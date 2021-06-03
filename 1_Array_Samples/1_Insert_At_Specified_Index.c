// insert an element in a specified location
#include<stdio.h>

int main()
{
int array[6], i, length=0, location, element;

printf("Enter elements into the array\n");
for(i=0; i<5; i++){
    printf("value for [%d] : ", i+1);
    scanf("%d",&array[i]);
}

printf("The array is : ");
for(i=0; i<5; i++){
    printf("[%d]\t", array[i]);
    length++;
}printf("\n");

location:
printf("Enter the location to be inserted : ");
scanf("%d",&location);
if(location>length){
    printf("Enter the valid location\nLength of array is %d\nIndex is starting with [0]\n",length+1);
    goto location;
}
else{
    printf("Enter the element to be added : ");
    scanf("%d",&element);
    for ( i = 6; i >= location; i--)    {
        array[i+1] = array[i];
    }
    array[location] = element;
    for(i=0; i<=5; i++){
    printf("[%d]\t", array[i]);
    }printf("\n");
}
    return 0;
}
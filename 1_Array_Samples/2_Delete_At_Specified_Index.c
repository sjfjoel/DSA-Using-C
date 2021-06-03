// Delete an element from a specified location
#include<stdio.h>

int main()
{
int array[6], i, location;

printf("Enter elements into the array\n");
for(i=0; i<5; i++){
    printf("value for [%d] : ", i+1);
    scanf("%d",&array[i]);
}

printf("The array is : ");
for(i=0; i<5; i++){
    printf("[%d]\t", array[i]);
    
}printf("\n");

//delete an element in the array
printf("Enter the location to be deleted : ");
scanf("%d",&location);
for ( i = location; i < 4 ; i++){
    array[i] = array[i+1];
}
printf("The array is : ");
for ( i = 0; i < 4; i++){
    printf("[%d]\t",array[i]);
}
    return 0;
}
// linear search - using a key value
#include<stdio.h>

int main(){
    int array[5]={10,20,30,40,50}, keyValue, i, flag;
    printf("Enter the value to be found :");
    scanf("%d",&keyValue);

    for ( i = 0; i < 5; i++){
        if(array[i]==keyValue){
            flag=1;
        }
    }
    if(flag == 1){
        printf("The value had been entered(%d) is found\n", keyValue);
    }
    else{
        printf("The value had been entered(%d) is not found\n", keyValue);
    }   
    return 0;
}
#include<stdio.h>

int main (){

    int arr[10];
    int i;

    printf("The 10 Elements are:\n");
    for(i=0; i<10;i++) {
        printf("elements - %d:" , i);
        scanf("%d" , &arr[i]);
    }

    printf("typed elements are :");
    for(i=0;i<10;i++) {
        printf("%d" , arr[i]);
    }

}
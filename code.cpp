#include "stdio.h"
#define SIZE 10
int main(){
    int largestnumber=0;
    int number_list[SIZE];
    for (int i = 0; i < SIZE; i++) {
        printf("enter numbers:");
        scanf("%d",&number_list[i]);
    }
    for(int i=0;i<SIZE;i++){
        if(largestnumber<number_list[i]) {
            largestnumber=number_list[i];
        }
    }
    printf("largest number=%d",largestnumber);
}

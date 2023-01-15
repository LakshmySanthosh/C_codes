#include<stdio.h>
int main(){
    int arr1[10], num1, num2, count;
    // Initialization of the array
    printf("Enter 8 elements in array: \n");
    for(num1=0; num1<8; num1++){
        scanf("%d", &arr1[num1]);
    }
    count=0;

    // Logic for checking duplication in array
    for(num1=0; num1<8; num1++){
        for(num2=num1+1; num2<8; num2++){
            if(arr1[num1]== arr1[num2]){
                printf("Duplicate element is %d\n", arr1[num1]);
                count++;
                break;
            }
            else{
                continue;
            }
        }
    }
    if(count==0){
        printf("no duplicacy");
    }
    return 0;
}
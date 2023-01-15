#include<stdio.h>
int main(){
    int a[10], num1, num2, rev[10];
    // initialization of element of the array
    printf("Enter any 5 elements in array \n");
    for(num1=0; num1<5;num1++){
        scanf("%d", &a[num1]);
    }

    // Reversing the array logic
    num2=0;
    for(num1=4; num1>=0;num1--){
        rev[num1]= a[num2];
        num2++;
    }

    // Printing the reverse array
    printf("Reversed array is: \n");
    for(num2=0; num2<5; num2++){
        printf("\n %d", rev[num2]);
    }
    return 0;
}
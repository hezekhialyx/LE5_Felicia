#include <stdio.h>

int main() {
    int num,sum = 0;
    
    printf("Enter a number that is positive to be add\n(zero and negative numbers to STOP)\n");
    while(1){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num <= 0){
            break;
        }
        sum += num;
    }
    printf("Total sum is: %d\n", sum);
    return 0;
}

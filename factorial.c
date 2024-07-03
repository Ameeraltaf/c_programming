#include<stdio.h>
int main() {
    int i, fact = 1, n;
    
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);

    
   
        for (i = 1; i <= n; i++) {
            fact=fact *i;
             }
             printf("the factorial of the %d is %d",n,fact);
    
    
    return 0;
}
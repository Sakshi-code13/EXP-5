#include <stdio.h>

int main() {
    int n1, n2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    
    // calculate the sum
    sum = n1 + n2;
    
    printf("%d + %d = %d", n1, n2, sum);
    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prima(int n) {
    if (n <= 1) {
        return 0;
    }
  
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int number;
    
    scanf("%d", &number);
    
    if (prima(number)) {
        printf("PRIMA");
    } 
    else {
        printf("BUKAN");
    }
    
    return 0;
}
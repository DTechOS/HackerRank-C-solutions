#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
// n  = 5
// k = 4

void calculate_the_maximum(int n, int k) {
    int AND_max = 0;
    int OR_max = 0;
    int XOR_max = 0;
    
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) 
        {
            int and = i & j;
            int or = i | j;
            int xor = i ^ j;
            
            if (and > AND_max && and < k) 
            {
                AND_max = and;
            }
            
            if (or > OR_max && or < k) 
            {
                OR_max = or;
            }
            
            if (xor > XOR_max && xor < k) 
            
            {
                XOR_max = xor;
            }   
            
        }
    }    
    
    printf("%d\n%d\n%d", AND_max, OR_max, XOR_max);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

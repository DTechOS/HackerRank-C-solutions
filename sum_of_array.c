#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int sum = 0;
    int res;
    
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i; i < n; i++) 
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
        
    }
    printf("%d",sum);

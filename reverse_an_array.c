#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    // iterate over half of elements
     for(i=0; i<num/2; i++)
    {
        temp = *(arr+i); // initalize temp arr
        *(arr+i) = *(arr+num-1-i); // swap elements in reversed order
        *(arr+num-1-i) = temp; // assign reversed array to temp
    }

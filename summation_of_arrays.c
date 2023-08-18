#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
// we use i+=2 to iterate over marks by step 2,
// because b = marks[0], marks[2], marks[4]... 
// and g = marks[1], marks[3], marks[5]...


int marks_summation(int* marks, int number_of_students, char gender) {
    int summation = 0;
    if (gender == 'b') {
        for(int i = 0; i < number_of_students; i+=2) {
            summation += marks[i];
        }
    } else {
        for(int i = 1; i < number_of_students; i+=2) 
        {
            summation += marks[i];
        }
    }
    
    return summation;
    
  //Write your code here.
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}

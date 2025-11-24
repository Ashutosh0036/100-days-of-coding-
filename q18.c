//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.

#include <stdio.h>

int main() {
    int percent;                         

    printf("Enter percentage: ");          
    scanf("%d", &percent);               

    
    if (percent >= 90 && percent <= 100)
        printf("Grade A");
    else if (percent >= 80 && percent < 90)
        printf("Grade B");
    else if (percent >= 70 && percent < 80)
        printf("Grade C");
    else if (percent >= 60 && percent < 70)
        printf("Grade D");
    else if (percent >= 0 && percent < 60)
        printf("Grade F");
    else
        printf("Invalid percentage");      

    return 0;                              
}
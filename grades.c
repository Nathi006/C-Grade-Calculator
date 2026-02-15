#include <stdio.h>
//a simple c project that calculates the grade average
char averageGrade(double average);
int main(){
    int count;
    double grade, sum =0;
    printf("How many grades are we calculating?");
    //allow the user to take input
    scanf("%d", &count);

    for (int i =0; i < count; i++){
        printf("enter the grade %d: ", i);
        scanf("%lf", &grade);
        sum += grade;
    }
    double avg = sum / count;
    printf("Your grade average is: %lf\n ", avg);
    printf("Your grade symbol is: %c ", averageGrade(avg));
    return 0;
}
char averageGrade(double average){
    if (average >= 75){
        return 'A';
    }
    else if (average >= 70 && average < 75){
        return 'B';
    }
    else if (average >= 60 && average < 70){
        return 'C';
    }
    else if (average >= 50 && average < 60){
        return 'D';
    }
    else{
        return 'F';
    }
}
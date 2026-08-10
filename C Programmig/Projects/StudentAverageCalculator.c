#include<stdio.h>
float calculateAverage(int n, float arr[]){
    float sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum / n;
}
int main(){
    char name[50];
    int n,i;
    float average, marks[100];
    printf("Enter the student's name: ");
    scanf("%s", name);
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    printf("Enter the marks for each subject: ");
    for(i = 0; i < n; i++){
        scanf("%f", &marks[i]);
    }
    average = calculateAverage(n, marks);
    printf("\n--Student Results--\n");
    printf("Name: %s\n", name);
    printf("Average Marks: %.2f\n", average);
    if(average >= 90){
        printf("Grade: A+\n");
    } else if(average >= 80){
        printf("Grade: A\n");
    } else if(average >= 70){
        printf("Grade: B\n");
    } else if(average >= 60){
        printf("Grade: C\n");
    } else if(average >= 50){
        printf("Grade: D\n");
    } else{
        printf("Grade: F\n");
    }
    return 0;
}

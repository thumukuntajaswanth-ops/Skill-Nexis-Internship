#include<stdio.h>
struct Student{
    char name[50];
    int rollNumber;
    float marks;
};
int main(){
    struct Student student,readstudent;
    FILE *file;
    printf("Enter student's name: ");
    scanf("%s", student.name);
    printf("Enter age: ");
    scanf("%d", &student.age);
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    file = fopen("student.dat", "wb");
    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }fprintf(file, "%s %d %.2f", student.name, student.age, student.marks);
    fclose(file);
    file= fopen("student.dat", "rb");
    if(file == NULL){   
        printf("Error opening file!\n");
            return 1;
        }
    fscanf(file, "%s %d %f", readstudent.name, &readstudent.age, &readstudent.marks);
    fclose(file);
    printf("\n--Data Read  from File--\n");
    printf("Name: %s\n", readstudent.name);
    printf("Age: %d\n", readstudent.age);
    printf("Marks: %.2f\n", readstudent.marks);
    return 0;
}
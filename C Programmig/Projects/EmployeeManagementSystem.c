#include<stdio.h>
#include<string.h>
struct Employee{
    char name[50];
    int id;
    float salary;
};
void addEmployee(struct Employee *emp){
    printf("Enter employee name: ");
    scanf("%s", emp->name);
    printf("Enter employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);
}
void displayEmployee(struct Employee emp){
    printf("\n--Employee Details--\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
}
void searchEmployee(struct Employee emp[], int n, int id){
    for(int i = 0; i < n; i++){
        if(emp[i].id == id){
            displayEmployee(emp[i]);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}
int main(){
    int choice;
    while(1){
        printf("\n--Employee Management System--\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        static struct Employee emp[100];
        static int count = 0;
        switch(choice){
            case 1:
                addEmployee(&emp[count]);
                count++;
                break;
            case 2:
                for(int i = 0; i < count; i++){
                    displayEmployee(emp[i]);
                }
                break;
            case 3:
                int id;
                printf("Enter employee ID to search: ");
                scanf("%d", &id);
                searchEmployee(emp, count, id);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

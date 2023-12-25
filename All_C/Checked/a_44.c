#include<stdio.h>
#include<string.h>

struct Employee{
    int id;
    char name[20];
    float salary;
}; // Checked

struct Employee input(){
    struct Employee e;
    printf("Enter id, salary and name of an employee : ");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1] = '\0';
    scanf("%f",&e.salary);
    return e;
} // Cheked

void display(struct Employee e){
    printf("\n");
    printf("%d  %s %d",e.id,e.name,e.salary);
} // Checked

struct Employee highestSalaryEmployee(struct Employee e[], int n){
    struct Employee maxSalaryEmployee;
    int i;
    maxSalaryEmployee = e[0];
    for(i=1;i<n;i++){
        if(maxSalaryEmployee.salary < e[i].salary){
            maxSalaryEmployee = e[i];
        }
    }
    return maxSalaryEmployee;
} // Checked

void sortEmployeesBySalary(struct Employee e[], int n){
    int r,i;
    struct Employee temp;
    for(r=1;r<10;r++){
        for(i=0;i<=n-r-1;i++){
            if(e[i].salary > e[i+1].salary){
                temp = e[i];
                e[i] = e[i+1];
                e[i+1] = temp;
            }
        }
    }
} // Checked

void sortEmployeesByName(struct Employee e[], int n){
    int r,i;
    struct Employee temp;
    for(r=1;r<10;r++){
        for(i=0;i<=n-r-1;i++){
            if(strcmp(e[i].name,e[i+1].name) > 0){
                temp = e[i];
                e[i] = e[i+1];
                e[i+1] = temp;
            }
        }
    }
} // Checked

int main(){
    struct Employee employees[] = {
        {1, "Alice", 50000.0},
        {2, "Bob", 60000.0},
        {3, "Charlie", 45000.0},
        {4, "Asif", 50000.0},
        {5, "Ali", 36000.0},
    };

   

    // Calculate the number of employees in the array
    int numEmployees = sizeof(employees) / sizeof(employees[0]);

    // printf("Unsorted Sorted employees by salary:\n");
    // for (int i = 0; i < numEmployees; i++) {
    //     printf("%s %d %.2f\n", employees[i].name, employees[i].id, employees[i].salary);
    // }

    // Call the sorting function
    sortEmployeesByName(employees, numEmployees);

    // Print the sorted data
    printf("Sorted employees by salary:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("%s %d %.2f\n", employees[i].name, employees[i].id, employees[i].salary);
    }
    return 0;
}
#include<stdio.h>

struct Employee{
    int id;
    char name[20];
    float salary;
};

void input(struct Employee *emp){
    printf("Enter employee id : ");
    scanf("%d",&emp.id);
    printf("Enter employee name : ");
    scanf("%d",&emp.name);
    printf("Enter employee salary : ");
    scanf("%d",&emp.salary);
}

int main(){
    struct Employee emp1;
    input(&emp1);
    printf("Employee ID : %d",emp1.id);
    printf("Employee Name : %s",emp1.name);
    printf("Employee Salary : %.2f",emp1.salary);
    return 0;
}
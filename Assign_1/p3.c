// program tha accepts an employee's ID ,total wored hours of  a month and the amount he recieved per hour 
#include<stdio.h>
int main(){
    // initialization of variables
    int employee_id;
    int total_hours;
    float amount_per_hour;
    float Salary;
    // reading values from user
    printf("Enter employee ID: ");
    scanf("%d", &employee_id);
    printf("Enter total hours worked: ");
    scanf("%d", &total_hours);
    printf("Enter amount received per hour: ");
    scanf("%f", &amount_per_hour);
    Salary=total_hours*amount_per_hour;
    // displaying values
    printf("Employee ID: %d\n", employee_id);
    // printf("Total hours worked: %d\n", total_hours);
    printf("Salary: %.2f\n", Salary);
    return 0;
}
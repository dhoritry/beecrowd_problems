#include <stdio.h>
int salary(int Employee_Number, int working_hr, float amount){
    float salary_amount = working_hr*amount;
    printf("NUMBER = %d\n", Employee_Number);
    printf("SALARY = U$ %.2f\n", salary_amount);
    return 0;
}
int main() {
    int Employee_Number,working_hr;
    float amount;
    scanf("%d %d %f",&Employee_Number, &working_hr, &amount);
    salary(Employee_Number, working_hr, amount);
    return 0;
}

#include <stdio.h>

int main() {
    double fixed_salary,additional_sale,total;
    char name;
    scanf("%s",&name);
    scanf("%lf",&fixed_salary);
    scanf("%lf",&additional_sale);
    total= (fixed_salary+additional_sale*0.15);
    printf("TOTAL = R$ %0.2lf\n",total);
    return 0;
}

#include <stdio.h>

int main() {
    int product_code1, Product_unit1 ,product_code2, Product_unit2;
    float Unit_price1, Unit_price_2, Total_price, price1, price2;
    scanf("%d %d %f\n", &product_code1, &Product_unit1, &Unit_price1);
    scanf("%d %d %f", &product_code2, &Product_unit2, &Unit_price_2);
    price1 = Product_unit1*Unit_price1;
    price2 = Product_unit2*Unit_price_2;
    Total_price = price1 + price2;
    printf("VALOR A PAGAR: R$ %0.2f\n",Total_price);
    return 0;
}

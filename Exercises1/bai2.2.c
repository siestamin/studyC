#include <stdio.h>
int main () {
    float mealCost = 88.67;
    float tax = mealCost*0.0675;
    float tip = (mealCost+tax)*0.2;
    float totalBill = mealCost+tax+tip;
    printf ("Chi phí bữa ăn $%.2f\n",mealCost);
    printf ("Thuế $%.2f\n",tax);
    printf ("Tiền boa $%.2f\n",tip);
    printf ("Tổng hóa đơn $%.2f\n",totalBill);
    

}
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main() {

    setlocale(LC_CTYPE, "RUS");

    double distance = 390;  
    double rollsRoyceFuel = 15; 
    double fordFuel = 36;       
    double x;                   
    double rollsRoyceCost;
    double fordCost;
    double savings;

    printf("Введите стоимость 1 галлона бензина (x): ");
    scanf("%lf", &x);

   
    rollsRoyceCost = (distance / rollsRoyceFuel) * x;

    fordCost = (distance / fordFuel) * x;

    savings = rollsRoyceCost - fordCost;

    printf("Стоимость поездки на Rolls-Royce: %.2f фунтов\n",
        rollsRoyceCost);
    printf("Стоимость поездки на Ford Escort: %.2f фунтов\n",
        fordCost);
    printf("Экономия на Ford Escort: %.2f фунтов\n", savings);

    return 0;
}

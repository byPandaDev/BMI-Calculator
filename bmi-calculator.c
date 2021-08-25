#include <stdio.h>

int main() {

    float weight, heigh, bmi;

    printf("Enter your weight in KG...\n");
    scanf("%f", &weight);

    printf("Enter your height in cm...\n");
    scanf("%f", &heigh);

    //calculate the bmi
    bmi=weight/((heigh/100)*(heigh/100));

    //return the bmi with the second decimal
    printf("Your BMI: %0.2f\n", bmi);

    
    if(bmi < 20) {
        printf("Underweight");
    } else if(bmi >= 20 && bmi <= 24.9) {
        printf("Normal weight");
    } else if(bmi >= 25 && bmi <= 29.9) {
        printf("Overweight");
    } else if(bmi >= 30 && bmi <= 39.9) {
        printf("obesity");
    } else {
        printf("extreme obesity");
    }

    return 0;

    /*
    - Program made by PandaDev
    - Github: https://github.com/xPandaDev
    */

}
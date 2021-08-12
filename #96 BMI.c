#include<stdio.h>

double w,h,hx2,BMI;
int main()
{
    printf("Enter weight : ");
    scanf("%lf",&w);
    printf("\nEnter height : ");
    scanf("%lf",&h);
    h =h/100;
    hx2 = h*h;
    BMI = w/(hx2);
    if(BMI>=30)
    {
        printf("BMI = %lf\n",BMI);
        printf("Obesity ");
    }
    else if(BMI>=25)
    {
        printf("BMI = %lf\n",BMI);
        printf("Overweight ");
    }
    else if(BMI >= 18.5)
    {
        printf("BMI = %lf\n",BMI);
        printf("Normal ");
    }
    else
    {
        printf("BMI = %lf\n",BMI);
        printf("Underweight ");
    }
  return 0;
}

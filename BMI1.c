#include<stdio.h>
double w,h,BMI;
int main()
{
    printf("Enter your weight(kg) : ");
    scanf("%lf",&w);
    printf("Enter your Height(cm) : ");
    scanf("%lf",&h);
    h /= 100;
    BMI = w/(h*h);

    if(w<=0 || h<=0)
    {
        printf("Weight and height must > 0");
    }
    else if(BMI>=30)
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

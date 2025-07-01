#include <stdio.h>
#include <math.h>
#include <string.h>

void plusfunc();
void minusfunc();
void multifunc();
void divfunc();
void powfunc();
void sqrtfunc();

int main(){
  char choose;
  printf("Welcome to simply C calculator!\n");
  printf("Please choose operation(+, -, *, /, p (pow), s (sqrt): ");
  scanf(" %c", &choose);
  switch (choose)
  {
  case '+':
    plusfunc();
    break;
  case '-':
    minusfunc();
    break;
  case '*':
    multifunc();
    break;
  case '/':
    divfunc();
    break;
  case 'p':
    powfunc();
    break;
  case 's':
    sqrtfunc();
    break;  
  default:
    printf("Invalid symbol!\n");
    break;
  }
  return 0;
}

void plusfunc(){
  float num1, num2;
  printf("Write num1: ");
  scanf("%f", &num1);
  printf("Write num2: ");
  scanf("%f", &num2);

  float result = num1 + num2;
  if(result ==(int)result){
    printf("%.0f + %.0f = %.0f\n", num1, num2, result);
  } else {
    printf("%.1f + %.1f = %.1f\n", num1, num2, result);
  }
}

void minusfunc(){
  float num1, num2;
  printf("Write num1: ");
  scanf("%f", &num1);
  printf("Write num2: ");
  scanf("%f", &num2);

  float result = num1 - num2;
  if(result ==(int)result){
    printf("%.0f - %.0f = %.0f\n", num1, num2, result);
  } else {
    printf("%.1f - %.1f = %.1f\n", num1, num2, result);
  }
}

void multifunc(){
  float num1, num2;
  printf("Write num1: ");
  scanf("%f", &num1);
  printf("Write num2: ");
  scanf("%f", &num2);

  float result = num1 * num2;
  if(result ==(int)result){
    printf("%.0f * %.0f = %.0f\n", num1, num2, result);
  } else {
    printf("%.1f * %.1f = %.1f\n", num1, num2, result);
  }
}

void divfunc(){
  float num1, num2;
  printf("Write num1: ");
  scanf("%f", &num1);
  printf("Write num2: ");
  scanf("%f", &num2);

  float result = num1 / num2;
  if(result ==(int)result){
    printf("%.0f / %.0f = %.0f\n", num1, num2, result);
  } else {
    printf("%.1f / %.1f = %.1f\n", num1, num2, result);
  }
}

void powfunc(){
  float num1, num2;
  printf("Write num1: ");
  scanf("%f", &num1);
  printf("Write num2: ");
  scanf("%f", &num2);

  float result = pow(num1, num2);
  if(result ==(int)result){
    printf("%.0f ^ %.0f = %.0f\n", num1, num2, result);
  } else {
    printf("%.1f ^ %.1f = %.1f\n", num1, num2, result);
  }
}

void sqrtfunc(){
  float num;
  printf("Write sqrt num: ");
  scanf("%f", &num);
  if(num <= 0){
    printf("Invalid number!");
    return;
  }

  float result = sqrt(num);
  if(result ==(int)result){
    printf("%.0f in sqrt = %.0f\n", num,  result);
  } else {
    printf("%.1f in sqrt = %.1f\n",  num,  result);
  }
}
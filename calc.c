//It only works on Mac OS/Linux!
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void plusfunc();
void minusfunc();
void multifunc();
void divfunc();
void powfunc();
void sqrtfunc();

int main(){
  char choose[10];
  printf("Welcome to simply C calculator!\n");
  while(true){
    printf("Please choose operation(+, -, *, /, p (pow), s (sqrt), press 'q' to quit): ");
    scanf(" %s", choose);
    if(strcmp(choose, "+") == 0){
      plusfunc();
    } else if(strcmp(choose, "-") == 0){
      minusfunc();
    } else if(strcmp(choose, "*") == 0){
      multifunc();
    } else if(strcmp(choose, "/") == 0){
      divfunc();
    } else if(strcmp(choose, "p") == 0){
      powfunc();
    } else if(strcmp(choose, "s") == 0){
      sqrtfunc();
    } else if(strcmp(choose, "q") == 0){
      printf("bye bye\n");
      sleep(1);
      break;
    } else {
      printf("Error! Invalid choose!\n");
      printf("The program is ending\n");
      sleep(1);
      return 0;
    }
    sleep(2);
    system("clear");
    printf("Сonsole is cleared");
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
  if(num1 == 0 || num2 == 0){
    printf("Error! Division by zero!\n");
    return;
  }

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
  if(num < 0){
    printf("Invalid number!\n");
    return;
  }

  float result = sqrt(num);
  if(result ==(int)result){
    printf("%.0f in sqrt = %.0f\n", num,  result);
  } else {
    printf("%.1f in sqrt = %.1f\n",  num,  result);
  }
}


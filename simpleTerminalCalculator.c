#include <stdio.h>
#include <string.h>
int main(){
  char op;
  double n1,n2;
  printf("Enter the first number: ");
  scanf("%lf", &n1);
  printf("Select an operation (+,-,*,/,c(for continuous mod)): ");
  scanf(" %c", &op);
  printf("Enter the second number: ");
  scanf("%lf", &n2);

  switch(op){
    case '+':
      printf("Result is %lf ", n1+n2);
      return(0);
  }

  switch(op){
    case '-':
      printf("Result is %lf ", n1-n2);
      return(0);
  }


  switch(op){
    case '*':
      printf("Result is %lf ", n1*n2);
      return(0);
  }

  switch(op){
    case '/':
      printf("Result is %lf ", n1/n2);
      return(0);
  }

}

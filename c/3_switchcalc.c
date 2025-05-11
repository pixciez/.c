#include <stdio.h>

int main()
{
  char op;
  double f, s;

  printf("--------- SIMPLE CALCULATOR -------------\n");

  printf("Enter an operator (+, -, *, /, %%): ");
  scanf(" %c", &op);

  printf("Enter two operands: \n");
  scanf("%lf %lf", &f, &s);

  printf("------------------------------------------\n");

  switch (op)
  {
  case '+':
    printf("%.2lf + %.2lf = %.2lf", f, s, f + s);
    break;
  case '-':
    printf("%.2lf - %.2lf = %.2lf", f, s, f - s);
    break;
  case '*':
    printf("%.2lf * %.2lf = %.2lf", f, s, f * s);
    break;
  case '/':
    if (s != 0)
    {
      printf("%.2lf / %.2lf = %.2lf", f, s, f / s);
    }
    else
    {
      printf("Error! Division by zero is undefined.");
    }
    break;
  case '%':
    if (s != 0)
    {
      printf("%.2lf %% %.2lf = %.2lf", f, s, fmod(f, s));
    }
    else
    {
      printf("Error! Modulo by zero is undefined.");
    }
    break;
  default:
    printf("Error! Operator is not correct.");
  }

  return 0;
}

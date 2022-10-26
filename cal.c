int main() {

  char op;
  double first, second;
  printf("Enter  operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter  operands: ");
  scanf("%lf %lf", &first, &second);
 printf("Enter  operands: ");
  scanf("%lf %lf", &first, &second);
  
  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("calcution);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    
    default:
      printf("display error");
                   printf("display new error");

  }

  return 0;
}

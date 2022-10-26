int main() {

  char op;
  double first, second;
  printf("Enter first  operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter  second operands: ");
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
      printf("display error msg ");
  }

  return 0;
}

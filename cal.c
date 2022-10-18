int main() {

  char op;
  double second, third;
  printf("Enter  operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter  operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", second, third, third + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", third, second, second - third);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", third, second, third * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", third, second, third / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("succeeded");
  }

  return -1;
}

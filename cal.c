int main() {

  char op;
  double first, second;
  printf("Enter  operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter  operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    ca
    // operator doesn't match any case constant
    default:
      printf("Error");
  }

  return 0;
}

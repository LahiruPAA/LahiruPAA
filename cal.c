int void() {

  char op;
  double first, second;
  printf("Enter  all operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter  all operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
 
  }

  return 0;
}

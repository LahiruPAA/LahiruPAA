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
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error");
  }

  return 0;
}

{
     printf("\n\n Play File\n\n");
     printf ("********************************************\n");
     printf ("************************************\n");
     printf ("*********** **********\n");
     printf ("********************************************");
     {
    char commandarray[ARRAYSIZE];
    
    char mp3filename[ARRAYSIZE] ="C:\\mplayer\\Robin S - Show me Love.mp3";
    
    sprintf(commandarray, "C:\\mplayer\\mplayer.exe \"%s\"", mp3filename);
    
    printf("\nAttempting to Run Command \"%s\"...\n\n", commandarray);
    
    system(commandarray);
    
    int menuchoice=0;
    switch (menuchoice)
    printf("\n1: Back To Menu");
    printf("\n5: Quit");
   
    printf("\nDone.\n\n");
    
    
   
      
    system("pause");
    
}    
}

void func2(void)
{
     printf("\n\n Show Library\n\n");
}                                                                                              

void func3(void)
{
    
     printf("\n\n Add Record/Song\n\n");
     fopen("ListofSongs.txt","r+");
                       
     printf("\n\n Add Record\n\n");
     
         
}     

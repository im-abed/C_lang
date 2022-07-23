#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
// cygwin is better than mingw with vscode;
/*for lnx running c file from the terminal
gcc --version
sudo apt install build-essential
touch test.c to make the c file
gcc test.c -o test // to compile c file & create output file named test
./test to run the script
*/
// with vscode i should use run in the terminal from preferences;

int main()
{
   char operation;
   double n1, n2;
   printf("Hello, its just a simple calc!  \n");

   printf("please enter a character for the operation * or / or + or -\n");
   scanf("%c", &operation);
   printf("the selected operaion is %c \n", operation);

   printf("\n");
   printf("please enter the 1st num \n");
   scanf("%lf", &n1);
   printf("", n1);
   printf("please enter the 2nd num \n");
   scanf("%lf", &n2);
   printf("", n2);

   switch (operation)
   {
   case '+':
      printf("the result is %.1lf", n1 + n2);
      break;
   case '-':
      printf("the result is %.1lf", n1 - n2);
      break;
   case '/':
      if (n2 != 0)
         printf("the result is %.1lf", n1 / n2);
      else
         printf("cant divide by ZERO");
      break;
   case '*':
      printf("the result is %.1lf", n1 * n2);
      break;
   default: // if the user inserted something else
      printf("invalid operator");
      break;
   }

   return 0;
}

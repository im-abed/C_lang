#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
   // printf() displays the string inside quotation
   printf("Hello, data types and sorage sizes!  \n");

   printf("Char bit : %d \n", CHAR_BIT);
   printf("long min : %ld \n", LONG_MIN);
   printf("long max : %ld \n", LONG_MAX);

   printf("unsigned int size : %u \n", (unsigned int)UINT_MAX);
   printf("unsigned short size : %d \n", (unsigned short) USHRT_MAX);
   printf("unsigned long size : %lu \n", (unsigned long)ULONG_MAX);//should be 1844.... according to the book


   printf("Char stored from  min : %d max %d \n", CHAR_MIN, CHAR_MAX);

   ///////////

   unsigned char unsignch;

   printf("unsigned Char stored  : %zu  \n", sizeof(unsignch));
   // zu also lu z is a length modifier ,u stands for unsigned type of a varaible

   // printf("size of long double type %lu \n",sizeof(long));

   printf("size of double type %lu \n", sizeof(double));
   printf("size of double type %lu \n", sizeof(double));
   printf("size of float type %lu \n", sizeof(float));

   printf("size of int type %zu \n", sizeof(int));
   printf("size of char type %lu \n", sizeof(char));
////Escape seqneces
printf("Escape seqneces \n");
printf("new line \n, alert beep \a, backspace \b,  formfeed page brek \f, carriage return \r, vertical tab \v , horizontal tab \t , single quote \' , double quote \" ");
// in HEX new line 0A

   return 0;
}

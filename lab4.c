#include "lab4.h"

int readMeterValue(char * str)
 {
   double begMeterValue;
   printf("Please enter the beginning meter value: ");
   scanf("%lf", &begMeterValue);
   while(fgetc(stdin)!= '\n');

   double endMeterValue;
   printf("Please enter the ending meter value: \n");
   scanf("%lf", &endMeterValue);


   return 0;
 }

void determineUsage(int begMeterValue, int endMeterValue)
{
  double usage = (endMeterValue - begMeterValue)/10;
  return 
}

char readCustomerCode(char customerCode)
{
  printf("Please enter the customer code: ");
  scanf("%c", &customerCode);
  
  if (customerCode == 'r' == 'R')
  
  return readCustomerCode;
}








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
  scanf("%lf", &usage);
  return 0;
}

char readCustomerCode(char customerCode)
{
  printf("Please enter the customer code: ");
  scanf("%c", &customerCode);
  
  if (customerCode == 'r' == 'R')
  
  return readCustomerCode;
}

double determineCost(double usage, char customerCode)
{

}

void printResults(double cost, double usage, char customerCode, int begMeterValue, int endMeterValue)
{
  printf("The customer's code is : %d\n", &customerCode );
  printf("The customer's meter reading at the beginning of the month was %d\n", &begMeterValue);
  printf("The customer's meter reading at the beginning of the month was %d\n", &endMeterValue);
  printf("The amount of water the customer used is %.1lf \n", &usage);

  
}








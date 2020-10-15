#ifndef LAB4_H
#define LAB4_H

#include <stdio.h>
#include <stdlib.h>

int readMeterValue(char * str);
void determineUsage(int begMeterValue, int endMeterValue);
double determineCost(double usage, char customerCode);
char readCustomerCode(char customerCode);


#endif
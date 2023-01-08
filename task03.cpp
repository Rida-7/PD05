#include <iostream>
using namespace std;
float taxCalculator(char type, float price);

main()
{
char vehicleCode;
float vehiclePrice;
float taxAmount;
float finalPrice;

cout << "Enter vehicle code: ";
cin >> vehicleCode;
cout <<"Enter price of vehicle: ";
cin >> vehiclePrice;

taxAmount = taxCalculator(vehicleCode, vehiclePrice);
finalPrice = vehiclePrice + taxAmount;
cout <<"Final price on a vehicle of type " << vehicleCode <<  " is " << finalPrice;


}
float taxCalculator(char type, float price)
{
float tax;

if (type == 'M')
{ 
  tax = (price*6) / 100;
 return tax; 
}

if (type == 'E')
{
 tax = (price*8) / 100;
 return tax;
}
if (type == 'S')
{
 tax = (price*10) / 100;
 return tax;
}
if (type == 'V')
{
 tax = (price*12) / 100;
 return tax;
}
if (type == 'V')
{
 tax = (price*15) / 100;
 return tax;
}
}


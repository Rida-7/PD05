#include <iostream>
using namespace std;
float volume(float length, float width, float height, string unit);

main()
{
float length;
float width;
float height;
string unit;
float result;

	cout << "Enter Length: ";
	cin >> length;
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter Height: ";
	cin >> height;
	cout << "Enter unit for final result: ";
	cin >> unit;
     
     result = volume(length, width, height, unit);
     cout << "volume in " << unit << " is " << result;


}

   float volume(float length, float width, float height, string unit)
 {
  float volume;
  volume = (length*width*height) / 3;

    if (unit == "meters")
   {
    return volume;
   }
    if (unit == "millimeters")
   {
    volume = volume*1000000000;
    return volume;
   }
    if (unit == "kilometers")
   {
    volume = volume / 1000000000;
    return volume;
   }
    if (unit == "centimeters")
   {
    volume = volume*1000000;
    return volume;
   }
}
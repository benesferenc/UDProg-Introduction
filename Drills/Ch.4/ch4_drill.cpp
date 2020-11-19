#include "std_lib_facilities.h"

int main () 
{
	constexpr double cm_m = 0.01;
	constexpr double in_m = 2.54 * cm_m;
	constexpr double ft_m = 12 * in_m;
	double value;
	double smallest = 0;
	double largest = 0;
	double sum = 0;
	int values_number = 0;
	bool first = true;
	string unit = " ";
	vector <double> all_values = {};

	cout << "Enter a double and a unit (m,cm,in,ft) value, seperated by space:\n";

	while (cin >> value >> unit)
	{
		cout << value << unit << ' ';

		if(unit == "m")
		{

		}
		else if(unit == "cm")
		{
			value = value * cm_m;
		}
		else if(unit == "in")
		{
			value = value * in_m;
		}
		else if(unit == "ft")
		{
			value = value * ft_m;
		}
		else
		{
			simple_error("Not a legal unit!");
		}

		sum = sum + value;

		values_number = values_number + 1;

		all_values.push_back(value);

		if(first == true)
		{
			first = false;
			smallest = value;
			largest = value; 
			
			cout << "is the smallest and largest so far.\n";
		}
		else if(value < smallest)
		{
			smallest = value;

			cout << "is the smallest so far.\n";
		}
		else if(value > largest)
		{
			largest = value;

			cout << "is the largest so far.\n";
		}
		else
		{
			cout << '\n';
		}	
	}

	sort (all_values);

	cout << "The entered values in meters and in increasing order: \n";

	for (int i = 0; i < all_values.size (); ++i)
		cout << all_values [i] << "m ";

	cout << "\nSmallest number: " << smallest << "m"
		 << "\nLargest number: " << largest << "m"
		 << "\nNumber of entered values: " << values_number
		 << "\nSum of the values: " << sum << "m\n";
	

	return 0;
}
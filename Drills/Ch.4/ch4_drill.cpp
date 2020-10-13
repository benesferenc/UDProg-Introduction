#include "std_lib_facilities.h"

int main () 
{
	cout << "Please enter a value and a unit (c,m,i,f) separated by space!:\n";

	double value1, value2;
	double smallest = 1000000000000000, largest = -1000000000000000;
	double unit_value1, unit_value2;
	double sum;
	double values_number = 0;
	char unit1, unit2;
	vector <double> values = {};

	while (cin >> value1 >> unit1)
	{	
		switch (unit1)
		{
			case 'c':

				cout << value1 << "cm\n";

				unit_value1 = value1/100;

				sum = sum + unit_value1;
				break;

			case 'm':

				cout << value1 << "m\n";

				unit_value1 = value1;

				sum = sum + unit_value1;

				break;

			case 'i':

				cout << value1 << "in\n";

				unit_value1 = value1*2.54/100;

				sum = sum + unit_value1;
				break;

			case 'f':

				cout << value1 << "ft\n";

				unit_value1 = value1*12*2.54/100;

				sum = sum + unit_value1;
				break;

			default:

				simple_error ("Wrong unit value!\n");
		}

		values.push_back (unit_value1);

		if (unit_value1 < smallest)
		{
			cout << "the smallest so far\n";

			smallest = unit_value1;
		}
		else if(unit_value1 > largest)
		{
			cout << "the largest so far\n";

			largest = unit_value1;
		}

		cin >> value2 >> unit2;

		switch (unit2)
		{
			case 'c':

				cout << value2 << "cm\n";

				unit_value2 = value2/100;

				sum = sum + unit_value2;
				break;

			case 'm':

				cout << value2 << "m\n";

				unit_value2 = value2;

				sum = sum + unit_value2;
				break;

			case 'i':

				cout << value2 << "in\n";

				unit_value2 =value2*2.54/100;

				sum = sum + unit_value2;
				break;

			case 'f':

				cout << value2 << "ft\n";

				unit_value2 = value2*12*2.54/100;

				sum = sum + unit_value2;
				break;

			default:

				simple_error ("Wrong unit value!\n");

		}

		values.push_back (unit_value2);


		if (unit_value2 < smallest)
		{
			cout << "the smallest so far\n";

			smallest = unit_value2;
		}
		else if(unit_value2 > largest)
		{
			cout << "the largest so far\n";

			largest = unit_value2;
		}

		if (unit_value1 < unit_value2)
	{
		cout << "The smaller value is: " << value1 << unit1 << '\n'
			 << "The larger value is: " << value2 << unit2 <<'\n';
	}
	else if (unit_value1 > unit_value2)
	{
		cout << "The smaller value is: " << value2 << unit2 << '\n'
			 << "The larger value is: " << value1 << unit1 << '\n';	
	}
	else
	{
		cout << "The numbers are equal\n";
	}

	double diff = unit_value1-unit_value2;

	if(diff < 1.0/100 && diff > 0 || diff > -1.0/100 && diff < 0)
	{
		cout << "The numbers are almost equal\n";
	}

	values_number = values_number + 2;

	}

	sort (values);

	cout << "The entered values in meters and in increasing order: \n";

	for (int i = 0; i < values.size (); ++i)
		cout << values [i] << "m ";

	cout << "\nSmallest number: " << smallest << "m"
		 << "\nLargest number: " << largest << "m"
		 << "\nNumber of entered values: " << values_number
		 << "\nSum of the values: " << sum << "m\n";

	return 0;
}
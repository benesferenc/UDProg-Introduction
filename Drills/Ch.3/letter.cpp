#include "std_lib_facilities.h"

int main () 
{

	string first_name;
	string friend_name;
	char friend_sex = 0;
	char m = 'm';
	char f = 'f';
	int age;

	cout << "Enter the name of the person you want to write to!:\n";
			
	cin >> first_name;

	cout << "Enter the name of another friend of yours!:\n";
			
	cin >> friend_name;

	cout << "Enter an m if this friend is a male, or an f if female!:\n";
			
	cin >> friend_sex;

	cout << "Enter the age of the person you are writing this letter to!:\n";

	cin >> age;

	if(age <= 0 || age >= 110)

		simple_error("You're kidding!");

	cout << "\nDear " << first_name << ",\n\n"
			"How are you? I'm fine, if you are wondering.\n"
			"Have you seen " << friend_name << " lately?\n";

	if(friend_sex == m) 
	
		cout << "If you see " << friend_name << " please ask him to call me.\n";

	else 

		cout << "If you see " << friend_name << " please ask her to call me.\n";	

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if(age <= 12)

		cout << "Next year you will be " << age+1 << '\n';

	else if(age == 17)

		cout << "Next year you will be able to vote.\n";

	else if(age >= 70)

		cout << "I hope you enjoying retirement.\n";

	cout << "Yours sincerely, ________ ________ Feco\n";

	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main();
int checkTemp(int temp)
{
	return temp;
};

void serveChai(int cups, string teaType);

void testFunc(string str)
{
	str = "Hey";
	cout << str << endl;
};

int main()
{
	const double tem = checkTemp(45);
	cout << tem << endl;
	string str = "apple";
	cout << str << endl;
	testFunc(str);
	cout << str << endl;
	const

		// lambda -> function with no names
		auto preparedChai = [](int cups)
	{
		cout << "Prep " << cups << " cups of tea." << endl;
	};
	preparedChai(2);
	return 0;
}

void serveChai(int cups, string teaType)
{
	cout << "Total chai cups " << cups << " of " << teaType << endl;
	cout << "serving chai done" << endl;
}

#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "How old are you? \n";
	cin >> age;

	if (age < 20) {
		cout << "You are under 20. Please proceed registration with parent consent.";
	}
	else {
		cout << "Welcome.";
	}

	return 0;
}

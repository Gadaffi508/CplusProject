#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	string admin;
	int password;

	cout << "Enter admin \n";
	cin >> admin;
	cout << "Enter password \n";
	cin >> password;

	if (admin == "Ali" && password == 1234)
	{
		cout << "Login successful";
	}
	else
	{
		cout << "Login failed";
	}
};

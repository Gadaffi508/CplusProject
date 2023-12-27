// Coursework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//First Course
	int gun;
	cout << "Please enter number : ";
	cin >> gun;

	switch (gun)
	{
	case 1:
		cout << "Pazartesi";
		break;
	case 2:
		cout << "Sali";
		break;
	case 3:
		cout << "Çarþamba";
		break;
	case 4:
		cout << "Perþembe";
		break;
	default:
		cout << "False key";
		break;
	}
	cout << endl << "Finish \n";
	//Second Course

	int first_number, second_number, current_number;

	cout << "Enter first number : ";
	cin >> first_number;

	cout << "Enter second number : ";
	cin >> second_number;

	cout << "Please select action : " << endl;
	cout << "Collection for 1 or Substraction for 2" << endl;
	cin >> current_number;

	switch (current_number)
	{
		case 1:
			cout << "Current : " << second_number + first_number;
			break;
		case 2:
			cout << "Current : " << second_number - first_number;
			break;
		default:
			cout << " Fasle actions";
			break;
	}

	cout << endl << "Finish";
}
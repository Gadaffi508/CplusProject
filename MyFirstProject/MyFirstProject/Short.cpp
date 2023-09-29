#include "Short.h"

#include <iostream>
#include <string>

using namespace std;
int main()
{
	int saat = 12;

	string sonuc = (saat < 12) ? "Öðleden önce" : "Öðleden sonra";

	cout << sonuc;
};


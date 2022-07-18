#include <iostream>
using namespace std;

int l1;

void licz()
{
	int y = 0;
	while (!cin.eof())
	{
		cin >> l1;
		y = y + l1;
		cout << y << endl;
	}
}

int main()
{
	licz();
}
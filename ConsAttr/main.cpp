#include <iostream>
#include "cursorx.h"

using namespace std;

int main()
{
	for (auto i = 0; i < 16; ++i)
	{
		set_xy(1, i + 1);
		set_color(i, 0);
		cout << "Fore Color " << i;
	}

	for (auto i = 0; i < 16; ++i)
	{
		set_xy(15, i + 1);
		set_color(0, i);
		cout << "Back Color " << i;
	}

	set_color(7, 0);
	set_xy(1, 20);

	system("pause");
	system("cls");



	return 0;
}



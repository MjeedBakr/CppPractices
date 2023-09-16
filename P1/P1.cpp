#include <iostream>
using namespace std;

enum enScreenColors{Red, Blue, Green, Yellow};

int main()
{
	cout << "Choose ur screen color number: \n\n";
	cout << "(0) Red \n";
	cout << "(1) Blue \n";
	cout << "(2) Green \n";
	cout << "(3) Yellow \n";
	cout << "Your choice?\n\n";

	int choice;
	enScreenColors color;

	cin >> choice;
	color = (enScreenColors)choice; //conver choice variable to enScreenColors

	switch (color)
	{
	case enScreenColors::Red :
		system("color 4F");
		break;
	case enScreenColors::Blue :
		system("color 1F");
		break;
	case enScreenColors::Green :
		system("color 2F");
		break;
	case enScreenColors::Yellow :
		system("color 6F");
		break;
	default:
		system("color 4F");
	}

	return 0;
}
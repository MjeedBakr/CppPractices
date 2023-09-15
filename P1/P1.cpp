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

	if (color == enScreenColors::Red)
		system("color 4F");
	else if (color == enScreenColors::Blue)
		system("color 1F");
	else if (color == enScreenColors::Green)
		system("color 2F");
	else if (color == enScreenColors::Yellow)
		system("color 6F");
	else
		cout << "Wrong choice";

	return 0;
}
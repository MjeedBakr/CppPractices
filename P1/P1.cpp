#include <iostream>
#include <string>
using namespace std;

string readPassword()
{
	string password = "";

	cout << "PLease enter a 3-Letter Password (all cabital): ";
	cin >> password;

	return password;

}

bool guessPassword(string originalPassword)
{
	string word = "";
	short trialCount = 0;

		for (int i = 65; i <= 90; i++)
		{
			for (int j = 65; j <= 90; j++)
			{
				for (int k = 65; k <= 90; k++)
				{
					trialCount++;

					word = word + char(i);
					word = word + char(j);
					word = word + char(k);
				
					cout << "Trial [" << trialCount << "] : " << word << endl;

					if (originalPassword == word)
					{
						cout << "\nPassword is " << originalPassword << "\n";
						cout << "Found after " << trialCount << " Trial(s)\n";
						return true;
					}

					word = "";
				}
			}
		}

	return false;

}


int main()
{
	guessPassword(readPassword());
	return 0;
}
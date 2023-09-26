#include <iostream>
using namespace std;

int main()
{
	char input;                        // هنا أقرأ القيمة وأخزنها
	cout << "Enter any character: ";   // في المتغير الي اسمه
	cin >> input;                      // input




	for (int i = 0; i <= 127; i++)                             	   //هنا أمر على كل الأحرف والأرقام
	{
		if (char(i) == input)                                      //أقارن كل حرف مع القيمة الي ادخلتها
		{
			if (i >= 65 && i << 90)
				cout << "Character is a capital letter" << endl;   //اذا طلع حرف كبير
			else if (i >= 97 && i <= 122)
				cout << "Character is a small letter" << endl;     //اذا طلع حرف صغير
			else if (i >= 48 && i <= 57)
				cout << "Character is a number" << endl;           //اذا رقم
			else
				cout << "Character is a special symbol" << endl;   //اذا اي شيء ثاني
			break;
		}
	}

	return 0;
}
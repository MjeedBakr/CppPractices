#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

class clsCalculator
{
private:
	int _number = 0;
	enum enOperation {ADD, SUB, DIV, MUL, CLR};
	enOperation _lastOperation;
	int _lastValue = 0;

	string getOpearionText(enOperation operation)
	{
		switch (operation)
		{
		case enOperation::ADD:
			return "Adding";
		case enOperation::SUB:
			return "Subtracting";
		case enOperation::CLR:
			return "Clear";
		case enOperation::DIV:
			return "Dividing";
		case enOperation::MUL:
			return "Multiplying";
		default:
			return "Doing nothing to";
		}
	}

public:

	void add(int number)
	{
		_lastValue = number;
		_number += number;
		_lastOperation = enOperation::ADD;
	}

	void subtract(int number)
	{
		_lastValue = number;
		_number -= number;
		_lastOperation = enOperation::SUB;
	}
	
	void multiply(int number)
	{
		_lastValue = number;
		_number *= number;
		_lastOperation = enOperation::MUL;
	}

	void divide(int number)
	{
		if (number < 1)
			number = 1;
		
		_lastValue = number;
		_number /= number;
		_lastOperation = enOperation::DIV;
	}

	void clear()
	{
		_lastValue = 0;
		_number = 0;
		_lastOperation = enOperation::CLR;
	}

	void printResult()
	{
		cout << "Result After " << getOpearionText(_lastOperation) << " " << _lastValue << " is: " << _number << endl;
	}

};

int main()
{
	clsCalculator calculator1;

	calculator1.printResult();

	calculator1.add(10);
	calculator1.printResult();

	calculator1.add(100);
	calculator1.printResult();

	calculator1.subtract(20);
	calculator1.printResult();

	calculator1.divide(0);
	calculator1.printResult();

	calculator1.divide(2);
	calculator1.printResult();

	calculator1.multiply(3);
	calculator1.printResult();

	calculator1.clear();
	calculator1.printResult();
	
	system("pause>0");
	return 0;
}
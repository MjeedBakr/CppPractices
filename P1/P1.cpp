#include <iostream>
#include <string>
#include <iomanip>
#include "MyLib.h"

using namespace std;

class clsCalculator
{
private:
	float _result = 0;
	enum enOperation {ADD, SUB, DIV, MUL, CLR, CANCEL};
	enOperation _lastOperation;
	float _lastNumber = 0;
	float _previousResult;

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
		case enOperation::CANCEL:
			return "Canceling Last Operation";
		default:
			return "Doing nothing to";
		}
	}

public:

	void add(float number)
	{
		_lastNumber = number;
		_previousResult = _result;
		_result += number;
		_lastOperation = enOperation::ADD;
	}

	void subtract(float number)
	{
		_lastNumber = number;
		_previousResult = _result;
		_result -= number;
		_lastOperation = enOperation::SUB;
	}
	
	void multiply(float number)
	{
		_lastNumber = number;
		_previousResult = _result;
		_result *= number;
		_lastOperation = enOperation::MUL;
	}

	void divide(float number)
	{
		if (number < 1)
			number = 1;
		
		_lastNumber = number;
		_previousResult = _result;
		_result /= number;
		_lastOperation = enOperation::DIV;
	}

	void clear()
	{
		_lastNumber = 0;
		_result = 0;
		_lastOperation = enOperation::CLR;
	}

	void cancelLastOpeartion()
	{
		_lastNumber = 0;
		_result = _previousResult;
		_lastOperation = enOperation::CANCEL;
	}

	void printResult()
	{
		cout << "Result After " << getOpearionText(_lastOperation) << " " << _lastNumber << " is: " << _result << endl;
	}

};

int main()
{
	clsCalculator calculator1;

	calculator1.clear();

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

	calculator1.cancelLastOpeartion();
	calculator1.printResult();
	
	system("pause>0");
	return 0;
}
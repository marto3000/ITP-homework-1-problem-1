#include <iostream>
using namespace std;

bool varA_in_varB(int varA, int varB)
{
	if (varA < 0)
	{
		varA *= -1;
	}
	if (varB < 0)
	{
		varB *= -1;
	}

	int tempA = varA;
	int tempB = varB;
	bool aInB = true;
	bool tempCheck = false;
	do
	{
		if (tempA % 10 == tempB % 10)
		{
			tempCheck = true;
		}
		if (tempB < 10)
		{
			tempB = varB;
			tempA /= 10;
			if (tempCheck == false)
			{
				aInB = false;
				break;
			}
		}
		else
		{
			tempB /= 10;
		}
	} while (tempA != 0);
	return aInB;
}

int main()
{
	int firstNum, secondNum;
	cin >> firstNum >> secondNum;
	bool firstInSecond = varA_in_varB(firstNum, secondNum);
	bool secondInFirst = varA_in_varB(secondNum, firstNum);

	if (firstInSecond == true && secondInFirst == true)
	{
		cout << "Equal strength";
	}
	if (firstInSecond == true && secondInFirst == false)
	{
		cout << "First is weaker";
	}
	if (firstInSecond == false && secondInFirst == true)
	{
		cout << "Second is weaker";
	}
	if (firstInSecond == false && secondInFirst == false)
	{
		cout << "Not comparable";
	}
	
	return 0;
}
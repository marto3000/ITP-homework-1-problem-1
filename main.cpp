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

	int tempB = varB;
	bool tempCheck = false;
	while (varA != 0)
	{
		if (varA % 10 == varB % 10)
		{
			tempCheck = true;
		}
		if (varB < 10)
		{
			varB = tempB;
			varA /= 10;
			if (tempCheck == false)
			{
				return false;
			}
			else
			{
				tempCheck = false;
			}
		}
		else
		{
			varB /= 10;
		}
	}
	return true;
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
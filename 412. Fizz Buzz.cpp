//https://leetcode.com/problems/fizz-buzz/description/
#include<iostream>
#include<sstream>
#include<vector>


using namespace std;

int check(int n)
{
	if (n % 3 == 0)
	{
		if (n % 5 == 0)
		{
			return 3;
		}
		return 1;
	}

	if (n % 5 == 0)
	{
		return 2;
	}

	return 0;
}

string intToString(int n)
{
	stringstream ssr;
	ssr << n;
	return ssr.str();
}

vector<string> fizzBuzz(int n) 
{
	vector<string> result(n);

	for (int i = 0; i < n; i++)
	{
		int c = check(i + 1);
		switch (c)
		{
			case 1:
			{
				result[i] = "Fizz";
			}; break;
			case 2:
			{
				result[i] = "Buzz";
			}; break;
			case 3:
			{
				result[i] = "FizzBuzz";
			}; break;
			case 0:
			{
				result[i] = intToString(i+1);
			}; break;
			default:
				break;
		}
	}
	return result;
}

int main()
{
	auto a = fizzBuzz(15);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int num, div = 2, flag = false;
	cin >> num;

	if (num < div)
	{
		cout << "Not a prime";
	}
	else if (num == div)
	{
		cout << "A prime";
	}
	else
	{
		for (int i = div; i < num; i++)
		{
			if (num % i == 0)
			{
				cout << "Not a prime" << endl;
				flag = false;
				break;
			}
			else
			{
				flag = true;
			}
		}

		if (flag)
		{
			cout << "A prime" << endl;
		}
	}

	return 0;
}
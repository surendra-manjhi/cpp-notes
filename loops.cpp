#include <iostream>
using namespace std;

int main()
{
	// 1 to 100

	// for (int i = 1; i <= 100; i++)
	// {
	// 	cout << i << " ";
	// }

	// 10 to 1

	// for (int i = 10; i >= 1; i--)
	// {
	// 	cout << i << " ";
	// }

	// a to z

	// for (char alp = 'a'; alp <= 'z'; alp++)
	// {
	// 	cout << alp << " ";
	// }

	// 1 to 100 but jumps with 3 steps

	// for (int i = 1; i <= 100; i = i + 3)
	// {
	// 	cout << i << " ";
	// }

	// n table

	// int t;
	// cin >> t;

	// for (int i = 1; i <= 10; i++)
	// {
	// 	cout << t * i << " ";
	// }

	// cout << endl; // or

	// for (int i = t; i <= t * 10; i = i + t)
	// {
	// 	cout << i << " ";
	// }

	// n ** power

	// int num, power, result;
	// cin >> num >> power;

	// result = num;

	// for (int i = 1; i < power; i++)
	// {
	// 	result = result * num;
	// }

	// cout << result;

	// sum of n natural

	// int n, sum = 0;
	// cin >> n;

	// for (int i = 1; i <= n; i++)
	// {
	// 	sum += i;
	// }

	// cout << sum << " ";

	// // or

	// cout << n * (n + 1) / 2; // optimized

	// factorial

	// int n, fac = 1;
	// cin >> n;

	// for (int i = 1; i <= n; i++)
	// {
	// 	fac *= i;
	// }

	// cout << fac << " ";

	// is Prime

	// int n;
	// cin >> n;

	// if (n < 2)
	// {
	// 	cout << "No";
	// 	return 0;
	// }
	// else
	// {
	// 	for (int i = 2; i < n; i++)
	// 	{
	// 		if (n % i == 0)
	// 		{
	// 			cout << "No";
	// 			return 0;
	// 		}
	// 	}

	// 	cout << "Yes";
	// 	return 0;
	// }

	// Fibonacci

	int n, last = 0, prev = 1, fibo = 0;
	cin >> n;

	if (n <= 2)
	{
		cout << "Please enter atleast >= 3";
		return 1;
	}

	cout << last << " " << prev << " ";

	for (int i = 3; i <= n; i++)
	{
		fibo = prev + last;

		if (i != n)
			cout << fibo << " ";
			
		last = prev;
		prev = fibo;
	}

	cout << fibo;

	return 0;
}
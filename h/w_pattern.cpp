#include <iostream>
using namespace std;

int main()
{
	// 1
	// 1 2
	// 1 2 3
	// 1 2 3 4
	// 1 2 3 4 5
	// 1 2 3 4 5 6

	// for (int row = 1; row <= 6; row++)
	// {
	// 	for (int col = 1; col <= row; col++)
	// 	{
	// 		cout << col << " ";
	// 	}
	// 	cout << endl;
	// }

	// A
	// A B
	// A B C
	// A B C D
	// A B C D E

	// for (int row = 1; row <= 5; row++)
	// {
	// 	char alp = 'A';

	// 	for (int col = 1; col <= row; col++)
	// 	{
	// 		cout << alp << " ";
	// 		alp++;
	// 	}

	// 	cout << endl;
	// }

	// or

	// for (int row = 1; row <= 5; row++)
	// {

	// 	for (char col = 'A'; col <= 'A' + (row - 1); col++)
	// 	{
	// 		cout << col << " ";
	// 	}

	// 	cout << endl;
	// }

	// 10
	// 10 11
	// 10 11 12
	// 10 11 12 13
	// 10 11 12 13 14
	// 10 11 12 13 14 15

	// for (int row = 1; row <= 6; row++)
	// {
	// 	for (int col = 10; col <= 10 + (row - 1); col++)
	// 	{
	// 		cout << col << " ";
	// 	}
	// 	cout << endl;
	// }

	// A B C D
	// A B C
	// A B
	// A

	// for (int row = 4; row >= 1; row--)
	// {
	// 	for (char col = 'A'; col <= 'A' + (row - 1); col++)
	// 	{
	// 		cout << col << " ";
	// 	}
	// 	cout << endl;
	// }

	return 0;
}
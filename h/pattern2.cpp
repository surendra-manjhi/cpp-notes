#include <iostream>
using namespace std;

int main()
{
	//     1
	//    21
	//   321
	//  4321
	// 54321

	for (int row = 1; row <= 5; row++)
	{
		for (int col = 1; col <= 5 - row; col++)
		{
			cout << " "; // space " "
		}

		for (int col = row; col >= 1; col--)
		{
			cout << col;
		}
		cout << endl;
	}

	for (int row = 1; row <= 5; row++)
	{
		for (int col = 1; col <= 5 - row; col++)
		{
			cout << " "; // space " "
		}

		char alp = 'A' + (row - 1);

		for (int col = row; col >= 1; col--)
		{
			cout << alp;
		}
		cout << endl;
	}

	for (int row = 5; row >= 1; row--)
	{
		for (int col = row - 1; col >= 1; col--)
		{
			cout << " "; // space " "
		}

		for (int col = 5; col >= row; col--)
		{
			cout << col;
		}
		cout << endl;
	}

	for (int row = 5; row >= 1; row--)
	{
		for (int col = row - 1; col >= 1; col--)
		{
			cout << " "; // space " "
		}

		for (int col = 5; col >= row; col--)
		{
			char alp = 'A' + (col - 1);
			cout << alp;
		}
		cout << endl;
	}
	
	return 0;
}
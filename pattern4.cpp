#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// for (int row = 1; row <= n; row++)
	// {
	// 	for (int col = 1; col <= n - row; col++)
	// 	{
	// 		cout << " "; // space " "
	// 	}

	// 	for (int col = 1; col <= row + (row - 1); col++)
	// 	{
	// 		// can also be col <= 2 * (row - 1)
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }

	// for (int row = 1; row <= n; row++)
	// {
	// 	// space
	// 	for (int col = 1; col <= n - row; col++)
	// 	{
	// 		cout << " "; // space " "
	// 	}

	// 	// 1 to row
	// 	for (int col = 1; col <= row; col++)
	// 	{
	// 		cout << col;
	// 	}

	//  	// row - 1 to 1
	// 	for (int col = row - 1; col >= 1; col--)
	// 	{
	// 		cout << col;
	// 	}

	// 	cout << endl;
	// }

	// for (int row = n; row >= 1; row--)
	// {
	// 	// space
	// 	for (int col = n - 1; col >= row; col--)
	// 	{
	// 		//   col = 1; col <= n - row; col++
	// 		cout << " "; // space " "
	// 	}

	// 	// (row * 2) - 1 to 1
	// 	for (int col = (row * 2) - 1; col >= 1; col--)
	// 	{
	// 		// col = 1; col <= (row * 2) - 1; col++
	// 		cout << "*";
	// 	}

	// 	cout << endl;
	// }

	// for (int row = n; row >= 1; row--)
	// {
	// 	// row to 1
	// 	for (int col = row; col >= 1; col--)
	// 	{
	// 		// col = 1; col <= (row * 2) - 1; col++
	// 		cout << "* ";
	// 	}

	// 	// space
	// 	for (int col = 1; col <= (n - row) * 2; col++)
	// 	{
	// 		//   col = 1; col <= n - row; col++
	// 		cout << "  "; // space " "
	// 	}

	// 	// row to 1
	// 	for (int col = row; col >= 1; col--)
	// 	{
	// 		// col = 1; col <= (row * 2) - 1; col++
	// 		cout << "* ";
	// 	}

	// 	cout << endl;
	// }

	// for (int row = n; row >= 1; row--)
	// {
	// 	// row to 1
	// 	for (int col = n; col >= row; col--)
	// 	{
	// 		// col = 1; col <= (row * 2) - 1; col++
	// 		cout << "* ";
	// 	}

	// 	// space
	// 	for (int col = 1; col <= (row * 2) - 2; col++)
	// 	{
	// 		//   col = 1; col <= n - row; col++
	// 		cout << "  "; // space " "
	// 	}

	// 	// row to 1
	// 	for (int col = n; col >= row; col--)
	// 	{
	// 		// col = 1; col <= (row * 2) - 1; col++
	// 		cout << "* ";
	// 	}

	// 	cout << endl;
	// }

		return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int rows;

	cout << "Enter the Rows of Triangle to display: ";
	cin >> rows;		// Enter the Rows of Triangle to display

	for (int row = 1; row <= rows; row++)
	{
		for (int col_space = row; col_space < rows; col_space++)
		{
			cout << " ";
		}
		for (int col_aesterik = 1; col_aesterik <= row * 2 - 1; col_aesterik++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}

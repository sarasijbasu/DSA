#include <iostream>
using namespace std;

int main()
{
    int no_of_rows;
    cout << "Enter the number of stars in each side : ";
    cin >> no_of_rows;
    for (int row = 0; row < no_of_rows; row++)
    {
        for (int i = 0; i < no_of_rows - 1 - row; i++)
        {
            cout << " ";
        }
        for (int j = 0; j < row + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < no_of_rows; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < no_of_rows - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
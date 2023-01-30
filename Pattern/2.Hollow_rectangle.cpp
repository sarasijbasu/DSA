#include <iostream>
using namespace std;
int main()
{
    int row_no, col_no;
    cout << "Enter Number of Rows and Number of Columns : " << endl;
    cin >> row_no >> col_no;
    // hollow rectangle
    for (int row = 0; row < row_no; row++)
    {
        if (row == 0 || row == row_no - 1)
        {
            for (int col = 0; col < col_no; col++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int i = 0; i < col_no - 2; i++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;
// ****
// ****
// ****
// output should be like this for 3 rows and 4 columns

int main()
{
    // Rectangular
    int row_no, col_no;
    cout << "Enter Number of Rows and Number of Columns : " << endl;
    cin >> row_no >> col_no;
    for (int row = 0; row < row_no; row++)
    {
        for (int col = 0; col < col_no; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

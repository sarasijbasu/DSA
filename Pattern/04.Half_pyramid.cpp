#include <iostream>
using namespace std;
int main()

// *
// **
// ***
// ****
// *****
// output should be like this for 5 rows
{
    int no_of_rows;
    cout << "Enter the number of rows : ";
    cin >> no_of_rows;
    for (int row = 0; row < no_of_rows; row++)
    {
        
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

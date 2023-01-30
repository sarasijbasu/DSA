#include <iostream>
using namespace std;

// Solid square

// *****
// *****
// *****
// *****
// *****
// output should be like this for 5 rows

int main()
{
    int no_of_rows;
    cout << "Enter the number of rows : ";
    cin >> no_of_rows;
    for (int row = 0; row < no_of_rows; row++)
    {
        for (int col = 0; col < no_of_rows; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
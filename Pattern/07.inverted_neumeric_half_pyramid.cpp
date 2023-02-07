#include <iostream>
using namespace std;

// 123456789
// 12345678
// 1234567
// 123456
// 12345
// 1234
// 123
// 12
// 1
// This should be the output for row = 9
int main()
{
    int no_of_rows;
    cout << "Enter the number of rows : ";
    cin >> no_of_rows;
    for (int row = 0; row < no_of_rows; row++)
    {
        /* code */
        for (int col = 0; col < no_of_rows - row; col++)
        {
            /* code */
            cout << col+1;
        }
        cout << endl;
    }
}

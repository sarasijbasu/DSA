#include <iostream>
using namespace std;
int main()

// 123456789
// 12345678
// 1234567
// 123456
// 12345
// 1234
// 123
// 12
// 1
// Output should be like this for 9 rows

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
            cout << col + 1;
        }
        cout << endl;
    }
}

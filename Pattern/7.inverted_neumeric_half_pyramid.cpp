#include <iostream>
using namespace std;
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
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
        for (int col = 0; col < row + 1; col++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
}
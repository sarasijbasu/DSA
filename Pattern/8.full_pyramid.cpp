#include <iostream>
using namespace std;
int main()
{
    int no_of_rows;
    cout << "Enter the number of rows : ";
    cin >> no_of_rows;
    for (int row = 0; row < no_of_rows; row++)
    {
        // code for printing space
        for (int i = 0; i < no_of_rows - 1 - row; i++)
        {
            cout << " ";
        }
        //code for printing star
        for (int j = 0; j < row + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

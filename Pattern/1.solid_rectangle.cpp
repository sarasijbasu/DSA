#include <iostream>
using namespace std;

int main() {
  // Rectangular
  int row_no, col_no;
  cout << "Enter Number of Rows and Number of Columns : " << endl;
  cin >> row_no >> col_no;
  for (int row = 0; row < row_no; row++) {
    for (int col = 0; col < col_no; col++) {
      cout << "*";
    }
    cout << endl;
  }
}

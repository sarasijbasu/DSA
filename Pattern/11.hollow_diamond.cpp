#include <iostream>
using namespace std;

//          *
//         * *
//        *   *
//       *     *
//      *       *
//     *         *
//    *           *
//   *             *
//  *               *
// *                 *
// *                 *
//  *               *
//   *             *
//    *           *
//     *         *
//      *       *
//       *     *
//        *   *
//         * *
//          *
// The output should be like this for n=10

int main() {
  int noOfSide;
  cout << "Enter the number of star in each side : " << endl;
  cin >> noOfSide;

  for (int row = 0; row < noOfSide; row++) {
    for (int spaces = 0; spaces < noOfSide - row - 1; spaces++) {
      cout << " ";
    }
    for (int col = 0; col < 2 * row + 1; col++) {
      if (col == 0 || col == 2 * row) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  for (int row = 0; row < noOfSide; row++) {

    for (int col = 0; col < row; col++) {
      cout << " ";
    }

    for (int col = 0; col < 2 * noOfSide - 2 * row - 1; col++) {
      if (col == 0 || col == 2 * noOfSide - 2 * row - 2) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
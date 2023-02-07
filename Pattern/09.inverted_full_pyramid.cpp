#include <iostream>
using namespace std;

// * * * * * * * * * * * *
//  * * * * * * * * * * *
//   * * * * * * * * * *
//    * * * * * * * * *
//     * * * * * * * *
//      * * * * * * *
//       * * * * * *
//        * * * * *
//         * * * *
//          * * *
//           * *
//            *
// the output should be like this for n=12

int main() {
  int numOfRows;
  cout << "Enter the number of rows : " << endl;
  cin >> numOfRows;
  for (int row = 0; row < numOfRows; row++) {
    for (int col = 0; col < row; col++) {
      cout << " ";
    }
    for (int col = 0; col < numOfRows - row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}

#include <iostream>
using namespace std;
void undoom_dice(int Die_A[6], int Die_B[6], int New_Die_A[6], int New_Die_B[6]) {
    for (int i = 0; i < 6; ++i) {
        New_Die_A[i] = min(Die_A[i], 4);  //  no more than 4 spots on each face
        New_Die_B[i] = min(Die_B[i], 6);  //  Die B can have up to 6 spots on a face
    }
}
int main() {
    int Die_A[6] = {1, 2, 3, 4, 5, 6};
    int Die_B[6] = {1, 2, 3, 4, 5, 6};
    int New_Die_A[6];
    int New_Die_B[6];

    undoom_dice(Die_A, Die_B, New_Die_A, New_Die_B);

    cout << "New Die A: ";
    for (int i = 0; i < 6; ++i) {
        cout << New_Die_A[i] << " ";
    }
    cout << endl;

    cout << "New Die B: ";
    for (int i = 0; i < 6; ++i) {
        cout << New_Die_B[i] << " ";
    }
      cout << endl;

    return 0;
}
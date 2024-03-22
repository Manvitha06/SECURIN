#include <iostream>
using namespace std;
// Function to calculate and display the possible distributions
void calculateDistributions(int distributions[6][6]) {
    cout << "Possible Distributions:\n";
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            distributions[i][j] = (i + 1) + (j + 1);  // Sum of Die A and Die B faces
            cout << distributions[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void undoom_dice(int Die_A[6], int Die_B[6], int New_Die_A[6], int New_Die_B[6]) {
    for (int i = 0; i < 6; ++i) {
        New_Die_A[i] = std::min(Die_A[i], 4);  // Ensure no more than 4 spots on each face
        New_Die_B[i] = std::min(Die_B[i], 6);  // Ensure Die B can have up to 6 spots on a face
    }
}
void calculateProbability(int distribution[6][6]) {
    cout << "Probability of Each Sum Occurring:\n";
    int totalCombinations = 36;  // Total combinations possible
    for (int sum = 2; sum <= 12; ++sum) {  // Possible sums range from 2 to 12
        double count = 0;
        for (int i = 0; i < 6; ++i) {
            for (int j = 0; j < 6; ++j) {
                if (distribution[i][j] == sum) {
                    count++;
                }
            }
        }
        double probability = (count) / totalCombinations;
        cout << "P(Sum = " << sum << ") = " << probability << std::endl;
    }
    cout << endl;
}
int main() {
    int Die_A[6] = {1, 2, 3, 4, 5, 6};
    int Die_B[6] = {1, 2, 3, 4, 5, 6};
    int New_Die_A[6];
    int New_Die_B[6];
    int distributions[6][6];
   
    undoom_dice(Die_A, Die_B, New_Die_A, New_Die_B);
    cout << "New Die A: ";
    for (int i = 0; i < 6; ++i) {
        cout << New_Die_A[i] << " ";
    }
    cout << std::endl;
    cout << "New Die B: ";
    for (int i = 0; i < 6; ++i) {
        cout << New_Die_B[i] << " ";
        
    }
    cout << endl<<endl;
     calculateDistributions(distributions);
     calculateProbability(distributions);
    return 0;
}
#include <iostream>
using namespace std;
// Function to calculate and display the distribution of sums
void calculate_distribution(int distribution[6][6]) {
    cout << "Distribution of Sums:\n";
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            distribution[i][j] = (i + 1) + (j + 1); // Sum of faces
            cout<< distribution[i][j] << " ";
        }
        cout <<endl;
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
    int total_combinations,DiceA,DiceB,n;
    cout<<"Enter the no.of dices:\n";
    cin>>n;
   if(n==2) //This program only work for two dices.
    { cout<<"Enter the no.of faces on DiceA: "<<endl;
    cin>>DiceA;
    cout<<"Enter the no.of faces on DiceB: "<<endl;
    cin>>DiceB;
     total_combinations=DiceA*DiceB;
    cout<<"Toatal Cmbinations : "<<total_combinations<<endl;
    int distribution[6][6]; // Declare a 6x6 array for distribution
    calculate_distribution(distribution);
    calculateProbability(distribution);
   }
   else
{
    cout<<"Not Possible";
}
    return 0;
}

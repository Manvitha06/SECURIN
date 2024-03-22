Part A:
The problem statements are:
1. How many total combinations are possible? Show the math along with the code
 2. Calculate and display the distribution of all possible combinations that can be obtained when rolling both Die A and Die B together. Show the math along with the code. ( Hint: A 6 x 6 Matrix.) 
3. Calculate the Probability of all Possible Sums occurring among the number of combinations from (2).
 Example: P (Sum = 2) = 1/X as there is only one combination possible to obtain Sum = 2. Die A = Die B = 1
My understanding of the problem statements and how the code has been generated by my logic:
The problem involves two six-sided dice, Die A and Die B, where each die has faces numbered from 1 to 6. The goal is to perform several tasks including calculating total combinations, determining the distribution of sums, calculating probabilities, and implementing a transformation function for the dice. 
1)	Total Combinations:
The total number of combinations possible when rolling both Die A and Die B together is calculated as the product of the number of faces on each die, which is 6 in this case.
Formula: Total Combinations = Number of Faces on Die A * Number of Faces on Die B
2)	Distribution of Sums:
To calculate the distribution of sums, you iterate through each possible combination of faces on Die A and Die B. For each combination, calculate the sum of the faces and store it in a matrix or array. The matrix represents all possible combinations and their corresponding sums.


Example: If Die A has faces [1, 2, 3, 4, 5, 6] and Die B has faces [1, 2, 3, 4, 5, 6] the distribution of sums matrix would look like
Possible Distributions:
2 3 4 5 6 7 
3 4 5 6 7 8 
4 5 6 7 8 9 
5 6 7 8 9 10 
6 7 8 9 10 11 
7 8 9 10 11 12
3)	Probability of Sums:
Calculate the probability of each sum occurring among all the possible combinations. For each sum from 2 to 12 (since that's the range of possible sums), count the number of times that sum appears in the distribution matrix.
Divide the count by the total number of combinations to get the probability of that sum.
Example: If the sum 7 appears 6 times in the distribution matrix and there are 36 total combinations, the probability of getting a sum of 7 would be 6/36 = 1/6.





Part B:
The problem statement:
The conditions on the construction of the new dices are:
•	Die A cannot have more than 4 Spots on a face. 
•	Die A may have multiple faces with the same number of spots. 
•	Die B can have as many spots on a face as necessary i.e. even more than 6. 
But in order to play your game, the probability of obtaining the Sums must remain the same. So if you could only roll P(Sum = 2) = 1/X, the new dice must have the spots reattached such that those probabilities are not changed.
My understanding of the problem statements and how the code has been generated by my logic:
Transform Function (undoom_dice):
The transform function is designed to modify the dice according to specific constraints.
For Die A, the constraint is that no face should have more than 4 spots. This is achieved by adjusting the spots on each face if necessary.
For Die B, there are no specific constraints mentioned, but the function should ensure that the probabilities of obtaining the sums remain unchanged after transformation.

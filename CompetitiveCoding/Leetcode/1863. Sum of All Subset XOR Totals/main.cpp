#include <iostream>
#include "solution.cpp"


using namespace std; 


int main(){

	cout << "Hey" << endl;

	Solution mySol;

	vector<int> values = {5, 1, 6}; // Create a vector
    int result = mySol.subsetXORSum(values); // Pass the vector to the function
    // Do something with result, like printing it

	cout<<result<<endl;

	return 0;
}
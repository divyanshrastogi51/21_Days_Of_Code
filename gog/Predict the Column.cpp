// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

int M[100][100];

// Function prototype
int columnWithMaxZeros(int);


 // } Driver Code Ends

//User function Template for C++

/*Function to count zeros in each column
* N : Number of rows and columns in array
M is the matrix that is globally declared
*/
int columnWithMaxZeros(int N){

    // Your code here
    int a[N]={0};
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(M[i][j]==0)
                a[j]++;
     return max_element(a, a + N) - a;


}

// { Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {

	int testcase;

	cin >> testcase;

	while(testcase--){
	    int N;
	    cin >> N;

	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            cin >> M[i][j];
	        }
	    }

	    cout << columnWithMaxZeros(N) << endl;
	}

	return 0;
}  // } Driver Code Ends

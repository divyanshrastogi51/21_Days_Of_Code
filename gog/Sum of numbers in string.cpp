// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


// Function to calculate sum of all numbers present
// in a string containing alphanumeric characters
int findSum(string str)
{

	// Your code here
	// A temporary string
    string temp = "";

    // holds sum of all numbers present in the string
    int sum = 0;

    // read each character in input string
    for (char ch: str)
    {
        // if current character is a digit
        if (isdigit(ch))
            temp += ch;

        // if current character is an alphabet
        else
        {
            // increment sum by number found earlier
            // (if any)
            sum += atoi(temp.c_str());

            // reset temporary string to empty
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());

// he atoi() function takes a character array or string literal as an argument and returns its value

}

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    cout << findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends

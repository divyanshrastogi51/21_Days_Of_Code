// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

char *encode(char *src);

int main() {

	int T;
	cin>>T;
	while(T--)
	{
		char str[10000];
		cin>>str;

		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

char *encode(char *src)
{
  //Your code here

    int rLen;
    char count[50];
    int len = strlen(src);

    /* If all characters in the source string are different,
    then size of destination string would be twice of input string.
    For example if the src is "abcd", then dest would be "a1b1c1d1"
    For other inputs, size would be less than twice.  */
    char* dest = new char[len * 2 + 1];

    int i, j = 0, k;

    /* traverse the input string one by one */
    for (i = 0; i < len; i++) {

        /* Copy the first occurrence of the new character */
        dest[j++] = src[i];

        /* Count the number of occurrences of the new character */
        rLen = 1;
        while (i + 1 < len && src[i] == src[i + 1]) {
            rLen++;
            i++;
        }

        /* Store rLen in a character array count[] */
        sprintf(count, "%d", rLen);

        /* Copy the count[] to destination */
        for (k = 0; *(count + k); k++, j++) {
            dest[j] = count[k];
        }
    }

    /*terminate the destination string */
    dest[j] = '\0';
    return dest;
}


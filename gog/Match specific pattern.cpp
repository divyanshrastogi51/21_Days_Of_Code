// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];

		string tt;
		cin>>tt;

		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;

	}
}// } Driver Code Ends

string encodeString(string str)
{
    unordered_map<char, int> map;
    string res = "";
    int i = 0;

    for (char ch : str)
    {
        if (map.find(ch) == map.end())
            map[ch] = i++;

        res += to_string(map[ch]);
    }

    return res;
}


vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    int len = pattern.length();

    string hash = encodeString(pattern);

 	vector<string> res;

    for(int i=0;i<dict.size();i++)
    {
       if (dict[i].length() == len && encodeString(dict[i]) == hash)
            res.push_back(dict[i]);
    }

    return res;
}

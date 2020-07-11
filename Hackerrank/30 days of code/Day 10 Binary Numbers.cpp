#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int sum = 0;
    int m = 0;

    while (n > 0) {
        if (n % 2 == 1) {

            sum++;

            if (sum > m) m = sum;

        } else sum = 0;

        n = n / 2;
    }

    cout << m;

    return 0;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int t; cin >>t;
    while (t--)
    {
        //we already have n left shoes so we need n more to complete 
        int n,m;
        cin >> n >> m;
        //and after i have enough shoes to pair n 
        if(m >= n)
        {
            cout << n << endl;
        }
        else if(n > m)
        {
        int x = n;
        int remaining = n - m;
        cout << remaining + x << endl;
        }
    }
}
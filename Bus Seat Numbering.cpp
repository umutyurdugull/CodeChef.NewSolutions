#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	

    int t; cin >> t;
    while(t--)
    {
        string result = "";
        int n; cin >> n;
        if(n <=10){
            result = "Lower Double";
        }
        else if(10 < n && n <=15)
        {
            result = "Lower Single";
        }
        else if(15 < n && n<= 25){
            result = "Upper Double";
        }
        else {
            result = "Upper Single";
        }
        cout << result << endl;
    }
    return 0;
}



/*
Output Format
    Lower Single
    Lower Double
    Upper Single
    Upper Double


*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--)
    {

        //longest = final throw
        int a,b,c;
        cin >> a >> b >> c;
        int result = max(a, max(b, c));
        cout << result << endl;
            

    }
    return 0;
}

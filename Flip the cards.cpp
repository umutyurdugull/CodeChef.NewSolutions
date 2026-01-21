#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {

    
int t;
cin >> t;
while (t--)
{
 
    int n , x;
    cin >> n>>x;
    //x face up, remaining ones are face down.

    cout << min(x,n-x) << endl;
    
}

}
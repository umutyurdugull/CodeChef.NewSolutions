#include<iostream>
using namespace std;

int main() {

        
    int k;
    cin >> k;
    while(k--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(max(a,c) <= b)
        {
            cout << "Yes " << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    
}

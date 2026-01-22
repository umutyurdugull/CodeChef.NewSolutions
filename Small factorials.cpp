#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int multiply(int x, vector<int>& res, int res_size) {
    int carry = 0;
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        res.push_back(carry % 10);
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

void factorial(int n) {
    vector<int> res;
    res.push_back(1);
    int res_size = 1;

    for (int i = 2; i <= n; i++) {
        res_size = multiply(i, res, res_size);
    }

    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}

int main() {
 
           // int result = 1;

        // int n; cin >> n;
        // for (int i = 1; i <=n; i++)
        // {
        //     result = result * i ;
        // }


        // cout << result << endl;
        //We can solve it like that very easly, but there's some special test cases. 
        //Our code will work with smaller numbers but fail for larger N's.
 
 
 
 
 
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        factorial(n);
    }
    return 0;
}
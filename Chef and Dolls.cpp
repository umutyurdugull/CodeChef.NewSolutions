#include <iostream>
using namespace std;

int main() {
	

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; 
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        int answer = 0;
        int type;
        for(int i = 0;i <N;i++)
        {
            cin >> type;
            answer = answer ^type;
        }
        cout << answer << endl;
    }
    return  0;
}

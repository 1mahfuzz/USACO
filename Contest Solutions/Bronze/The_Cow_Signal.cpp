/**
 *  author: mahfuzz
 *  created: 12.12.2020
**/
 
#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;

    string grid[m][n];

    for(int i = 0; i < m; i++){
        string s = "";
        for(int j = 0; j < n; j++){
            char c; cin >> c;
            s += c;

            for(int x = 0; x < k - 1; x++)
                s += c;
        }

        for(int x = 0; x < k; x++)
            cout << s << "\n";
    }    
    return 0;
    
}

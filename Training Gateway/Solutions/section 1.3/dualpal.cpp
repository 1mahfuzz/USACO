/*
ID: likhon.1
PROG: dualpal
LANG: C++
*/

#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    freopen("dualpal.in", "r", stdin);
    freopen("dualpal.out", "w", stdout);
    
    int n, s; cin >> n >> s;

    int k = 0;
    while(k != n){
        int cnt = 0;
        for(int i = 2; i <= 10 && cnt < 2; i++){
            string x = "", y = "";
            int temp = s + 1;

            while(temp != 0){
                x += (temp % i + '0');
                temp /= i;
            }

            y = x;
            reverse(y.begin(), y.end());

            if(x == y)
                cnt++;
            
        }

        ++s;
        if(cnt > 1){
            cout << s << "\n";
            ++k;
        }
    }

    
    return 0;
}

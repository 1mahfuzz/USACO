/**
 *  author: mahfuzz
 *  created: 22.09.2020
**/
 
#include <iostream>
using namespace std;
typedef long long ll;

int arr[4][2];
int cnt[4];

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    
    for(int i = 0; i < 4; i++)
        cin >> arr[i][0] >> arr[i][1];
    
    for(int i = 3; i >= 0; i--){
        int x = abs(arr[i][0] - arr[i][1]);
        cnt[i] = x;
        arr[i - 1][1] += x;
    }
    
    cout << cnt[1] << "\n" 
        << cnt[2] << "\n"
        << cnt[3] << "\n";
        
    return 0;
}

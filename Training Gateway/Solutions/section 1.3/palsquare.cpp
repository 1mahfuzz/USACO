/*
ID: likhon.1
PROG: palsquare
LANG: C++
*/

#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    freopen("palsquare.in", "r", stdin);
    freopen("palsquare.out", "w", stdout);

    string base[] = {"0", "1", "2", "3", "4", "5", "6",
                    "7", "8", "9", "A", "B", "C", "D",
                    "E", "F", "G", "H", "I", "J", "K"};
    
    int b; cin >> b;    
    for(int i = 1; i <= 300; i++){
        int temp = i * i;
        string x = "", y = "";

        while(temp != 0){
            x += base[temp % b];
            temp /= b;
        }


        y = x;
        reverse(y.begin(), y.end());
        if(x == y){
            string z = "";
            temp = i;
            while(temp != 0){
                z += base[temp % b];
                temp /= b;
            }
            reverse(z.begin(), z.end());
            cout << z << " " << x << "\n";
        }
    }
    
    
    return 0;
}

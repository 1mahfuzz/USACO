/**
 *  author: mahfuzz
 *  created: 15.10.2020
**/
 
#include <iostream>
using namespace std;
typedef long long ll;

void pour(int& c1, int& m1, int& c2, int& m2){
	int amount = min(m1, c2 - m2);
	m1 -= amount;
	m2 += amount;
}

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int c1, c2, c3;
    int m1, m2, m3;

    cin >> c1 >> m1;
    cin >> c2 >> m2;
    cin >> c3 >> m3;

    for(int i = 0; i < 33; i++){
    	pour(c1, m1, c2, m2);
    	pour(c2, m2, c3, m3);
    	pour(c3, m3, c1, m1);
    }

    pour(c1, m1, c2, m2);
    cout << m1 << "\n" << m2 << "\n" << m3 << "\n";
    
        
    return 0;
}

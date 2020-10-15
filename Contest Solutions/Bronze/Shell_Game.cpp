/**
 *  author: mahfuzz
 *  created: 13.10.2020
**/
 
#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    
   	vector<tuple<int, int, int> > vec;

   	int n; cin >> n;
   	for(int i = 0; i < n; i++){
   		int a, b, c;
   		cin >> a >> b >> c;
   		vec.push_back(make_tuple(a, b, c));
   	}

   	int mx = 0;
   	for(int i = 0; i < 3; i++){
   		int arr[3] = {0};
   		arr[i] = 1;

   		int cnt = 0;
   		for(int j = 0; j < n; j++){
   			auto x = vec[j];
   			int a = get<0>(x);
   			int b = get<1>(x);
   			int c = get<2>(x);

   			swap(arr[a - 1], arr[b - 1]);
   			if(arr[c - 1])
   				cnt++;

   		}
   		mx = max(cnt, mx);
   	}

   	cout << mx << "\n";


	return 0;
}

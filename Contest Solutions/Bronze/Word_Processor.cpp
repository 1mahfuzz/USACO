/**
 *  author: mahfuzz
 *  created: 08.10.2020
**/
 
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;

int cnt_word(string word){
	int cnt;
	for(cnt = 0; word[cnt]; cnt++){
		
	}
	
	return cnt;	
}

map<string, int> mp;

int main(int argc, char* argv[]){
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    
    int n, k; cin >> n >> k;
    
    vector<string> vec;
    string word;
    
    for(int i = 0; i < n; i++){
    	cin >> word;
    	vec.push_back(word);
    	mp[word] = cnt_word(word);    	
    }
    
    int cnt = 0, temp = 0;
    while(cnt < n){
    	if(temp + mp[vec[cnt]] <= k){
    		if(temp != 0)
    			cout << " " << vec[cnt];
    		else
    			cout << vec[cnt];
    			
    		temp += mp[vec[cnt]];
    		++cnt;
    	}else{
    		cout << "\n";
    		temp = 0;
    	}
    	
    }
    
    
    
    
    
        
    return 0;
}

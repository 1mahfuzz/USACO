#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	
	int c = a;
	a = min(a, b);
	b = max(b, c);
	c = x;
	x = min(x, y);
	y = max(c, y);
	
	cout << min(abs(a-x) + abs(b-y), abs(b - a)) << "\n";
	
	
	return 0;
}

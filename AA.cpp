#include <cstdio>
#include <iostream>
using namespace std;/*

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m, a, b, d;
		cin >> m >> a >> b >> d;
		long long int count = 0;
		if (b < a) {
			int t = b;
			b = a;
			a = t;
		}
		if ((b - a) % d == 0) {
			count = (b - a) / d;
		}
		else {
			if ((b - 1) % d == 0) {
				count = (b - 1) / d;
				if ((a - 1) % d == 0)
					count += ((a - 1) / d);
				else
					count += ((a - 1) / d + 1);
				
			}
			if ((m - b) % d == 0) {
				long long int count1=0;
				count1 = (m - b) / d;
				if ((m-a) % d == 0)
					count1 += ((m-a) / d);
				else
					count1+= ((m - a) / d + 1);
				if (count1 < count)
					count = count1;
			}
		}
		if(count)
			cout << count << endl;
		else
			cout << -1 << endl;
	}
}*/
#include <bits/stdc++.h>
using namespace std;/*
#define mod 998244353

long long QuickMI(long long a, long long b) {
	long long ans=1;
	while (b) {
		if (b & 1)
			ans = ans * a%mod;
		a =a* a%mod;
		b >>= 1;
	}
	return ans;
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		long long  m, n;
		unsigned long long ans;
		cin >> n >> m;
		ans=QuickMI(2, (n - 1)*(m - 1));
		cout << ans << endl;
	}

}*/
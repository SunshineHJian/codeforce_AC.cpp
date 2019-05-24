#include <bits/stdc++.h>
using namespace std;/*

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, m;
		long long sum = 0;
		scanf("%lld%lld", &n, &m);
		int i;
		for (i = 1; (i+1)*(i+1)<n ; i++) {
			sum += (2 * i +1)*i;
		}
		for (i = i*i; i <= n; i++) {
			sum += floor(sqrt(i));
		}
		
		printf("%lld\n", ((1+n)*n/2-sum) % m);
	}

}*/
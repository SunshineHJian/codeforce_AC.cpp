#include <bits/stdc++.h>
using namespace std;/*
long long int gcd_iter(long long int m, long long int n) {
	long long temp;
	if (m < n) {         //m保存较大值，n保存较小值，不满足则交换二者的值
		temp = m; m = n; n = temp;
	}
	if (m%n == 0) {  //如果余数为0则意味着n为m,n的最大公约数
		return n;
	}
	else {           //否则需要使用较小的数n和两数的相除余数m%n继续求解
		return gcd_iter(n, m%n);
	}
}
int main() {
	long long  a, b;
	long long x;
	while (~scanf("%lld", &a)) {
		scanf("%lld%lld", &b, &x);
		long long int k = b * b +(a*a) ;
		x = a * a*x;
		long long int mod;
		if (k !=x) {
			mod = gcd_iter(k, x);
			printf("%lld %lld\n", x/mod, k/mod);
		}	
		else {
			printf("1 1\n");
		}	
	}
	
}*/
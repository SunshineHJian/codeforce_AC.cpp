#include <bits/stdc++.h>
using namespace std;/*
long long int gcd_iter(long long int m, long long int n) {
	long long temp;
	if (m < n) {         //m����ϴ�ֵ��n�����Сֵ���������򽻻����ߵ�ֵ
		temp = m; m = n; n = temp;
	}
	if (m%n == 0) {  //�������Ϊ0����ζ��nΪm,n�����Լ��
		return n;
	}
	else {           //������Ҫʹ�ý�С����n���������������m%n�������
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
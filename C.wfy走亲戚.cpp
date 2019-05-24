#include <bits/stdc++.h>/*
using namespace std;

int main() {
	int n, m, d;
	while (~scanf("%d%d%d", &n, &m, &d)) {
		while (m != 0&&d!=0) {
			int mod = m % (d + 1);
			int k = m / (d + 1);
			if (mod > 0)
				k++;
			m -= k;
			d--;
		}
		if (m == 0)
			printf("YeS\n");
		else
			printf("nO\n");
	}

}*/
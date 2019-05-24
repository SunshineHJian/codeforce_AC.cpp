#include <cstdio>
#include<iostream>
#include <cmath>
#include <algorithm>/*
int main() {
	int n;
	while (~scanf("%d", &n) && n) {
		long long int count = 0,salary;
		for (int i = 0; i < n; i++) {
			std::cin >> salary;
			if (salary >= 100) {
				count += (salary / 100);
				salary %= 100;
			}
			if (salary >= 50) {
				count += (salary / 50);
				salary %= 50;
			}
			if (salary >= 10) {
				count += (salary / 10);
				salary %= 10;
			}
			if (salary >= 5) {
				count += (salary / 5);
				salary %= 5;
			}
			if (salary >= 2) {
				count += (salary / 2);
				salary %= 2;
			}
			if (salary >= 1) {
				count += salary ;
			}
		}
		std::cout << count << std::endl;
	}
}*/
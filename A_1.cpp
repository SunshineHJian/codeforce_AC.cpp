#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
#include<cmath>
using namespace std;
/*
int main() {
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int m, n;
		cin >> m >> n;
		long long sum = m * n;
		long long sum2 = sum / 2;
		long long sum1 = sum-sum2;
		long long int x1, y1, x2, y2;
		long long int x11, y11, x22, y22;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> x11 >> y11 >> x22 >> y22;
		long long x = x2 - x1 + 1, y = y2 - y1 + 1;
		long long j = x * y;
		long long xx = x22 - x11 + 1, yy = y22 - y11 + 1;
		long long jj = x * y;
		
		if ((x11 >= x1 && y11 >= y1) && (x22 <= x2 && y22 <= y2)) {
			if (j % 2 == 0) {
				sum1 += (j / 2);
				sum2 -= (j / 2);
			}
				
			else {
				if ((x1 + y1) % 2 == 0) {
					sum1 += (j / 2);
					sum2 -= (j / 2);
				}

				else {
					sum1 += (j / 2 + 1);
					sum2 -= (j / 2 + 1);
				}
			}
			sum2 += jj;
			sum1 -= jj;
			cout << sum1 << " " << sum2 << endl;
			continue;
		}
		else if ((x11 < x1 && y11 < y1) && (x22 > x2 && y22 > y2)) {
			if (jj % 2 == 0) {
				sum2 += (jj / 2);
				sum1 -= (jj / 2);
			}
				
			else {
				if ((x11 + y11) % 2 == 1) {
					sum2 += (jj / 2);
					sum1 -= (jj / 2);
				}
				else {
					sum2 += (j / 2 + 1);
					sum1 -= (j / 2 + 1);
				}
			}
			sum1 += j;
			sum2 -= j;
			cout << sum1 << " " << sum2 << endl;
			continue;
		}
		else if ((x2 <= x11 || x22 <= x1) || (y2 <= y11 || y22 <= y1)) {
			if (j % 2 == 0) {
				sum1 += (j / 2);
				sum2 -= (j / 2);
			}
			else {
				if ((x1 + y1) % 2 == 0) {
					sum1 += (j / 2);
					sum2 -= (j / 2);
				}

				else {
					sum1 += (j / 2 + 1);
					sum2 -= (j / 2 + 1);
				}
			}
			if (jj % 2 == 0) {
				sum2 += (jj / 2);
				sum1 -= (jj / 2);
			}
				
			else {
				if ((x11 + y11) % 2 == 1) {
					sum2 += (jj / 2);
					sum1 -= (jj / 2);
				}
				else {
					sum2 += (j / 2 + 1);
					sum1 -= (j / 2 + 1);
				}
			}
			cout << sum1 << " " << sum2 << endl;
			continue;
		}
		else if ((x1 <= x11 && y1 <= y11) && (x2 <= x22 && y2 <= y22)&&(x2>=x11&&y2>=y11)) {
			if (j % 2 == 0) {
				sum1 += (j / 2);
				sum2 -= (j / 2);
			}
				
			else {
				if ((x1 + y1) % 2 == 0) {
					sum1 += (j / 2);
					sum2 -= (j / 2);
				}

				else {
					sum1 += (j / 2 + 1);
					sum2 -= (j / 2 + 1);
				}
			}
			if (jj % 2 == 0) {
				sum2 += (jj / 2);
				sum1 -= (jj / 2);
			}
				
			else {
				if ((x11 + y11) % 2 == 1) {
					sum2 += (jj / 2);
					sum1 -= (jj / 2);
				}
				else {
					sum2 += (j / 2 + 1);
					sum1 -= (j / 2 + 1);
				}
			}
			long long int jjj = (x2 - x11 + 1)*(y2 - y11 + 1);
			if (jjj % 2 == 0) {
				sum1 -= (jjj / 2);
				sum2 += (jjj / 2);
			}
				
			else {
				if ((x11 + y11) % 2 == 0) {
					sum1 -= (jjj / 2);
					sum2 += (jjj / 2);
				}

				else {
					sum1 -= (jjj / 2 + 1);
					sum2 += (jjj / 2 + 1);
				}
			}
			cout << sum1 << " " << sum2 << endl;
			continue;
		}
		else {
		if (j % 2 == 0) {
			sum1 += (j / 2);
			sum2 -= (j / 2);
		}
			
		else {
			if ((x1 + y1) % 2 == 0) {
				sum1 += (j / 2);
				sum2 -= (j / 2);
			}

			else {
				sum1 += (j / 2 + 1);
				sum2 -= (j / 2 + 1);
			}
		}
		if (jj % 2 == 0) {
			sum2 += (jj / 2);
			sum1 -= (jj / 2);
		}
			
		else {
			if ((x11 + y11) % 2 == 1) {
				sum2 += (jj / 2);
				sum1 -= (jj / 2);
			}
			else {
				sum2 += (j / 2 + 1);
				sum1 -= (j / 2 + 1);
			}
		}
		long long int jjj = (x22 - x1 + 1)*(y22 - y1 + 1);
		if (jjj % 2 == 0) {
			sum1 -= (jjj / 2);
			sum2 += (jjj / 2);
		}
			
		else {
			if ((x1 + y1) % 2 == 0) {
				sum1 -= (jjj / 2);
				sum2 += (jjj / 2);
			}

			else {
				sum1 -= (jjj / 2 + 1);
				sum2 += (jjj / 2 + 1);
			}
		}
		cout << sum1 << " " << sum2 << endl;
		continue;
		}
	}
	return 0;
}*/
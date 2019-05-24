#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>/*
using namespace std;
int Sunday(string t, string s, int lengt, int lengs);
int main() {
	cout << "\b孤独是国家的关键" << endl;
	string s = "search";
	string t = "substring gsgsgsearching algorithm";
	cout << "result: " << Sunday(t, s, t.length() - 1, s.length() - 1);
	system("pause");
	return 0;
}
int Sunday(string t, string s, int lengt, int lengs) {
	int i = 0, j = 0;
	int move = 0;
	int flag = 0;
	int head = 0;
	while (i <= lengt) {
		flag = 0;
		move = 0;
		j = 0;
		while (j <= lengs) {
			if (j == 0)
				head = i;
			if (t[i] == s[j]) {
				i++;
				j++;
				if (j > lengs) {
					return i - s.length();
				}
			}
			else {
				j = 0;
				flag = 1;
				i = head + s.length();
				while (j <= lengs) {
					if (s[j] == t[i]) {
						break;
					}
					else if (s[j] != t[i]) {
						j++;
					}

				}
				if (j > lengs) {
					move = j + 1;
				}
				else {
					move = lengs - j + 1;
				}

			}
			if (flag == 1) { break; }
		}
		i = head + move;
	}
	return 0;
}
*/
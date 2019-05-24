#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <set>
#include <stack>
#include <queue>
using namespace std;
/*
struct vertex {
	int parent;
	int value;
	int len_toRoot;
	vector <int> child;
};
vertex ver[200010];
set <int> s[200010];
queue <int> que;
int main() {
	int n;
	printf("%d",sizeof(ver));
	while (~scanf("%d", &n)) {
		vertex root;
		int root_index;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &ver[i].value);
			ver[i].parent = 0;
			ver[i].len_toRoot = 1;
		}
		for (int i = 1; i <= n; i++) {
			int a, b;
			scanf("%d%d", &a,&b);
			ver[b].parent = a;
			ver[a].child.push_back(b);
			
		}
		for (int i = 1; i <= n; i++) {
			if (ver[i].parent == 0) {
				root = ver[i], root_index = i;
				break;
			}		
		}
		int count = 0;
		for (int i = 1; i <= n; i++) {
			if (ver[i].parent == root_index) {
				count++;
			}
		}
		int flag = count-1;
		while (flag>=0) {			
			s[flag].insert(root.child[flag]);
			flag--;
		}
		flag = count - 1;
		while (!root.child.empty()) {
			int m = root.child[flag];
			root.child.pop_back();
			que.push(m);
			while (!que.empty()) {
				int k = que.front();
				que.pop();
				while (!ver[k].child.empty()) {
					s[flag].insert(ver[k].child.back());
					que.push(ver[m].child.back());
					ver[k].child.pop_back();
				}	
			}
			flag--;
		}
		long long int maximum = 0;
		int load;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < count; j++) {
				if (s[j].count(i)) {
					load = j;
					break;
				}
			}

		}
	}
}
*/
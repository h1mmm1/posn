// LANG : C++
#include <bits/stdc++.h>
using namespace std;

vector<int> s;
bool visited[15];
bool vis_p[100];
bool vis_n[100];
int cnt;

void res(int k, int n) {
	if (k == n) {
		cnt++;
		return;
	}
	for (int j = 1; j <= n; j++) {
		if (visited[j] || vis_p[(k+1)+j] || vis_n[(k+1)-j+30]) continue;
		s.push_back(j);
		visited[j] = true;
		vis_p[(k+1)+j] = true;
		vis_n[(k+1)-j+30] = true;
		res(k+1,n);
		s.pop_back();
		visited[j] = false;
		vis_p[(k+1)+j] = false;
		vis_n[(k+1)-j+30] = false;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	res(0, n);
	cout << cnt;
}

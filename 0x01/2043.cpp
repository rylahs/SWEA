// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2043. 서랍의 비밀번호 
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QJ_8KAx8DFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int p, k;
	cin >> p >> k;
	int cnt = 1;
	while (p != k)
	{
		if (p == k)
		{
			break;
		}
		k++;
		cnt++;	
		if (k == 1000)
			k = 0;
	}
	cout << cnt << "\n";
	return 0;
}

// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2068. 최대수 구하기
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QQhbqA4QDFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int maxV = -1;
		for (int i = 0; i < 10; i++)
		{
			int a;
			cin >> a;
			maxV = max(maxV, a);
		}

		cout << "#" << t << " " << maxV << "\n";
	}

	return 0;
}
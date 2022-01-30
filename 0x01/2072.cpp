// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2072. 홀수만 더하기
// https://swexpertacademy.com/main/code/problem/problemDetail.docontestProbId=AV5QSEhaA5sDFAUq

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
		int result = 0;
		for (int i = 0; i < 10; i++)
		{
			int a;
			cin >> a;
			if (a % 2 == 1)
				result += a;
		}
		cout << "#" << t << " " << result << "\n";
	}

	return 0;
}
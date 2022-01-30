// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2070. Å« ³ð, ÀÛÀº ³ð, °°Àº ³ð
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QQ6qqA40DFAUq

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
		int a, b;
		cin >> a >> b;

		string result;
		if (a > b)
			result = '>';
		else if (a == b)
			result = '=';
		else
			result = '<';
		cout << "#" << t << " " << result << "\n";
	}

	return 0;
}
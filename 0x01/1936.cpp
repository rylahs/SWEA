// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 1936. 1��1 ����������
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PjKXKALcDFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// ���� : 1 , ���� : 2, �� : 3
	int a, b;
	cin >> a >> b;
	if (abs(a - b) == 2)
	{
		if (min(a, b) == a)
			cout << "A";
		else
			cout << "B";
	}
	else
	{
		if (min(a, b) == a)
			cout << "B";
		else
			cout << "A";
	}
	return 0;
}
// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2027. 대각선 출력하기
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QFuZ6As0DFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j)
				cout << "#";
			else
				cout << "+";
		}
		cout << "\n";
	}
	

	return 0;
}
// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2029. 몫과 나머지 출력하기
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QGNvKAtEDFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;
	for (int i = 1; i <= testCase; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << "#" << i << " " << a / b << " " << a % b << "\n";
	}
	
	return 0;
}
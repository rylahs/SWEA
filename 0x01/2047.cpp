// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2047. 신문 헤드라인
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QKsLaAy0DFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	for (int i = 0; i < (int)str.size(); i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		
	

	for (auto& e : str)
		cout << e;

	return 0;
}
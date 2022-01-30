// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2050. 알파벳을 숫자로 변환
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QLGxKAzQDFAUq

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	for (int i = 0; i < (int)str.size(); i++)
		cout << str[i] - 'A' + 1 << " ";

	
	return 0;
}
// 0x01. Difficulty Level 1
// Written by : Rylah
// Date : 2022.01.31
// 2056. 연월일 달력
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QLkdKAz4DFAUq

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
		string str;
		cin >> str;
		string year = str.substr(0, 4);
		string month = str.substr(4, 2);
		string date = str.substr(6, 2);

		if (stoi(month) >= 13 || stoi(month) <= 0) 
		{
			cout << "#" << t << " ";
			cout << -1 << "\n";
			continue;
		}
		
		else if ((stoi(month) == 1 && stoi(date) > 31)
			|| stoi(month) == 3 && stoi(date) > 31
			|| stoi(month) == 5 && stoi(date) > 31
			|| stoi(month) == 7 && stoi(date) > 31
			|| stoi(month) == 8 && stoi(date) > 31
			|| stoi(month) == 10 && stoi(date) > 31
			|| stoi(month) == 12 && stoi(date) > 31)
		{
			cout << "#" << t << " ";
			cout << -1 << "\n";
			continue;
		}
		else if (stoi(month) == 2 && stoi(date) > 28)
		{
			cout << "#" << t << " ";
			cout << -1 << "\n";
			continue;
		}

		else if ((stoi(month) == 4 && stoi(date) > 30)
			|| stoi(month) == 6 && stoi(date) > 30
			|| stoi(month) == 9 && stoi(date) > 30
			|| stoi(month) == 11 && stoi(date) > 30)
		{
			cout << -1 << "\n";
			continue;
		}
		else {
			cout << "#" << t << " ";
			cout << year << "/" << month << "/" << date;
			cout << "\n";
		}

		
	}

	return 0;
}
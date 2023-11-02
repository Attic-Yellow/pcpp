// day4 백준 공 바꾸기 문제 풀이
// 23.05.16
// 틀렸다고는 하는데 왜 틀렸다고 하는지는 모르겠음

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> basket;
	int ball = 0;
	int change = 0;
	int ball_Change1 = 0;
	int ball_Change2 = 0;
	int count = 0;
	
	cin >> ball >> change;
	
	for(int i = 1; i <= ball; i++)
	{
		basket.push_back(i);
	}

	while(1)
	{
		cin >> ball_Change1 >> ball_Change2;
		
		
		swap(basket[ball_Change1 - 1], basket[ball_Change2 - 1]);
		count++;
		if(count == change)
		{
			break;
		}
	}

	for(int i = 0; i < ball; i++)
	{
		cout << basket[i] << ' ';
	}

	return 0;
}

// day4 백준 공 바꾸기 문제 풀이 배열 버전
// 23.05.16
// 이걸로 먼저 정답 처리 맞음 이유 알았을때 매우 화남

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int basket[100] = { 0 };
	int ball = 0;
	int change = 0;
	int ball_Change1 = 0;
	int ball_Change2 = 0;
	int count = 0;
	
	cin >> ball >> change;
	
	
	
	for(int i = 0; i < ball; i++)
	{
		basket[i] = i+1;
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

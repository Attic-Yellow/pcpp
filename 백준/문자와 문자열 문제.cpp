//백준 문제 풀이 27866번 문자와 문자열
//2023.05.12 
//사용 언어 c++
 
#include <iostream>
#include <string>
#include <vector>

using namespace std;
 
int main()
{
	string str;
	int num = 0;
	
	cin >> str >> num;	
	cout << str[num - 1];
	return 0;
}

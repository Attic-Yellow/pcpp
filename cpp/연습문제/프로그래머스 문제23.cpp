// day6 프로그래머스 직각삼각형 출력하기 문제 풀이
// 23.05.18
// 이중for문을 이용함

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

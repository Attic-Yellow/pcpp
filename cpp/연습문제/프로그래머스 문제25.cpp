// day6 프로그래머스 문자 반복 출력하기 문제 풀이
// 23. 05.18
// 이중for문 이용하여 문제 해결

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int n) {
    
    string answer(n * my_string.size(), ' '); // 문자열의 크기를 n * my_string.size()으로 설정하고 공백으로 초기화

    for(int i = 0; i < my_string.size(); i++)
    {
        for(int j = 0; j < n; j++)
        {
            answer[i * n + j] = my_string[i]; // 1차원 인덱스를 사용하여 값에 접근
        }
    }
    return answer;
}

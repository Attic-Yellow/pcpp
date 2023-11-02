//day3 짝수는 싫어요 프로그래머스 문제 풀이
//23.05.14

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            answer.push_back(i);
        }
        
    }
    sort(answer.begin(), answer.end());
    return answer;
}

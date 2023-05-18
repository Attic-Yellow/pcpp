// day6 프로그래머스 짝수 홀수 개수 문제 풀이
// 23.05.18
//vector의 size와 push_back을 사용하여 문제를 해결함

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int a_count = 0;
    int b_count = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        if(num_list[i]%2 == 0)
        {
            a_count++;
        }
        else
        {
            b_count++;
        }
    }
    answer.push_back(a_count);
    answer.push_back(b_count);
    
    return answer;
}

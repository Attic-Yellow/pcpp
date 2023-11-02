//day2 배열 두 배 만들기 프로그래머스 문제 푸링
//23.05.13

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i=0; i<numbers.size(); i++)
    {
        answer.push_back(numbers[i]*2);
    }
            
    return answer;
}

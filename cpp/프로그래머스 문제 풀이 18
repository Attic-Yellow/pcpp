// day5 아이스 아메리카노 프로그래머스 문제 풀이
// 23.05.16
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int count = 0;
    while(1)
    {

        money -= 5500;
        count++;

        if(money == 0)
        {        
            answer.push_back(count);
            answer.push_back(money);
            break;
        }
        else if (money < 0)
        {        
            money += 5500;
            count--;
            answer.push_back(count);
            answer.push_back(money);
            break;
        }
    }
    return answer;
}

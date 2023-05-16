//day5 옷가게 할인 받기 프로그래머스 문제 풀이
//23.05.16

#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    if(price >= 500000)
    {
        return (int)(price * 0.8);
    }
    else if(price >= 300000 && price < 500000)
    {
        return (int)(price * 0.9);
    }
    else if(price >= 100000)
    {
        return (int)(price * 0.95);
    }
    else
    {
        return price;
    }
    return answer;
}

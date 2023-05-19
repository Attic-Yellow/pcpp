// day7 백준 10988번 팰린드롬인지 확인하기 문제 풀이
// 23.05.8
// reverse를 이용한 문제 풀이

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cin >> word;  // 단어 입력받기

    string reversed_word = word;  
    reverse(reversed_word.begin(), reversed_word.end());  // 단어 뒤집기

    if(word == reversed_word) {  // 원래 단어와 뒤집은 단어가 같으면
        cout << 1;  // 1 출력
    } else {
        cout << 0;  // 다르면 0 출력
    }
    
    return 0;
}

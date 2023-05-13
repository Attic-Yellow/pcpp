//day2 분수의 덧셈 프로그래머스 문제풀이
//23.05.13

#include <string>
#include <vector>

using namespace std;

//유클리드 호제법과 반복문을 이용한 최대공약수 구하기
int gcd(int a, int b) 
{ 
	int mod = a % b;
    
	while (mod > 0)
	{
		a = b;
		b = mod;
		mod = a % b;
	}
	
    return b;
}

vector<int> solution(int num1, int nom1, int num2, int nom2) {
    vector<int> answer;
    
    // 최소공배수 계산
    int nom = gcd(nom1, nom2);
    // 분자 계산
    int num = (num1 * nom2 + num2 * nom1)/nom;
    // 분모 계산
    nom = ((nom1 * nom2)/nom);
    
    // 최대공약수 계산
    int max_num = gcd(nom, num);
    
    // 기약분수 만들기
    nom /=max_num;
    num /=max_num;
        

    if(nom != num)
    {
      answer.push_back(num);
      answer.push_back(nom);  
    }
    else
    {
        answer.push_back(1);
        answer.push_back(1); 
    }
    return answer;
}

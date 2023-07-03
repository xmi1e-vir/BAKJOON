// 사과
// 각 학교의 학생 수와 사과 개수가 주어졌을 때, 학생들에게 나눠주고 남는 사과의 총 개수를 구하는 프로그램을 작성하시오.
// 배정된 사과를 모든 학생들에게 똑같이 나눠주되, 남는 사과의 개수를 최소로 하려고 한다. (서로 다른 학교에 속한 학생이 받는 사과 개수는 다를 수 있다.)
// 입력 - 첫 번째 줄에는 학교의 수를 나타내는 정수 N(1 ≤ N ≤ 100)이 주어진다.다음 N 개의 줄에 
// 각 학교의 학생 수와 배정된 사과 개수를 나타내는 두 개의 정수가 주어진다.학생 수와 사과 개수는 모두 1이상 100이하이다.
// 출력 - 남은 사과의 총 개수를 나타내는 정수를 출력한다.

#include <iostream>
using namespace std;

int main() {
	int num, aNUM, sNUM, rest = 0;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> aNUM >> sNUM;
		rest += sNUM % aNUM;
	}

	cout << rest;
}
// 2016년
#include <string>

using namespace std;

int month[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string day[7] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE" ,"WED" };

string solution(int a, int b) {
	int sum = 0;

	for (int i = 0; i < a - 1; i++) {
		sum += month[i];
	}
	sum += b;

	return day[sum % 7];
}
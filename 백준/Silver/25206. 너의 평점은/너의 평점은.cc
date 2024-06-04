#include <iostream>
#include <string>
#include <map>

using namespace std;

float credit;
float sum;
float sum_credit;
string subject, grade;

map <string, float> m;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	m["A+"] = 4.5;
	m["A0"] = 4.0;
	m["B+"] = 3.5;
	m["B0"] = 3.0;
	m["C+"] = 2.5;
	m["C0"] = 2.0;
	m["D+"] = 1.5;
	m["D0"] = 1.0;
	m["F"] = 0.0;

	while (cin >> subject >> credit >> grade) {
		if (grade != "P") {
			sum += m[grade] * credit;
			sum_credit += credit;
		}
	}

	cout << sum / sum_credit;

	return 0;   
}
#include <iostream>
using namespace std;

bool is_number_lucky(int number);

int main() {
	int number = 1;

	cout << (is_number_lucky(number) ? "yes" : "no");

	return 0;
}
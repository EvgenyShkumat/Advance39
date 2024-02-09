#include <iostream>

bool is_number_lucky(int number) {
	bool lucky = true;
	int number_copy = number;

	while (true) {
		int sum = 0;

		while (number_copy != 0) {
			sum += pow(number_copy % 10, 2);
			number_copy /= 10;
		}

		if (sum == 1) {
			break;
		}
		else if (sum > 1 && sum < 10) {
			lucky = false;
			break;
		}

		number_copy = sum;
	}

	return lucky;
}
//	Ввести цель T (20..100) повторений. Через do-while вводить количество повторений очередного подхода (1..20), 
// пока сумма не станет не меньше T. Недопустимые значения не принимать. Вывести количество подходов, 
// итог повторений и превышение над целью.

#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int sum{};
	int target{};
	int repeat{};
	int i{};

	cout << "Введите цель(20-100):\n";
	cin >> target;

	if (target < 20 || target > 100) return 1;
	do {
		cout << "\nВведите количество повторений(1-20):\n";
		cin >> repeat;

		if (repeat > 20 || repeat < 1) cout << "\nОшибка! Введите количесвто от 1 до 20\n";
		else {

			sum = sum + repeat;

			i++;

			if(target - sum > 0) cout << "\nОсталось повторений:" << target - sum;
		}

	} while (sum < target);

	cout << "Количесвто подходов:" << i << "\nИтог повторений:" << sum << "\nПревышение над целью:" << sum - target;

	return 0;

}

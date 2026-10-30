//Ввести натуральное n (1..1000). С помощью while строить последовательность:
// если текущее число чётное, разделить на 2, иначе заменить на 3·n + 1.
// Остановиться при достижении 1. Напечатать все полученные числа,
// количество сделанных преобразований и максимальное встреченное число. Для промежуточных значений использовать long long.

#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	long long number{};

	cout << "Введите число (1-1000):\n";
	cin >> number;

	cout << "\n";
	if (number < 1 || number > 1000) {
		cout << "Ошибка!";
		return 1;
	}

	long long i{};
	long long maxnumber{};

	cout << "";

	while (number != 1) {

		if (number % 2 == 1) number = 3 * number + 1;
		else number = number / 2;

		cout << number << "; ";

		i++;

		if (maxnumber < number) maxnumber = number;

	}
	
	cout << "\n";

	cout << "\nМакисмальное число:" << maxnumber << "\nКолчество преобразование:" << i;
}

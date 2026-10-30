/*Ввести n (1..20) тренировок. Для каждой в цикле for ввести длительность (1..180 минут) и средний пульс (50..180).
Условные очки нагрузки равны длительности, умноженной на (пульс − 50). Найти общие очки,
среднюю длительность и номер тренировки с наибольшими очками; при равенстве — первый.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	int n;

	cout << "Введите колчество тренировок (1-20):\n";
	cin >> n;

	if (n < 1 || n> 20) {
		cout << "Ошибка!";
		return 1;
	}

	int time{}, pulse{}, maxscore{}, totalscore{}, totaltime{}, maxnumber{};
	

	for (int i = 1; i <= n; i++) {
		cout << i << "-я тренировка\n";

		cout << "Введите время тренировки(1-180):";
		cin >> time;

		cout << "Введите средний пульс(50-180):";
		cin >> pulse;

		cout << "";

		totaltime += time;

		totalscore += time * (pulse - 50);

		if (time < 1 || time > 180 || pulse <= 50 || pulse > 180) {
			cout << "Ошибка!";
			return 1;
		}

		if (maxscore < time * (pulse - 50)) {
			maxscore = time * (pulse - 50);
			maxnumber = i;
		}
	}

	cout << "Средняя длительность тренировки:\n" << totaltime / n << "\nОбщие очки загрузки:\n" << totalscore << "\nСамая продуктивная тренировка:\n" << maxnumber;

	return 0;
}
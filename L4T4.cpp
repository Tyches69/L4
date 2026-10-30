//Ввести n (3..9). Вложенными циклами построить треугольник упражнений:
//в строке i ровно i ячеек, в ячейке j напечатать i + j,
//но если число чётное, заменить его символом X. Подсчитать, сколько X напечатано во всём треугольнике.

#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "");
    int n;

    cout << "Введите n (от 3 до 9): ";
    cin >> n;
    if (n >9 || n < 3) {
        cout << "Ошибка!\n";
            return 1;
        }
       

    int countx = 0; 

    
    for (int i = 1; i <= n; ++i) {
       
        for (int j = 1; j <= i; ++j) {
            int value = i + j;

            
            if (value % 2 == 0) {
                cout << "X ";
                countx++;
            }
            else {
                cout << value << " ";
            }
        }
        cout << "\n"; 
    }

    
    cout << "\nВсего символов X напечатано: " << countx;

    return 0;
}

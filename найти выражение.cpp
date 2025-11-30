#include <iostream>
#include <math.h>      // Подключение математической библиотеки
using namespace std;

// Функция take вычисляет значение выражения: x³ - x² + x - 1
int take(int x) {
    x = pow(x,3) - pow(x,2) + x - 1;  // Вычисление: x³ - x² + x - 1
    return x;                          // Возврат вычисленного значения
}

int main()
{
    int a, b, c, z;                    // Объявление переменных
    
    cout << "enter data" << endl;      // Запрос на ввод данных
    cin >> a >> b >> c;                // Ввод трех чисел
    
    // Вычисление выражения: take(2a) + take(b + c)
    z = (take(2 * a) + take(b + c));
    
    cout << " result " << z << endl;   // Вывод результата
    return 0;
}

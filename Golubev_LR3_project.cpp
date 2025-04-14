#include <iostream>
#include <cmath>

using namespace std;

// Прототипы функций
void inputX();
void inputY();
void calculateArithmeticMean();
void calculateGeometricMean();

// Глобальные переменные (для простоты примера)
double X = 0, Y = 0;

int main() {
    int choice;
    
    do {
        // Вывод меню
        cout << "\nМеню:" << endl;
        cout << "1. Ввести положительное число X" << endl;
        cout << "2. Ввести положительное число Y" << endl;
        cout << "3. Вычислить среднее арифметическое Sr = (X + Y)/2" << endl;
        cout << "4. Вычислить среднее геометрическое Gr = sqrt(X*Y)" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите пункт меню: ";
        cin >> choice;
        
        // Обработка выбора пользователя
        switch(choice) {
            case 1:
                inputX();
                break;
            case 2:
                inputY();
                break;
            case 3:
                calculateArithmeticMean();
                break;
            case 4:
                calculateGeometricMean();
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    } while(choice != 0);
    
    return 0;
}

// Реализация функций (пока пустые)
void inputX() {
    cout << "Введите положительное число X: ";
    cin >> X;
    
    while (X <= 0) {
        cout << "Число должно быть положительным! Попробуйте еще раз: ";
        cin >> X;
    }
    
    cout << "Принято: X = " << X << endl;
}

void inputY() {
    do {
        cout << "Введите Y (>0): ";
        cin >> Y;
    } while (Y <= 0);
}

void calculateArithmeticMean() {
    // Проверка, что оба числа были введены
    if (X <= 0 || Y <= 0) {
        cout << "Ошибка! Сначала введите оба положительных числа (X и Y).\n";
        return;
    }
    
    double Sr = (X + Y) / 2;
    cout << "Среднее арифметическое чисел " << X << " и " << Y 
         << " равно: " << Sr << endl;
}

void calculateGeometricMean() {
    cout << sqrt(X * Y) << endl;

    
}
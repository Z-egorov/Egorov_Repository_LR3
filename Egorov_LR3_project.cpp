#include <iostream>
using namespace std;


void inputNumber();
void calculateArea();
void calculatePerimeter();
void displayMenu();

int main() {
    int choice;
    
    do {
        displayMenu();
        cin >> choice;
        
        switch(choice) {
            case 1:
                inputNumber();
                break;
            case 2:
                calculateArea();
                break;
            case 3:
                calculatePerimeter();
                break;
            case 0:
                cout << "Выход из программы..." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    } while(choice != 0);
    
    return 0;
}


void inputNumber(double& a) {
    do {
        cout << "Введите положительное число A: ";
        cin >> a;
        if(a <= 0) {
            cout << "Ошибка: число должно быть положительным!" << endl;
        }
    } while(a <= 0);
    cout << "Число успешно сохранено: A = " << a << endl;

}

void calculateArea(double a) {
    double area = (a * a * sqrt(3)) / 4;
    cout << "Площадь равностороннего треугольника со стороной " << a << " = " << area << endl;
}

void calculatePerimeter() {
    // Здесь будет расчет периметра треугольника
}

void displayMenu() {
    cout << "\nМеню:" << endl;
    cout << "1. Ввод положительного числа A" << endl;
    cout << "2. Вычислить площадь равностороннего треугольника" << endl;
    cout << "3. Вычислить периметр равностороннего треугольника" << endl;
    cout << "0. Выход" << endl;
    cout << "Введите номер нужной функции: ";
}
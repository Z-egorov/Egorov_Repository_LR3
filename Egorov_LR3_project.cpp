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


void inputNumber() {
    // Здесь будет реализация ввода числа
}

void calculateArea() {
    // Здесь будет расчет площади треугольника
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
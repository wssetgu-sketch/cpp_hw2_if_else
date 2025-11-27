#include <iostream>
using namespace std;

int main() {
    cout << "Программа \"Времена года\"\n\n";
    cout << "[1] Лето\n";
    cout << "[2] Осень\n";
    cout << "[3] Зима\n";
    cout << "[4] Весна\n\n";

    cout << "Введите значение: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "Сейчас лето, можно одеться легко и идти на улицу.\n";
    } else if (choice == 2) {
        cout << "Сейчас осень, следует одеться тепло и взять с собой зонт.\n";
    } else if (choice == 3) {
        cout << "Сейчас зима, нужно одеться очень тепло.\n";
    } else if (choice == 4) {
        cout << "Сейчас весна, ещё прохладно, но уже теплеет.\n";
    } else {
        cout << "Такого времени года нет в меню.\n";
    }

    return 0;
}

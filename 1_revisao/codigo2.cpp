#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt-Br");
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Você há dormiu " << idade / 3 << " anos desde que nasceu \n";


    return 1;
}
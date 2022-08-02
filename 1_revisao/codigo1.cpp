#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Olá turma" << "\n"; //equivale ao printf ou puts


    string nome;

    cout << "Digite seu nome: ";
    cin >> nome; //equivale ao scanf ou gets
    

    cout << "Você digitou: " << nome << endl;
    cout << "O nome digitado tem " << nome.size() << " caracteres \n";


    return 1;
}
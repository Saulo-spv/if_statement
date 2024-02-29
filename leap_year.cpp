#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void bissexto(int ano);

int main() {
    int ano = 0;

    cout << "Verificador de ano bissexto" << endl;

    cout << "Insira o ano: " << endl;
    cin >> ano;

    bissexto(ano);
    return 0;
}

void bissexto(int ano) {
    cout << "O ano " << ano << (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0) ? " é bissexto!" : " não é bissexto!") << endl;
}

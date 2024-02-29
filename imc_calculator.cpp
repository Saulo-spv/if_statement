#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void imc(double height, double weight);

int main() {

    double weight = 0;
    double height = 0;

    cout << "Calculadora de IMC" << endl;

    cout << "Insira seu peso: ";
    cin >> weight;

    cout << "Insira sua altura: ";
    cin >> height;

    imc(height, weight);
    return 0;
}

void imc(double height, double weight) {
    double imc = weight / (height * height);

    if (imc < 17) {
        cout << "Seu IMC é de "<< imc <<" e você está muito abaixo do peso" << endl;
    } else if (imc < 18.5) {
        cout << "Seu IMC é de "<< imc <<" e você está abaixo do peso" << endl;
    } else if (imc < 25) {
        cout << "Seu IMC é de "<< imc <<" e você está no peso normal" << endl;
    } else if (imc < 30) {
        cout << "Seu IMC é de "<< imc <<" e você está acima do peso" << endl;
    } else if (imc < 35) {
        cout << "Seu IMC é de "<< imc <<" e você está com obesidade" << endl;
    } else if (imc < 40) {
        cout << "Seu IMC é de "<< imc <<" e você está com obesidade severa" << endl;
    } else {
        cout << "Seu IMC é de "<< imc <<" e você está com obesidade mórbida" << endl;
    }
}

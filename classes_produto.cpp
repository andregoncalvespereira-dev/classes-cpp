#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Produto {
public:
    string nome;
    int preço;

    void resultado() {
        cout << "Produto1"<< nome << endl;
        cout << "Valor: " << preço << endl;
        cout << "Produto" << nome << endl;
        cout << "preço" << preço << endl;
    }
};

int main() {
    Produto P;
    P.nome = "Teclado Mecanico";
    P.preço = 309;
    P.resultado();
    
    Produto P1;
    P1.nome = "Monitor lcd";
    P1.preço = 200;
    P1.resultado();
    cout << endl;


    return 0;
}

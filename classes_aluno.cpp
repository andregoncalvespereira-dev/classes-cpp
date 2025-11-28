#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Aluno {
public:
    string nome;
    int nota;

    void resultado() {
        cout << "Aluno: " << nome << endl;
        cout << "Nota: " << nota << endl;

        if (nota >= 6) {
            cout << "Aprovado" << endl;
        } else {
            cout << "Reprovado" << endl;
        }
    }
};

int main() {
    Aluno a;
    a.nome = "Vitor Hugo";
    a.nota = 8;
    a.resultado();

    cout << endl;


    return 0;
}

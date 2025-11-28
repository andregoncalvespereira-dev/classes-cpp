#include <iostream>
using namespace std;

class carro{
public:
    string marca;
    int ano;
    
        void apresentar() {
            cout << " Carro, " << marca << " criado no ano de " << ano << endl;
    }
};

int main()
{
    
    carro c;
    c.marca = "Ferrari f40";
    c.ano = 1987;
    c.apresentar();
    
    return 0;
}

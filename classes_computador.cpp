#include <iostream>
#include <string>
using namespace std;

class Computador{
public:
    string marca;
    int memoriaRAM;
    
    void mostrar(){
        cout << " Eu tenho um pc na "<< marca << " E ele tem "<< memoriaRAM << "de memoria RAM"  <<endl; 
    }
};

int main()
{
    Computador c;
    c. marca = "intel";
    c. memoriaRAM = 16;
    c.mostrar();
    
    return 0;
}

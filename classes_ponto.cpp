#include <iostream>
#include <string>
using namespace std;

class Ponto{
public:
    int x, y;
    
    void imprime(){
        cout << " Eu tenho "<< "R$"<< x << " E gastei "<< "R$" << y  <<endl;  
    }
};

int main()
{
    Ponto p;
    p.x = 24;
    p.y = 14;
    p.imprime();
    
    return 0;
}

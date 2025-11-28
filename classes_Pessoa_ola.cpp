#include <iostream>
#include <string>
using namespace std;

class Pessoa{
public:
    string fala;
    
    void dizerOla(){
        cout << fala <<endl;
    }
};

int main()
{
    Pessoa p;
    p.fala = "olá!";
    p.dizerOla();

    return 0;
}


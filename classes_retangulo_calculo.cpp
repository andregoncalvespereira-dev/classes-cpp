#include <iostream>
#include <string>
using namespace std;

class Retangulo{
public:
    float largura , altura;
    
    void area(){
        cout << "A largura é de "<< largura << " E a altura é de "<< altura <<endl;
        
    }
};

int main()
{
    Retangulo r;
    r.largura =  4.25;
    r.altura = 2.25;
    r.area();
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Animal{
public:
    string tipo, som;
    
    void falar(){
        cout << "O animal "<< tipo << " Faz um som de " << som <<endl;
        
    }
};

int main()
{
    Animal a;
    a.tipo =  "gato";
    a. som = "miauuuu";
    a.falar();
    
    return 0;
}

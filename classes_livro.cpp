#include <iostream>
#include <string>
using namespace std;

class Livro{
public:
    string titulo, autor;
    
    void mostrarlnfo(){
        cout << "O "<< autor << " Fez " << titulo <<endl;    
    }
};

int main()
{
    Livro l;
    l.titulo = "one-piece";
    l.autor = "Eiichiro Oda";
    l.mostrarlnfo();
    
    return 0;
}

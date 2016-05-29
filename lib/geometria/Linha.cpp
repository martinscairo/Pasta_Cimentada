#include <geometria/Linha.h>

//==============================================================================
//                           funções friend  
//==============================================================================
std::ostream& operator << (std::ostream& _os, const Linha& _linha)
{
int contador(0);    
    for (auto & ilinha : _linha.list_tubos) 
        //iguala o endereço do ponteiro ilinha aos endereços da lista
        // for (ilinha = _linha.list_tubos.begin(); ilinha !=_linha.list_tubos.end(); ++ilinha)
    {
        _os << "tubo [" 
            << ++contador
            << "] : "
            << ilinha 
            << "\n";
    }
    return _os;
}

//==============================================================================
//                           sobrecarga de operadores  
//==============================================================================
const Linha& Linha::operator= (const Linha& _orig)
{
    if (this != &_orig)
    {
        list_tubos.assign(_orig.list_tubos.begin(), _orig.list_tubos.end());
    }
    
    return *this;
}



//==============================================================================
//                           funções da classe
//==============================================================================
void Linha::AddTubo (const Tubo& _tubo)
{

    list_tubos.push_back(_tubo);
    
}


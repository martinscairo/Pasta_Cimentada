#include <geometria/Linha.h>

void Linha::AddTubo (const Tubo& _tubo)
{

    list_tubos.push_back(_tubo);
    
}

const Linha& Linha::operator= (const Linha& _orig)
{
    if (this != &_orig)
    {
        list_tubos.assign(_orig.list_tubos.begin(), _orig.list_tubos.end());
    }
    
    return *this;
}

std::ostream& operator << (std::ostream& _os, const Linha& _linha)
{
int contador(0);    
    for (auto & ilinha : _linha.list_tubos)
    {
        _os << "tubo [ " 
            << ++contador
            << "] : "
            << ilinha 
            << "\n";
    }
    return _os;
}
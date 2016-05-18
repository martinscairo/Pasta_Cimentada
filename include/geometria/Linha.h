

#ifndef LINHA_H
#define LINHA_H

#include <geometria/Tubo.h>
#include <iostream>
#include <list>
  


//auto It_Tubos = VecTubos.begin();

//As informações do tubo se dão de forma sequencial, por isso é mais útil utilizar lista

//funçoes para manipular vetores ou listas: transform,for_each

    
typedef std::list <Tubo>                 LstTubo; 

class Linha 
{
 
friend std::ostream& operator << (std::ostream&, const Linha&);    

public:
   
    Linha () {};
    virtual ~Linha() {};
    const Linha& operator= (const Linha&);
    void AddTubo (const Tubo&);
    
private:

LstTubo            list_tubos;    
    
};

#endif /* LINHA_H */


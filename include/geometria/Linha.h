//==============================================================================
// Name        : Linha.h
// Author      : Cairo Martins e Leonardo Thimoteo
// Version     : 1.0
// Description : Classe que define linha como um conjunto de tubos
// Status      : Needs verification
//==============================================================================

#ifndef LINHA_H
#define LINHA_H

/*! 
 *  \brief	Classe que define linha como um conjunto de tubos
 *  \class	Linha
 *  \file	geometria/Linha.h
 *  \author	Cairo Martins da Silva e Leonardo Oliveira Thimoteo
 *  \version	1.0
 *  \date       2016
 *  \copyright  GNU Public License.
 *  \warning    No warnings were related.
 *  \bug	No bugs were related.
 */

//==============================================================================
//                              C++ Includes
//==============================================================================
#include <iostream>
#include <list>
  
//==============================================================================
//                              own includes
//==============================================================================
#include <geometria/Tubo.h>


//auto It_Tubos = VecTubos.begin();

//As informações do tubo se dão de forma sequencial, por isso é mais útil utilizar lista

//funçoes para manipular vetores ou listas: transform,for_each

//==============================================================================
//                              typedefs
//==============================================================================
typedef std::list <Tubo>                 LstTubo; 

//==============================================================================
//                                 class
//==============================================================================
class Linha 
{
 
//------------------------------------------------------------------------------
//                           Friend functions
//------------------------------------------------------------------------------
    //! Sobrecarga do operador << para impressão
friend std::ostream& operator << (std::ostream&, const Linha&);   




public:
   
//------------------------------------------------------------------------------
//                           constructors e destructor
//------------------------------------------------------------------------------ 
  
//! Construtora default.
    Linha () {};
    
        //! Destrutora 
    virtual ~Linha() {};
    
//------------------------------------------------------------------------------
//                          sobrecarga de operadores
//------------------------------------------------------------------------------  
    
//! Sobrecarga do operador =..
/*!
  \param _orig Variável tipo Volumes a ser copiada.
*/    
    const Linha& operator= (const Linha&);
    
//------------------------------------------------------------------------------
//                            funções da classe  
//------------------------------------------------------------------------------ 
    void AddTubo (const Tubo&);
    
    private:

        LstTubo            list_tubos;    //!Lista que contém tubos 
    
};

#endif /* LINHA_H */


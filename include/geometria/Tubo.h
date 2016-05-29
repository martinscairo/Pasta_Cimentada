//==============================================================================
// Name        : Tubo.h
// Author      : Cairo Martins e Leonardo Thimoteo
// Version     : 1.0
// Description : Classe que define elementos tubos
// Status      : Needs verification
//==============================================================================

#ifndef TUBO_H
#define TUBO_H

/*! 
 *  \brief	Classe que define elementos tubos
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

//==============================================================================
//                              other includes
//==============================================================================
#include <iomanip>

//==============================================================================
//                              typedefs
//==============================================================================
typedef double Real;

//==============================================================================
//                              class
//==============================================================================
class Tubo {
    
    
//------------------------------------------------------------------------------
//                           Friend functions
//------------------------------------------------------------------------------
    friend std :: ostream& operator << (std:: ostream&, const Tubo&);
    friend std :: istream& operator >> (std:: istream&,  Tubo&);
    
//------------------------------------------------------------------------------
//              Friend functions that can change private parameters
//------------------------------------------------------------------------------    
    friend const Tubo DInterno    (const Tubo&, const Real&);
    friend const Tubo Espessura   (const Tubo&, const Real&);
    friend const Tubo DExterno    (const Tubo&, const Real&);
    friend const Tubo Comprimento (const Tubo&, const Real&);
    friend const Tubo Angulo      (const Tubo&, const Real&);
    
    
    
    
public:
//------------------------------------------------------------------------------
//                           constructors e destructor
//------------------------------------------------------------------------------ 

//! Construtora default.    
    Tubo() :  dinterno(0), 
              espessura(0), 
              dexterno(0), 
              comprimento(0), 
              angulo(0) {};
              
//! Construtora de cópia
/*!
  \param _orig Variável tipo Volumes a ser copiada.
*/    
    Tubo(const Tubo& _orig): dinterno(_orig.dinterno), 
                             espessura(_orig.espessura), 
                             dexterno(_orig.dexterno), 
                             comprimento(_orig.comprimento), 
                             angulo(_orig.angulo) {};
                             
                             
//! Construtora específica a partir do fornecimento de todos parâmetros 
/*!
  \param _di    Diâmetro interno do tubo
  \param _esp   Espessura do tubo
  \param _de    Diâmetro externo do tubo
  \param _comp  comprimento do tubo
  \param _ang   Ângulo de inclinação em relação à vertical
*/        
    Tubo (const Real& _di, const Real& _esp, const Real& _de, const Real& _comp,
    const Real& _ang) : dinterno(_di), 
                        espessura(_esp), dexterno(_de), 
                        comprimento(_comp), 
                        angulo(_ang) {};
                        
//! Destrutora    
    virtual ~Tubo() {};
    
    
//------------------------------------------------------------------------------
//                          sobrecarga de operadores
//------------------------------------------------------------------------------  
    //! Sobrecarga do operador =..
    const Tubo& operator= (const Tubo&);
    
//------------------------------------------------------------------------------
//                            funções inline  
//------------------------------------------------------------------------------  

//! Função que retorna o diâmetro interno do tubo.
/*!
   \return Diâmetro interno.
*/
    inline  const Real DTubo()    const   {return dinterno;};    

//! Função que retorna a espessura do tubo
/*!
   \return Espessura
*/
    inline  const Real ESPESSURA()   const   {return espessura;};  

//! Função que retorna o diâmetro externo do tubo
/*!
   \return Diâmetro externo
*/
    inline  const Real DExterno()    const   {return dexterno;};    

//! Função que retorna o comprimento do tubo
/*!
   \return Comprimento
*/
    inline  const Real COMPRIMENTO() const   {return comprimento;}; 
 
//! Função que retorna o ângulo de inclinação do tubo em relação à vertical
/*!
   \return Ângulo de inclinação
*/
    inline  const Real ANGULO()      const   {return angulo;};     
    

    
    

private:
    
   Real    dinterno,     //!Valor do diâmetro interno do tubo
           espessura,    //!Espessura do tubo 
           dexterno,     //!Valor do diâmetro externo do tubo 
           comprimento,  //!Comprimento do tubo
           angulo;       //!Ângulo de inclinação em relação à vertical, em radianos

};

#endif /* TUBO_H */
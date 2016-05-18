
#include <iostream>
#include <geometria/Linha.h>

int main(int argc, char** argv) {
    
    Linha l1;
    Tubo  t1;
    
    
    l1.AddTubo(t1);
    l1.AddTubo(t1);
    l1.AddTubo(t1);
    
    std::cout << l1 << std::endl;
    
    
    return 0;
}


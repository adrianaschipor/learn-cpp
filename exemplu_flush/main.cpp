#include <iostream>

int main()
{
    //In mod normal, bufferul cout va face flush (adica scriere pe consola)
    //la fiecare rand nou (deci nu numaidecat endl ci chiar si \n)
    //clog este un alt buffer care de asemenea va afisa pe consola

    //In momentul in care se face flush, atunci se afiseaza pe consola.
    //Pana la flush, continutul este salvat intr-un buffer de memorie
    //std::endl face automat si flush
    std::cout << "[cout]I am the first line of code: without flush";
    for(int i = 0; i < 5; ++i)
    {
        std::clog << "[clog]I am no. " << i << ": with flush" << std::endl;
        std::cout << "[cout]I am no. " << i << ": without flush";
    }
    std::cout << "[cout]I am the last line of code: with flush\n\n";
    
    //Dar putem forta flush si fara sa afisam endl cu std::flush
    std::cout << "[cout]line with manual flush" << std::flush;
    std::clog << "[clog]line with manual flush" << std::endl;
    return 0;
}
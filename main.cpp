#include "header.h" 

int main ()
{
    Abonne a ; 

    a.saisir();
    a.afficher();
    a.recharger(12.2);
    a.afficher();
    a.consommer(12,6000);
    a.afficher();
    return 0 ; 
}
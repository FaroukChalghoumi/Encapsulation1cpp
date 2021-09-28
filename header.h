#ifndef HEADER_H_INCLUDED 

#include <iostream>
#include <string>

using namespace std ; 


class Abonne
{

public:
    //Attribues :

    string nom ; 
    string prenom ; 
    int numAppel ;
    int CIN ; 
    double solde ; 

    //Methodes 

    void saisir () ; 
    void afficher (); 
    void recharger (float c);
    bool consommer (int nbrSecondes , double prixMinute);

};




#endif
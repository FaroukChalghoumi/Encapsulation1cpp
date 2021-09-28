#include "header.h"

   void Abonne :: saisir ()
   {
       cout << " Nom = "; 
       cin >> nom ; 
       cout << " \nPrenom = "; 
       cin >> prenom ;
       cout << "\nCIN = " ; 
       cin >> CIN ; 
       cout << "\n Solde = ";
       cin >> solde ; 

   }

   void Abonne :: afficher ()
   {
       cout << " Nom = "   << nom    <<endl ;
       cout << " Prenom = "<< prenom <<endl ;
       cout << " CIN = "   << CIN    <<endl ;
       cout << " Solde = " << solde  <<endl ;
   }

   void Abonne :: recharger (float c )
   {
       solde += c ; 
   }

    bool Abonne :: consommer (int nbrSecondes   , double prixMinute )
    {
        if ( (prixMinute/60)*nbrSecondes > solde )
        {
            cout << "Desole votre solde est insuffisant ! " << endl ; 
            return false ; 
        }
        else 
        {
            solde -= (prixMinute/60)*nbrSecondes ;
            return true ; 
        }
    }
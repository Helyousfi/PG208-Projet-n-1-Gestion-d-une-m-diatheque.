#ifndef CD_H
#define CD_H

#include "DVD.h"

using namespace std;

class CD : public DVD
{
private:
    string _titre;

public:
    // Constructeurs
    CD   ();                                                            // Constructeur de DVD 
    CD   (int nbrCopies, string type, string nom, 
        string auteur, string taille, string chemin, 
        string duree, string maisonProd, int nbrePiste, string titre);  // Constructeur de DVD a partir de parametres
    CD   (ifstream& filename);                                          // Construction à partir d'un fichier
    CD   (vector<string> data);                                         // Construction à partir d'une liste
    ~CD();

    void    titre      (int    titre);                                  // Pour definir le nombre de nbrePistes
    string  gettitre   ();                                              // Pour obtenir le nombre de nbrePistes

    virtual bool    IsEmpty();                                          // Test s'il n'y a aucune information du media
    virtual void    LoadFromFile        (ifstream& filename);           // Reference pour pouvoir utiliser cette fonction dans les classes filles.
    virtual void    SaveToFile          (ofstream& filename);
    virtual void    AfficherInfo        ();
};



#endif
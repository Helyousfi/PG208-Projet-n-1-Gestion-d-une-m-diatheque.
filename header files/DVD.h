#ifndef DVD_H
#define DVD_H

#include "VHS.h"

using namespace std;

class DVD : public VHS
{

protected :
    int _nbrePistes;


public :
    // Constructeurs
    DVD   ();                                                           // Constructeur de DVD 
    DVD   (int nbrCopies, string type, string nom, 
        string auteur, string taille, string chemin, 
        string duree, string maisonProd, int nbrePiste);                // Constructeur de DVD a partir de parametres
    DVD   (ifstream& filename);                                         // Construction à partir d'un fichier
    DVD   (vector<string> data);                                        // Construction à partir d'une liste
    ~DVD();

    void    nbrePistes      (int    nbrePistes);                        // Pour definir le nombre de nbrePistes
    int     getNbrePistes   ();                                         // Pour obtenir le nombre de nbrePistes

    virtual bool    IsEmpty();                                          // Test s'il n'y a aucune information du media
    virtual void    LoadFromFile        (ifstream& filename);           // Reference pour pouvoir utiliser cette fonction dans les classes filles.
    virtual void    SaveToFile          (ofstream& filename);
    virtual void    AfficherInfo        ();

};




#endif
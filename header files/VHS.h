#ifndef VHS_H
#define VHS_H

#include "RESSOURCES.h"

class VHS : public Ressource
{
    
protected :
    string _duree;
    string _maisonProd;

public :

    //Constructeurs
    VHS   ();                                                                                                                        // Constructeur de Ressource
    VHS   (int nbrCopies, string type, string nom, string auteur, string taille, string chemin, string _duree, string _maisonProd);  // Constructeur de Ressource a partir de parametres
    VHS   (ifstream& filename);                                                                                                      // Construction à partir d'un fichier
    VHS   (vector<string> data);                                                                                                     // Construction à partir d'une liste
    ~VHS  ();
    
    void    duree(string duree);
    void    maisonProd(string maisonProd);

    string getDuree();                                                  // Pour obtenir le type
    string getMaisoProd();                                              // Pour obtenir le nom

    virtual bool    IsEmpty();
    virtual void    AfficherInfo();
    virtual void    LoadFromFile        (ifstream& filename);                           // Reference pour pouvoir utiliser cette fonction dans les classes filles.
    virtual void    SaveToFile          (ofstream& filename);
};




#endif
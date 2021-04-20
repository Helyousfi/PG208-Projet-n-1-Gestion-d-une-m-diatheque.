#ifndef LIVRE_H
#define LIVRE_H

#include "RESSOURCES.h"

class Livre : public Ressource
{
protected :
    int     _nbrPages;
    string  _datePublication;
    string  _collection;
    string  _resume;

public :
    //Constructeurs
    Livre   ();
    Livre   (ifstream& filename);
    Livre   (vector<string> data);                                                      //Construction à partir d'une liste
    Livre   (int nbrCopies , string type, string nom, string  auteur,  string taille, string chemin, int nbrPages, string datePublication, string  collection, string resume);
    ~Livre();

    void            Pages(int nbrPages);
    void            datePublication(string datePublication);
    void            Collection(string collection);
    void            Resume(string resume);

    int             getPages();
    string          getdatePublication();
    string          Collection();
    string          Resume();
    
    void            AfficherInfo        ();
    virtual void    LoadFromFile        (ifstream& filename);
    virtual void    SaveToFile          (ofstream& filename);
    virtual bool    IsEmpty();
  
};
#endif
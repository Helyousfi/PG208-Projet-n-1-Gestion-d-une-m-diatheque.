#ifndef REVUE_H
#define REVUE_H

#include "livre.h"

class Revue : public Livre
{
private :
    string  _editeur;
    int     _nbrArticles;
public : 
    
    void    AfficherInfo        ();
    void    LoadFromFile        (ifstream& filename);
    void    SaveToFile          (ofstream& filename);
    bool    IsEmpty             ();

    void Editeur (string editeur);                                  // Pour definir l'auteur
    void Articles (int nbrArticles);                                // Pour definir le titre

    string getEditeur();                                            // Pour obtenir le type
    int    getArticles();                                           // Pour obtenir le nom

    Revue   ();
    Revue   (ifstream& filename);
    Revue   (int nbrCopies, string type, string nom, string  auteur, string taille, string chemin, int nbrPages, string datePublication, string  collection, string resume, string editeur, int nbrArticles);
    Revue   (vector<string> data);  
    ~Revue  ();
};
#endif

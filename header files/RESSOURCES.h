#ifndef RESSOURCES_H
#define RESSOURCES_H
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;
class Ressource
{
protected :
    int         _nbrCopies;             //Le nombre de copies disponibles du media ( Pour un livre donne, il y'a _nbrCopies copies)
    string      _type;
    string      _nom;
    string      _auteur;
    string      _taille;
    string      _chemin;
    string      _disp;
    string      _id;                    //ID du media
    static int  _N;                     //S'increment à chaque fois un media est crée

public :
    //Constructeurs
    Ressource   ();                                                                                       // Constructeur de Ressource
    Ressource   (int nbrCopies, string type,  string nom, string auteur  , string taille, string chemin); // Constructeur de Ressource a partir de parametres
    Ressource   (ifstream& filename);                                                                     // Construction à partir d'un fichier
    Ressource   (vector<string> data);                                                                    // Construction à partir d'une liste
    ~Ressource  ();                                                                                 

    void Copies (int    nbrCopies);                             // Pour definir le nombre de copies disponibles
    void Auteur (string auteur);                                // Pour definir l'auteur
    void Type   (string type);                                  // Pour definir le type
    void Taille (string taille);                                // Pour definir l'auteur
    void Chemin (string chemin);                                // Pour definir le titre

    int    getCopies ();                                        // Pour obtenir le nombre de copies disponibles
    string getType();                                           // Pour obtenir le type
    string getNom();                                            // Pour obtenir le nom
    string getAuteur();                                         // Pour obtenir l'auteur
    string getTaille();                                         // Pour obtenir la Taille
    string getChemin();                                         // Pour obtenir le chemin
    string getDispo();                                          // Pour obtenir la disponibilite du media
    string getId();                                             // Pour obtenir l'ID

    void emprunter();                                           // Pour rendre la disponibilite a "Emprunte"
    void rendre();                                              // Pour rendre la disponibilite a "Disponibe"
    void reserver();                                            // Definit la disponibilite a "Reserve"
    void vendre();                                              // Definit la disponibilite a "Non disponible"

    virtual bool    IsEmpty();                                  // Test s'il n'ya aucune information du media
    virtual void    LoadFromFile        (ifstream& filename);   // Reference pour pouvoir utiliser cette fonction dans les classes filles.
    virtual void    SaveToFile          (ofstream& filename);
    virtual void    AfficherInfo        ();
};
#endif


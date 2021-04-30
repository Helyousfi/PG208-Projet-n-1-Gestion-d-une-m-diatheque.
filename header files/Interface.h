#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include "RESSOURCES.h"
#include "livre.h"
#include "Revue.h"
#include "VHS.h"
#include "DVD.h"
#include "NUMERIQUE.h"

class Interface
{
public :
    Interface();
    ~Interface();
    void Bye();                                 //Destruction des ressources allouées
    void AddType(string type);         //Enregistrer un type dans un fichier : type = Livre("Paulo Coelho","The alchimist","2006");
    bool LoadFromFile(const char* filename);
    void saveToFile(const char* filename);
    void SearchChaine(string chaine);
    void Clear();
    void List();
    void Show_ID(int ID);
    void Delete_ID(int ID);
    void RESET();
private:
    vector<Ressource*> _base_donnee;
    vector<Ressource*> _recherche;
    vector<Ressource*> _emprunt;
};


#endif

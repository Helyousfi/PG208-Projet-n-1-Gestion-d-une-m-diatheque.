#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include <vector>
#include "RESSOURCES.h"

class Interface
{
public :
    void Bye();                                //Destruction des ressources allouées
    void AfficherInfo_base_donnee();
    void AfficherInfo_recherche();
    void AddType(string type);         //Enregistrer un type dans un fichier : type = Livre("Paulo Coelho","The alchimist","2006");
    void LoadFromFile(string filename);
    void SaveToFile(string filename);
    void SearchChaine(string recherche);
    void Clear();
    void List();
    void Show_ID(string ID);
    void Delete_ID(string ID);
    void Reset();
private:
      vector <Ressource*> _base_donnee;
      vector <Ressource*> _recherche;
      vector <Ressource*> _emprunt;

};


#endif

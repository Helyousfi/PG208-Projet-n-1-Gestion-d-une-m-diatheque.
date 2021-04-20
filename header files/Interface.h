#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include "RESSOURCES.h"

class Interface
{
public : 
    void Bye();                                 //Destruction des ressources allouées 
    void AddType(const Ressource type);         //Enregistrer un type dans un fichier : type = Livre("Paulo Coelho","The alchimist","2006");
    bool LoadFromFile(const char* filename);    
    void saveToFile(const char* filename);
    void SearchChaine();
    void Clear();
    void List();

};


#endif
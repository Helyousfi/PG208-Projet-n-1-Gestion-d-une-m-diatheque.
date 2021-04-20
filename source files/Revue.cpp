#include "..\header files\Revue.h"

// Constructeurs de la revue :
Revue::Revue() : Livre()
{
    _editeur        = "Pas encore defini";
    _type           = "Revue";
    _nbrArticles    = 0;
}
Revue::Revue(ifstream& filename)
{
    LoadFromFile(filename);
}
Revue::~Revue()
{
}

Revue::Revue   (int nbrCopies, string type, string nom, 
string  auteur, string taille, string chemin, int nbrPages, 
string datePublication, string  collection, string resume, 
string editeur, int nbrArticles) : Livre   (nbrCopies, type, 
nom, auteur, taille, chemin, nbrPages, datePublication, 
collection, resume)
{
_editeur = editeur;
_nbrArticles = nbrArticles;
}

Revue::Revue(vector<string> data) : Livre(data)
{
    cout << "ok1" << endl;
    _editeur        = data[9];
    _nbrArticles    = stoi(data[10]);
}


bool Revue::IsEmpty()
{
    if(
    Livre::IsEmpty() &
    _editeur.empty() 
    )
    {
        return 1;
    }
    return 0;
}
void Revue::AfficherInfo()
{
    if(!IsEmpty())
    {
        Livre::AfficherInfo();
        cout << "L'editeur : "<< _editeur << endl;
        cout << "Le nombre d'articles : "<< _nbrArticles << endl;
    }
}
void    Revue::LoadFromFile (ifstream& filename)
{
    if(filename)
    {
        Livre::LoadFromFile(filename);
        getline(filename, _editeur);
        string temp;
        getline(filename, temp);
        _nbrArticles = stoi(temp);
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}
void    Revue::SaveToFile (ofstream& filename)
{
    if(filename.is_open()) 
    {
        Livre::SaveToFile(filename);
        filename << _editeur          << endl;
        filename << _nbrArticles      << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode ecriture." << endl;
    }
}

void Revue::Editeur (string editeur)
{
    _editeur = editeur;
}
void Revue::Articles(int nbrArticles)
{
    _nbrArticles = nbrArticles;
}
string Revue::getEditeur()
{
    return _editeur;
}
int Revue::getArticles()
{
    return _nbrArticles;
}

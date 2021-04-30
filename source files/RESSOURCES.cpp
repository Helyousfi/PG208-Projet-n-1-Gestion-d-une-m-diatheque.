#include "..\header files\RESSOURCES.h"

int Ressource::_N = 0; // Initilisation du compteur d'ID
Ressource :: Ressource()
{
    _nbrCopies  = 0;
    _auteur     = "Pas encore defini";
    _type       = "Ressource";
    _taille     = "Pas encore defini";
    _nom        = "Pas encore defini";
    _chemin     = "Pas encore defini";
    _disp       = "Disponible";
    _id         = "RES-00000"+to_string(_N++);
    cout << "Creation d'un media dont l'id est :" << _id << " ..." << endl;
}
Ressource :: Ressource   (int nbrCopies, string type,  string nom, string auteur  , string taille, string chemin)
{
    _nbrCopies  = nbrCopies;
    _auteur     = auteur;
    _type       = type;
    _taille     = taille;
    _nom        = nom;
    _chemin     = chemin;
    _disp       = "Disponible";
    _id         = "RES-00000"+to_string(_N++);
    cout << "Creation d'un media dont l'id est :" << _id << endl;
}

Ressource :: Ressource   (ifstream& filename)
{
    _disp = "Disponible";
    _id = "RES-00000"+to_string(_N++);
    LoadFromFile(filename);
    cout << "Creation d'un media dont l'id est :" << _id << endl;
}
Ressource::Ressource(vector<string> data){
    _type       = "Ressource";
    _nbrCopies  = stoi(data[0]);
    _nom        = data[1];
    _auteur     = data[2];
    _taille     = data[3];
    _chemin     = data[4];
    _disp       = "Disponible";
    _id         = "RES-00000"+to_string(_N++);
}
Ressource :: ~Ressource()
{
}
void Ressource::Auteur(string auteur)
{
    _auteur = auteur;
}
void Ressource::Type(string type)
{
    _type = type;
}
void Ressource::Taille(string taille)
{
    _taille = taille;
}
void Ressource::Chemin (string chemin)
{
    _chemin = chemin;
}


string Ressource::getType()
{
    return _type;
}
string Ressource::getNom()
{
    return _nom;
}
string Ressource::getAuteur()
{
    return _auteur;
}
string Ressource::getTaille()
{
    return _taille;
}
string Ressource::getChemin()
{
    return _chemin;
}
string Ressource::getDispo()
{
    return _disp;
}
string Ressource::getId()
{
    return _id;
}
int    Ressource::getCopies()
{
    return _nbrCopies;
}
void Ressource::emprunter()
{
    _nbrCopies = _nbrCopies - 1;
    cout << "il reste " << _nbrCopies << " " << _type << endl;
    if(_nbrCopies == 0)
    {
        _disp = "Emprunt";
    }
}
void Ressource::rendre()
{
    _nbrCopies = _nbrCopies + 1;
    if(_nbrCopies != 0)
    {
        _disp = "Disponible";
    }
}
void Ressource::reserver()
{
    _nbrCopies = _nbrCopies - 1;
    if(_nbrCopies == 0)
    {
        _disp = "Reserve";
    }
}
void Ressource::vendre()
{
    _nbrCopies = _nbrCopies - 1;
    if(_nbrCopies == 0)
    {
        _disp = "Non disponible";
    }
}
void Ressource::Copies (int    nbrCopies)
{
    _nbrCopies = nbrCopies;
}
void Ressource::AfficherInfo()
{
    if(!IsEmpty())
    {
     
    cout << "INFORMATION DE LA RESSOURCE :" << endl;
    cout << "Nombre de copies : "   << _nbrCopies   <<endl;
    cout << "ID : "                 << _id          << endl;
    cout << "Type : "               << _type        << endl;
    cout << "Nom : "                << _nom         << endl;
    cout << "Auteur : "             << _auteur      << endl;
    cout << "Taille : "             << _taille      << endl;
    cout << "Chemin : "             << _chemin      << endl;
    cout << "Disponibilite : "      << _disp        << endl;
    }
}
void    Ressource::LoadFromFile        (ifstream& filename)
{
    if(filename)
    {
        string temp0;
        getline(filename, temp0);
        _nbrCopies = stoi(temp0);
        getline(filename, _type);
        getline(filename, _nom);
        getline(filename, _auteur);
        getline(filename, _taille);
        getline(filename, _chemin);
        getline(filename, _disp);
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}
void    Ressource::SaveToFile(ofstream& filename)
{
    if(filename.is_open())  //Fichier est ouvert ?
    {
        //Tout est OK, on peut utiliser le fichier
        filename << _nbrCopies        << endl;
        filename << _type             << endl;
        filename << _nom              << endl;
        filename << _auteur           << endl;
        filename << _taille           << endl;
        filename << _chemin           << endl;
        filename << _disp             << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode ecriture." << endl;
    }
}      
bool Ressource::IsEmpty()
{
    if(
    _nom.empty() & 
    _auteur.empty() &
    _taille.empty() &
    _chemin.empty() 
    )
    {
        return 1;
    }
    return 0;
}


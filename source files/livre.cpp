#include "..\header files\livre.h"

bool Livre::IsEmpty()
{
    if(
    Ressource::IsEmpty() &
    _datePublication.empty() &
    _collection.empty() &
    _resume.empty()
    )
    {
        return 1;
    }
    return 0;
}
void Livre::AfficherInfo()
{
    if(!IsEmpty())
    {
        Ressource::AfficherInfo();
        cout << "Nombre de pages est : "<< _nbrPages << endl;
        cout << "Date de publication est : "     << _datePublication << endl;
        cout << "La collection est :  " << _collection << endl;
        cout << "Le Resume est : " << _resume << endl;
    }
}
void    Livre::LoadFromFile        (ifstream& filename)
{
    if(filename)
    {
        Ressource::LoadFromFile(filename);
        string temp;
        getline(filename, temp);
        _nbrPages = stoi(temp);
        getline(filename, _datePublication);
        getline(filename, _collection);
        getline(filename, _resume);
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}
void    Livre::SaveToFile(ofstream& filename)
{
    if(filename.is_open())  //Fichier est ouvert ?
    {
        //Tout est OK, on peut utiliser le fichier
        Ressource::SaveToFile(filename);
        filename << _nbrPages         << endl;  
        filename << _datePublication  << endl;
        filename << _collection       << endl;
        filename << _resume           << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode ecriture." << endl;
    }
}
Livre :: Livre() : Ressource()
{
    _type               = "Livre";
    _nbrPages           = 0;
    _datePublication    = "Pas encore defini";
    _collection         = "Pas encore defini";
    _resume             = "Pas encore defini";
}
Livre :: Livre   (ifstream& filename) 
{
    LoadFromFile(filename);
}

Livre :: Livre   (vector<string> data) : Ressource(data)
{
    _nbrPages           = stoi(data[5]);
    _datePublication    = data[6];
    _collection         = data[7];
    _resume             = data[8];
}



Livre :: Livre   (int nbrCopies, string type, string nom, string  auteur,  string taille, string chemin, int nbrPages, string datePublication, string  collection, string resume) : Ressource   (nbrCopies, type,  nom, auteur  , taille, chemin)
{
    _nbrPages = nbrPages;
    _datePublication = datePublication;
    _collection = collection;
    _resume = resume;
}
Livre :: ~Livre()
{
}

void Livre :: Pages(int nbrPages)
{
    _nbrPages = nbrPages;
}
void Livre :: datePublication(string datePublication)
{
    _datePublication = datePublication;
}
void Livre :: Collection(string Collection)
{
    _collection = Collection;
}
void Livre :: Resume(string resume)
{
    _resume = resume;
}
int Livre::getPages()
{
    return _nbrPages;
}
string Livre::getdatePublication()
{
    return _datePublication;
}
string Livre::Collection()
{
    return _collection;
}
string Livre::Resume()
{
    return _resume;
}
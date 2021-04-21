#include "..\header files\VHS.h"

bool VHS::IsEmpty()
{
    if(
    Ressource::IsEmpty() &
    _duree.empty() &
    _maisonProd.empty()
    )
    {
        return 1;
    }
    return 0;
}
VHS::VHS (): Ressource()
{
    _duree               = "Livre";
    _maisonProd           = "Pas encore defini";
}
void VHS::AfficherInfo()
{
    if(!IsEmpty())
    {
        Ressource::AfficherInfo();
        cout << "Duree : "<< _duree << endl;
        cout << "Maison de production : "     << _maisonProd << endl;
    }
}
void VHS::LoadFromFile(ifstream& filename)
{
    if(filename)
    {
        Ressource::LoadFromFile(filename);
        getline(filename, _duree);
        getline(filename, _maisonProd);
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}
void    VHS::SaveToFile(ofstream& filename)
{
    if(filename.is_open())  //Fichier est ouvert ?
    {
        //Tout est OK, on peut utiliser le fichier
        Ressource::SaveToFile(filename);
        filename << _duree        << endl;
        filename << _maisonProd   << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}

VHS :: VHS   (ifstream& filename) 
{
    LoadFromFile(filename);
}
VHS :: VHS   (vector<string> data) : Ressource(data)
{
    _duree                  = data[5];
    _maisonProd             = data[6];
}
VHS :: VHS   (int nbrCopies, string type,  string nom, string auteur  , string taille, string chemin,     // Constructeur de Ressource a partir de parametres
    string duree, string maisonProd) : Ressource   (nbrCopies, type,  nom, auteur  , taille, chemin)
    {
        _duree      = duree;
        _maisonProd  = maisonProd;
    }
void VHS :: duree(string duree)
{
    _duree = duree;
}
void VHS :: maisonProd(string maisonProd)
{
    _maisonProd = maisonProd;
}
string VHS :: getDuree()
{
    return _duree;
}
string VHS :: getMaisoProd()
{
    return _maisonProd;
}

VHS::~VHS  (){}
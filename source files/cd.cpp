#include "..\header files\CD.h"

CD :: CD   () : DVD ()
{
    _titre = "Pas encore defini";
}

bool CD :: IsEmpty()
{
    if(
    DVD::IsEmpty() &
    _titre.empty()
    )
    {
        return 1;
    }
    return 0;
}
void CD::AfficherInfo()
{
    if(!IsEmpty())
    {
        DVD::AfficherInfo();
        cout << "Titre : "<< _titre << endl;
    }
}

void CD::LoadFromFile(ifstream& filename)
{
    if(filename)
    {
        DVD::LoadFromFile(filename);
        getline(filename, _titre);
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}
void    CD::SaveToFile(ofstream& filename)
{
    if(filename.is_open())  //Fichier est ouvert ?
    {
        //Tout est OK, on peut utiliser le fichier
        DVD::SaveToFile(filename);
        filename << _titre << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}
CD :: CD   (ifstream& filename) 
{
    LoadFromFile(filename);
}
CD :: CD   (vector<string> data) : DVD(data)
{
    _titre = data[8];
}
CD :: CD(int nbrCopies, string type, string nom, 
        string auteur, string taille, string chemin, 
        string duree, string maisonProd, int nbrePiste, string titre) : DVD(nbrCopies, type, nom, auteur, taille, chemin, duree, maisonProd, nbrePiste)
{
        _titre     = titre;
}
CD :: ~CD()
{}
void CD :: titre(int titre)
{
    _titre = titre;
}
string CD :: gettitre()
{
    return _titre;
}


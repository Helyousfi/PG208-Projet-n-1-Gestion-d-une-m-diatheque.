#include "..\header files\DVD.h"

DVD :: DVD   () : VHS ()
{
    _nbrePistes = 0;
}

bool DVD :: IsEmpty()
{
    if(
    VHS::IsEmpty() &
    (_nbrePistes == 0)
    )
    {
        return 1;
    }
    return 0;
}
void DVD::AfficherInfo()
{
    if(!IsEmpty())
    {
        VHS::AfficherInfo();
        cout << "Nombre des pistes : "<< _nbrePistes << endl;
    }
}

void DVD::LoadFromFile(ifstream& filename)
{
    if(filename)
    {
        VHS::LoadFromFile(filename);
        string temp;
        getline(filename, temp);
        _nbrePistes = stoi(temp);
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}
void    DVD::SaveToFile(ofstream& filename)
{
    if(filename.is_open())  //Fichier est ouvert ?
    {
        //Tout est OK, on peut utiliser le fichier
        VHS::SaveToFile(filename);
        filename << _nbrePistes     << endl ;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}
DVD :: DVD   (ifstream& filename) 
{
    LoadFromFile(filename);
}
DVD :: DVD   (vector<string> data) : VHS(data)
{
    _nbrePistes = stoi(data[7]);
}
DVD :: DVD(int nbrCopies, string type, string nom, 
        string auteur, string taille, string chemin, 
        string duree, string maisonProd, int nbrePiste) : VHS(nbrCopies, type, nom, auteur, taille, chemin, duree, maisonProd)
{
        _nbrePistes      = nbrePiste;
}
DVD :: ~DVD()
{}
void DVD :: nbrePistes(int nbrePistes)
{
    _nbrePistes = nbrePistes;
}
int DVD :: getNbrePistes()
{
    return _nbrePistes;
}


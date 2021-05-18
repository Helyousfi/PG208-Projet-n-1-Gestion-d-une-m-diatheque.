#include "..\header files\Interface.h"
#include "..\header files\livre.h"
#include "..\header files\Revue.h"
#include "..\header files\DVD.h"
#include "..\header files\CD.h"
#include "..\header files\VHS.h"

/*void Interface :: Bye()
{
  ~Livre();
  ~Numerique();
  ~Ressource();
  ~Revue();
  ~VHS();
  ~DVD();
}*/

void Interface :: AfficherInfo_recherche()
{
  if (_recherche.size() == 0)
  {
    printf("Recherche is empty");
  }
  else
  {
  for(int i = 0; i < _recherche.size(); i++)
  {
    _recherche[i]->AfficherInfo();
  }
}
}

void Interface :: AfficherInfo_base_donnee()
{
  for(int i = 0; i < _base_donnee.size(); i++)
  {
    _base_donnee[i]->AfficherInfo();
  }
}


void Interface :: AddType(string type)
{
  if(type=="Livre")
  {
    string nbre;
    cout << "\nVeuillez svp entrer le nombre de page\t"<<endl ;
    cin >> nbre;
    int nbre_page = stoi(nbre);
    string datePublication;
    cout << "\nVeuillez svp entrer la date de publication\t"<<endl ;
    cin >> datePublication;
    string collection;
    cout << "\nVeuillez svp entrer la collection\t"<<endl ;
    cin >> collection;
    string Resume;
    cout << "\nVeuillez svp entrer le resume\t"<<endl ;
    cin >> Resume;
    string Nom;
    cout << "\nVeuillez svp entrer le nom\t"<<endl ;
    cin >> Nom;
    string Auteur;
    cout << "\nVeuillez svp entrer l'auteur'\t"<<endl ;
    cin >> Auteur;
    string Taille;
    cout << "\nVeuillez svp entrer la taille\t"<<endl ;
    cin >> Taille;
    string Chemin;
    cout << "\nVeuillez svp entrer le chemin\t"<<endl ;
    cin >> Chemin;
    Livre *l = new Livre();
    l->Ressource::Type("Livre");
    l->Ressource::Nom(Nom);
    l->Ressource::Auteur(Auteur);
    l->Ressource::Taille(Taille);
    l->Ressource::Chemin(Chemin);
    l->Pages(nbre_page);
    l->datePublication(datePublication);
    l->Collection(collection);
    l->Resume(Resume);
    _base_donnee.push_back(l);
    _recherche.push_back(l);
  }
  else if(type=="Revue")
  {
    Revue *r = new Revue();
    r->Ressource::Type("Revue");
    string nbre;
    cout << "\nPlease enter the item's number\t"<<endl ;
    cin >> nbre;
    int nbre_page = stoi(nbre);
    string datePublication;
    cout << "\nPlease enter the publication date\t"<<endl ;
    cin >> datePublication;
    string collection;
    cout << "\nPlease enter the name collection\t"<<endl ;
    cin >> collection;
    string Resume;
    cout << "\nPlease enter the Resume\t"<<endl ;
    cin >> Resume;
    string Nom;
    cout << "\nPlease enter the Name\t"<<endl ;
    cin >> Nom;
    string Auteur;
    cout << "\nPlease enter the Author\t"<<endl ;
    cin >> Auteur;
    string Taille;
    cout << "\nPlease enter the heigth\t"<<endl ;
    cin >> Taille;
    string Chemin;
    cout << "\nPlease enter the path\t"<<endl ;
    cin >> Chemin;
    r->Ressource::Nom(Nom);
    r->Ressource::Auteur(Auteur);
    r->Ressource::Taille(Taille);
    r->Ressource::Chemin(Chemin);
    r->Pages(nbre_page);
    r->datePublication(datePublication);
    r->Collection(collection);
    r->Resume(Resume);
    _base_donnee.push_back(r);
    _recherche.push_back(r);
  }
  else if(type=="VHS")
  {
    VHS *v = new VHS();
    v->Ressource::Type("VHS");
    string Nom;
    cout << "\nVeuillez svp entrer le nom\t"<<endl ;
    cin >> Nom;
    string Auteur;
    cout << "\nVeuillez svp entrer le nom de l'auteur\t"<<endl ;
    cin >> Auteur;
    string Taille;
    cout << "\nVeuillez svp entrer la taille\t"<<endl ;
    cin >> Taille;
    string Chemin;
    cout << "\nVeuillez svp entrer le chemin\t"<<endl ;
    cin >> Chemin;
    string duree;
    cout << "\nVeuillez svp entrer le duree\t"<<endl ;
    cin >> duree;
    v->Ressource::Nom(Nom);
    v->Ressource::Auteur(Auteur);
    v->Ressource::Taille(Taille);
    v->Ressource::Chemin(Chemin);
    v->duree(duree);
    _base_donnee.push_back(v);
    _recherche.push_back(v);
  }
  else if(type=="DVD")
  {
    DVD *d = new DVD();
    d->Ressource::Type("DVD");
    string Nom;
    cout << "\nVeuillez svp entrer le nom\t"<<endl ;
    cin >> Nom;
    string Auteur;
    cout << "\nVeuillez svp entrer le nom de l'auteur\t"<<endl ;
    cin >> Auteur;
    string Taille;
    cout << "\nVeuillez svp entrer la taille\t"<<endl ;
    cin >> Taille;
    string Chemin;
    cout << "\nVeuillez svp entrer le chemin\t"<<endl ;
    cin >> Chemin;
    string duree;
    cout << "\nVeuillez svp entrer le duree\t"<<endl ;
    cin >> duree;
    string _nbrePistes_string;
    cout << "\nVeuillez svp entrer le nombre de pistes\t"<<endl ;
    cin >> _nbrePistes_string;
    int nbrePiste = stoi(_nbrePistes_string);
    d->Ressource::Nom(Nom);
    d->Ressource::Auteur(Auteur);
    d->Ressource::Taille(Taille);
    d->Ressource::Chemin(Chemin);
    d->duree(duree);
    d->nbrePistes(nbrePiste);
    _base_donnee.push_back(d);
    _recherche.push_back(d);
  }
  else if(type=="CD")
  {
    CD *c = new CD();
    c->Ressource::Type("CD");
    string Nom;
    cout << "\nVeuillez svp entrer le nom\t"<<endl ;
    cin >> Nom;
    string Auteur;
    cout << "\nVeuillez svp entrer le nom de l'auteur\t"<<endl ;
    cin >> Auteur;
    string Taille;
    cout << "\nVeuillez svp entrer la taille\t"<<endl ;
    cin >> Taille;
    string Chemin;
    cout << "\nVeuillez svp entrer le chemin\t"<<endl ;
    cin >> Chemin;
    string duree;
    cout << "\nVeuillez svp entrer le duree\t"<<endl ;
    cin >> duree;
    string _nbrePistes_string;
    cout << "\nVeuillez svp entrer le nombre de pistes\t"<<endl ;
    cin >> _nbrePistes_string;
    int nbrePiste = stoi(_nbrePistes_string);
    string titre;
    cout << "\nVeuillez svp entrer le titre\t"<<endl ;
    cin >> titre;
    c->Ressource::Nom(Nom);
    c->Ressource::Auteur(Auteur);
    c->Ressource::Taille(Taille);
    c->Ressource::Chemin(Chemin);
    c->duree(duree);
    c->nbrePistes(nbrePiste);
    c->titre(titre);
    _base_donnee.push_back(c);
    _recherche.push_back(c);
  }
  else if(type=="Ressource")
  {
    Ressource *rc = new Ressource();
    rc->Ressource::Type("Ressource");
    string Nom;
    cout << "\nVeuillez svp entrer le nom\t"<<endl ;
    cin >> Nom;
    string Auteur;
    cout << "\nVeuillez svp entrer le nom de l'auteur\t"<<endl ;
    cin >> Auteur;
    string Taille;
    cout << "\nVeuillez svp entrer la taille\t"<<endl ;
    cin >> Taille;
    string Chemin;
    cout << "\nVeuillez svp entrer le chemin\t"<<endl ;
    cin >> Chemin;
    rc->Ressource::Nom(Nom);
    rc->Ressource::Auteur(Auteur);
    rc->Ressource::Taille(Taille);
    rc->Ressource::Chemin(Chemin);
    _base_donnee.push_back(rc);
    _recherche.push_back(rc);
  }
}

void Interface :: LoadFromFile(string filename)
{
  const char* Chaine = filename.c_str();
  ifstream Fichier(Chaine);
  string first_line;
  if(Fichier)
  {
      getline(Fichier, first_line);
      if(first_line,"Livre")
      {
        Livre *l = new Livre();
        l->LoadFromFile(Fichier);
        _base_donnee.push_back(l);
        _recherche.push_back(l);
      }
      else if(first_line,"Revue")
      {
        Revue* r = new Revue();
        r->LoadFromFile(Fichier);
        _base_donnee.push_back(r);
        _recherche.push_back(r);
      }
      else if(first_line,"VHS")
      {
        VHS* v = new VHS();
        v->LoadFromFile(Fichier);
        _base_donnee.push_back(v);
        _recherche.push_back(v);
      }
      else if(first_line,"DVD")
      {
        DVD* d = new DVD();
        d->LoadFromFile(Fichier);
        _base_donnee.push_back(d);
        _recherche.push_back(d);
      }
      else if(first_line,"CD")
      {
        CD* c = new CD();
        c->LoadFromFile(Fichier);
        _base_donnee.push_back(c);
        _recherche.push_back(c);
      }
  }
  else
  {
      cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
  }
}

void Interface :: SaveToFile(string filename)
{
  const char* Chaine = filename.c_str();
  ofstream Fichier(Chaine);
  if(Fichier.is_open())
  {
    for(int i = 0; i < 1; i++)
    {
      Ressource *r = _base_donnee[i];
      r->SaveToFile(Fichier);
    }
  }

}

void Interface :: SearchChaine(string ctrlf)
{
  int found =0 ;
  int taille = _recherche.size();
  vector <Ressource*> temp;
  for(unsigned int i = 0; i < taille ; i++)
  {
    Ressource *r = _recherche[i];
    //printf("%s\n", );
    if((to_string(r->getCopies()) == ctrlf )||(r->getType() == ctrlf )||(r->getNom() == ctrlf )||(r->getAuteur() == ctrlf )||(r->getTaille() == ctrlf )||(r->getChemin() == ctrlf )||(r->getDispo() == ctrlf )||(r->getId() == ctrlf ))
    {
      temp.push_back(r);
      found = 1;
    }
  }
    if (found != 0)
    {
    _recherche.clear();
    for(unsigned int j=0; j< temp.size();j++)
    {
      _recherche.push_back(temp[j]);
    }
    temp.clear() ;
  }
}

void Interface :: Clear()
{
  _recherche.clear();
  for(unsigned int i=0;i < _base_donnee.size(); i++)
  {
    _recherche.push_back(_base_donnee[i]);
  }
}


void Interface :: Show_ID(string ID)
{
  vector <Ressource*> temp;
  for(unsigned int i=0; i< _base_donnee.size(); i++)
  {
    Ressource *r = _base_donnee[i];
    if(r->getId() == ID)
    {
      temp.push_back(r);
    }
  }
  for(int j = 0; j < _base_donnee.size(); j++)
  {
    temp[j]->AfficherInfo();
  }
  temp.clear() ;
}

void Interface :: Delete_ID(string ID)
{
  vector <Ressource*> temp;
  for(unsigned int i=0; i< _base_donnee.size(); i++)
  {
    Ressource *r = _base_donnee[i];
    if(r->getId() != ID)
    {
      temp.push_back(r);
    }
  }
  _base_donnee.clear();
  for(unsigned int m=0;m < temp.size(); m++)
  {
    _base_donnee.push_back(temp[m]);
  }
  for(int j = 0; j < _base_donnee.size(); j++)
  {
    _base_donnee[j]->AfficherInfo();
  }
  temp.clear() ;
}

void Interface :: Reset()
{
  _base_donnee.clear();
}

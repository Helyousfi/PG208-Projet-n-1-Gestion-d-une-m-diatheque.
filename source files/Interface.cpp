#include "Interface.h"


void Interface :: Bye()
{
  ~Livre();
  ~Numerique();
  ~Ressource();
  ~Revue();
  ~VHS();
  ~DVD();
}

void Interface :: AddType(string type)
{
  if(strcmp(type,"Livre")==0)
  {
    Livre *l = new Livre();
    _base_donnee.push_back(l);
  }
  else if(strcmp(type,"Revue")==0)
  {
    Revue *r = new Revue();
    _base_donnee.push_back(r);
  }
  else if(strcmp(type,"VHS")==0)
  {
    VHS *v = new VHS();
    _base_donnee.push_back(v);
  }
  else if(strcmp(type,"DVD")==0)
  {
    DVD *d = new DVD();
    _base_donnee.push_back(d);
  }
  else if(strcmp(type,"Numerique")==0)
  {
    Numerique *n = new Numerique();
    _base_donnee.push_back(n);
  }
}

bool Interface :: LoadFromFile(const char* filename)
{
  ifstream Fichier(filename);
  if(Fichier)
  {
      getline(Fichier, first_line);
      if(strcmp(first_line,"Livre")==0)
      {
        Livre *l = new Livre();
        l->Livre   (ifstream& filename);
        _base_donnee.push_back(l);
      }
      else if(strcmp(first_line,"Revue")==0)
      {
        Revue* r = new Revue();
        _base_donnee.push_back(r);
      }
      else if(strcmp(first_line,"VHS")==0)
      {
        VHS* v = new VHS();
        _base_donnee.push_back(v);
      }
      else if(strcmp(first_line,"DVD")==0)
      {
        DVD* d = new DVD();
        _base_donnee.push_back(d);
      }
      else if(strcmp(first_line,"Numerique")==0)
      {
        Numerique* n = new Numerique();
        _base_donnee.push_back(n);
      }
      return true;
  }
  else
  {
      cout << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
      return false;
  }
}

#include "..\header files\Revue.h"
#include "..\header files\CD.h"


int main()
{   
    #if 0
    //Test Ressource
    vector<string> data = {"Nom001","Auteur001","Taille001","www.001.com"};
    Ressource Res001(data);
    Res001.AfficherInfo();

    Res001.SaveToFile("../Ressources/Res001.txt");

    Res001.vendre();
     
    Ressource Res002;
    Res002.LoadFromFile("../Ressources/Res002.txt");
    Res002.AfficherInfo();
     


    
    Livre Livre1("../Livres/Livre01.txt");
    Livre1.AfficherInfoLivre();
    
    Livre Livre2;
    ifstream fs("../Livres/Livre01.txt");
    Livre2.LoadFromFile(fs);
    Livre2.AfficherInfoLivre();
    
    
    Livre Livre3("ca","Hamza","74","Prog","w.g.c","74","2010","ar","aa");
    Livre3.SaveToFile("../Livres/Livre03.txt");
    Livre3.AfficherInfoLivre();
    
    Revue Revue1;
    Revue1.LoadFromFile("../Revues/Revue02.txt");
    Revue1.AfficherInfo();
    


    Revue Revue1;
    Revue1.Pages(25);
    Revue1.Editeur("Editeur01");
    cout << Revue1.getEditeur() << endl;
    //Revue1.AfficherInfo();
    



    ifstream fs("../Ressources/Res001.txt");
    Ressource Res001(fs);
    Res001.AfficherInfo();
    Res001.reserver();

    ofstream fs1("../Ressources/Res003.txt");
    Res001.SaveToFile(fs1);
    Res001.AfficherInfo();
    Res001.rendre();
    Res001.AfficherInfo();
    ifstream fs1("../Ressources/Res001.txt");
    Revue Res001(fs1);
    cout << Res001.getCopies() << endl;
    Res001.AfficherInfo();
    

    /*
    ifstream fs1("../Revues/Revue02.txt");
    Revue Revue01(fs1);
    Revue01.AfficherInfo();
    Revue01.reserver();
    Revue01.AfficherInfo();
    Revue01.rendre();
    Revue01.AfficherInfo();
    

    vector<string> data = {"2","Livre","Livre002", "Auteur001", "11cm x 17cm", "www.Resurrection.com","Disponible", "485", "1589", "ham" , "ovich Nekhlyudov, who seeks redemption for a sin committed years earlier."};
    cout << "ok2" << endl;
    Revue Revue02(2,"Revue", "Auteur001", "Revue" 
    "11cm x 17cm", "www.Resurrection.com","Disponible", 485, 
    "1589", "ham" , "ovich Nekhlyudov, who seeks redemption for a sin committed years earlier.", "editeur001", 15);
    cout << "ok3" << endl;
    Revue02.AfficherInfo();
    Revue02.reserver();
    Revue02.AfficherInfo();
    Revue02.rendre();
    Revue02.AfficherInfo();
    */
    
    ifstream fs1("../VHS/vhs02.txt");
    VHS vhs02(fs1);
    vhs02.AfficherInfo();
    

    ifstream fs2("../VHS/vhs01.txt");
    VHS vhs01(fs2);
    vhs01.AfficherInfo();
    #endif



    vector<string> data = {"2", "CD02", "Auteur001", "11cm x 17cm", "www.cd01.com","12h","Prod", "485", "titre"};
    CD cd01(data);
    cd01.AfficherInfo();
    ofstream fs2("../CD/cd02.txt");
    cd01.SaveToFile(fs2);

    cout << "Info cd 2 :" << endl;
    ifstream fs1("../CD/cd01.txt");
    CD cd02(fs1);
    cd02.AfficherInfo();
    //dvd01.vendre();
    //dvd01.vendre();
    //dvd01.AfficherInfo();


    ifstream fs3("../Revues/Revue02.txt");
    Revue Revue01(fs3);
    Revue01.AfficherInfo();
    Revue01.reserver();
    Revue01.AfficherInfo();
    Revue01.rendre();
    Revue01.AfficherInfo();


    return 0;
}
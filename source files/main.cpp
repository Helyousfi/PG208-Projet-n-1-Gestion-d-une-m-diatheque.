#include "..\header files\Revue.h"
#include "..\header files\CD.h"
#include "..\header files\Interface.h"
#include<limits>
/*

int main()
{
    /*#if 0
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


    Livre Livre3 ("ca","Hamza","74","Prog","w.g.c","74","2010","ar","aa");
    Livre3.SaveToFile("../Livres/Livre03.txt");
    Livre3.AfficherInfoLivre();

    Revue Revue1;
    ifstream fs("../Revues/Revue02.txt");
    Revue1.LoadFromFile(fs);
    Revue1.AfficherInfo();
/*


    Revue Revue1;
    Revue1.Pages(25);
    Revue1.Editeur("Editeur01");
    cout << Revue1.getEditeur() << endl;
    //Revue1.AfficherInfo();



/*
    ifstream fs("../Ressources/Res001.txt");
    Ressource Res001(fs);
    Res001.AfficherInfo();
    Res001.reserver();
*/
    /*Revue Revue1;
    ofstream fs1("../Ressources/Res003.txt");
    Revue1.SaveToFile(fs1);
    Revue1.AfficherInfo();
  /*Res001.rendre();
    Res001.AfficherInfo();
    ifstream fs1("../Ressources/Res001.txt");
    Revue Res001(fs1);
    cout << Res001.getCopies() << endl;
    Res001.AfficherInfo();
*/


    /*ifstream fs1("../Revues/Revue02.txt");
    Revue Revue01(fs1);
  /*  Revue01.AfficherInfo();
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
    /*
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
    ofstream fs2("../CD/cd07.txt");
    cd01.SaveToFile(fs2);
    //dvd01.vendre();
    //dvd01.vendre();
    //dvd01.AfficherInfo();*/
  /*  Interface i;

    i.LoadFromFile("../Livres/Livre02.txt");
    i.LoadFromFile("../Livres/Livre01.txt");
    i.LoadFromFile("../VHS/vhs01.txt");


    printf("-------------------------------------------") ;
    i.LoadFromFile("../VHS/vhs02.txt");

    i.LoadFromFile("../CD/cd07.txt");

    i.LoadFromFile("../Revues/Revue02.txt");

    i.AfficherInfo_base_donnee();

    printf("--------------------------------------------");

    printf("\n\n\n\n\n\n\n\n\n");
      //i.AfficherInfo_recherche();
    i.SearchChaine("Resurrection");

    i.AfficherInfo_recherche();
    printf("\n\n\n\n\n\n\n\n\n");
    i.SearchChaine("Auteur001");

    i.AfficherInfo_recherche();
    printf("\n\n\n\n\n\n\n\n\n");
    /*i.Clear();
    i.AfficherInfo_recherche();
    */
    //i.Delete_ID("RES-000002");
  /*  i.Reset();*/
  /*  i.AfficherInfo_base_donnee();
    return 0;
}*/



/*#include "mediath.h"
#include <typeinfo>
#include<limits>*/

using namespace std;

int flag = 0 ;

int main()
{
   Interface* M;
   M = new Interface();

   string id ;
   string type;
   string ctrlf;
   string file_load;
   string file_save;

   int choice ;
   int lol ;


   if (flag ==0)
   {
       flag = 1;
       cout << "+-----------------------------+" << endl;
       cout << "|Library database manager V0.0|" << endl;
       cout << "|Programmed by :              |" << endl;
       cout << "|EL YOUSFI Hamza              |" << endl;
       cout << "|&                            |" << endl;
       cout << "|AHARRAM Souhayl              |" << endl;
       cout << "+-----------------------------+" << endl;
   }
   while (choice !=9)
   {
        cout << "" << endl;
        cout <<"+-----------+" << endl;
        cout <<"| Main menu |:" << endl;
        cout <<"+-----------+" << endl;
        cout << "" << endl;
        cout << "1.Add a new object"<< endl ;
        cout << "2.Load items from a text file" << endl;
        cout << "3.Search for an object"<< endl ;
        cout << "4.Clear log" << endl ;
        cout << "5.Display all items at the database (items's type and id)" << endl;
        cout << "6.Delete an item" << endl;
        cout << "7.Save current items" << endl;
        cout << "8.Reset the database" << endl;
        cout << "9.Exit" << endl ;

        cin >> choice ;

        while(1)
            {
            if(cin.fail())
                {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<< "You have entered wrong input"<<endl;
                cout << "Please enter a valid choice :" << endl;
                cin >> choice ;
                }
            if(!cin.fail())
            break;
            }

        cout << "--------------------------------------" << endl;

        if ((choice<1) | (choice>8)) //Not working
        {
            cout << "Please enter a valid choice" << endl;
            flag = 1 ;

            main();
        }

        switch (choice)
        {
            case 1:
                cout << "\nPlease enter the item's type\t"<<endl ;
                cin >> type ;
                M->AddType(type);
                break;
            case 2:
                cout << "\nPlease enter the item's FILE\t"<<endl ;
                cin >> file_load ;
                M->LoadFromFile(file_load);
                break;
            case 3 :
                cout << "\nPlease enter the word \t"<<endl ;
                cin >> ctrlf ;
                M->SearchChaine(ctrlf);
                break;
            case 4 :
                M->Clear();
                break;
            case 5 :
                M->AfficherInfo_base_donnee() ;
                break;
            case 6 :
                cout << "\nPlease enter the item's id\t"<<endl ;
                cin >> id ;
                M->Delete_ID(id) ;
                break ;
            case 7:
                cout << "\nPlease enter the item's FILE\t"<<endl ;
                cin >> file_save ;
                M->SaveToFile(file_save);
                break;
            case 8:
                M->Reset();
                break;
            /*case 9:
                M->Bye() ; //No choice still need to be coded
                break;*/
        }

    }

    return 0;
}

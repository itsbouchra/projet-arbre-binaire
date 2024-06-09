#include <iostream>


    typedef struct noeud{
        int data;
        struct noeud *gauche;
        struct noeud *droite;
            }noeud;

   typedef struct arbre{
        noeud *racine;
            }arbre;

            //   creatiom d'un noeud :

  noeud * creerNœud(int data) {
  noeud* newnoeud = new noeud;
  newnoeud ->data = data;
  newnoeud ->gauche = NULL;
  newnoeud ->droite = NULL;
return newnoeud ;
}


// creation de l'arbre :

        arbre*creatArbre(){
        arbre*arbre=new arbre;
        arbre->racine=NULL;

        return arbre;}

// tester si l'arbre est vide :


      int arbreVide(noeud* racine){
      return (racine==NULL);
      }

// tester un noeud est une feuille :


     int estFeuille(noeud *racine){
       if(arbreVide(racine)
          return 0;
        return(racine->gauche==NULL && racine->droite==NULL) ;

     }


  // retourne la taille d'un arbre :


  int tailleArbre(noeud *racine){
     if(arbreVide(racine))
        return 0;
        return 1 + tailleArbre(racine->gauche)+ taille(racine->droite)
  }


  // retourne le nombre de feuilles
   int NBfeuilles (noeud * racine){

   if (racine==NULL)
    return 0 ;
   else if (estFeuille(racine))
    return 1;
   return NBfeuilles(racine->gauche)+NBfeuilles(racine->droite);

   }


  // Longueur de cheminement :

  int LC(noeud * racine, int niveau){
  if(racine == NULL)
    return 0;
  return niveau+LC(racine->gauche, niveau+1)+ LC(racine->droite, level +1)
  }


  // fonction qui calcule la profondeur moyenne :

  int PF(noeud *racine){
  return LC(racine,0)/taille(racine);
  }


  // fonction parcours prefixe:

  void prefixe(noeud* racine){
    if(racine==NULL)
        return 0 ;
   std ::cout <<racine->data <<" ->";
   prefixe(racine->gauche);
   prefixe(racine->droite);
  }



  // Ffonction postfixe :

  void postfixe(noeud *racine){
   if(racine==NULL)
    return 0;
   postfixe(racine->gauche);
   postfixe(racine->droite);
   std ::cout << racine->data<< " ->";
  }




  // fonction infixe :

  void infixe(noeud*racine){
    if(racine == NULL)
        return 0;
    infixe(racine->gauche);
    std ::cout << racine->data<< " ->";
    infixe(racine->droite);
  }


// fonction parcourir en largeur :

 void largeur(noeud*racine){
   Tfile
 }



using namespace std;

int main()
{
    return 0;
}

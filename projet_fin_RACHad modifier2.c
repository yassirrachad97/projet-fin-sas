#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

	typedef struct{
		char titre[40];
		int ID;
		char desc[800];
		struct deadlin{
    int jour;
    int mois;
    int annee;
} deadlin;
		char status[60];
	}task;
	//tableau au on va class?s.
	task taches[100];
    int numbTache=0;
    int choix;
    int ID = 1;
    int nombre,i,k;

void AjouterTaches(){
	//printf(" ajouter une tache: \n");
printf("ajouter un titre: \n");
scanf(" %[^\n]",&taches[numbTache].titre);
printf(" ajouter une description: \n");
scanf(" %[^\n]",&taches[numbTache].desc);
printf("tache numero: \n");
//scanf(" %[^\n]",&taches[numbTache].ID);
taches[numbTache].ID=ID;
printf("ajouter jour:\n");
scanf(" %d",&taches[numbTache].deadlin.jour);
printf("ajouter mois:\n");
scanf(" %d",&taches[numbTache].deadlin.mois);
printf("ajouter annee:\n");
scanf(" %d",&taches[numbTache].deadlin.annee);
printf("status: ");
scanf(" %[^\n]",&taches[numbTache].status);
numbTache++;
ID++;
	
	

}
void PlusNvTache(){
	int nombre;
	printf("ajouter un nombre du taches: ");
	scanf("%d",&nombre);
	for( i=0;i<nombre;i++){
	
	 AjouterTaches();
		
	}
	
	
	
	
}
void fonctionInitiale(int i){

	
	printf("Tache ID numero %d :\n", taches[i].ID);
        printf("Titre : %s\n", taches[i].titre);
        printf("Description : %s\n", taches[i].desc);
        printf("jour: %d\n", taches[i].deadlin.jour);
        printf("mois: %d\n", taches[i].deadlin.mois);
        printf("annee: %d\n", taches[i].deadlin.annee);
        printf("Statut : %s\n", taches[i].status);
}
int CherchTache(){
	int di=0;
	int idRecherche=0;
	     int i = 0;
    printf("entrer l'ID de la tache rechercher:  ");
    scanf("%d", &idRecherche);
//     printf("entrer le titre de la tache rechercher:  ");
//     scanf("%c", &taches[ch].titre);

      for ( i = 0; i <numbTache ; i++)
     {

         if (idRecherche == taches[i].ID)
         {
      printf("Tache ID numero %d :\n", taches[i].ID);
        printf("Titre : %s\n", taches[i].titre);
       printf("Description : %s\n", taches[i].desc);
       printf("jour: %d\n", taches[i].deadlin.jour);
        printf("mois: %d\n", taches[i].deadlin.mois);
        printf("annee: %d\n", taches[i].deadlin.annee);
       printf("Statut : %s\n\n", taches[i].status);       
            di=i;
			 break;
         }
        else
         {
            printf("no value");
        }
     }
return di;
}
void AffichnListTach(){
	
	   printf("===========<Liste des taches>===========:\n");
    for ( i = 0; i < numbTache; i++) {
    	fonctionInitiale(i);
//        printf("Tache ID numero %d :\n", taches[i].ID);
//        printf("Titre : %s\n", taches[i].titre);
//        printf("Description : %s\n", taches[i].desc);
//        printf("jour: %d\n", taches[i].deadlin.jour);
//        printf("mois: %d\n", taches[i].deadlin.mois);
//        printf("annee: %d\n", taches[i].deadlin.annee);
//        printf("Statut : %s\n", taches[i].status);
    }
	
	
}
void ModifTache(){
	
        int choix;
        printf("1 pour modifier la description\n");
        printf("2 pour modifier le statut\n");
        printf("3 pour modifier le deadline\n");
        printf("Faites votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entrez la nouvelle description : ");
                scanf("%s", &taches[k].desc);
                break;
            case 2:
                printf("Entrez le nouveau statut : ");
                scanf("%s", &taches[k].status);
                break;
            case 3:
                printf("Entrez le nouveau deadline : ");
                scanf("%d", &taches[k].deadlin);
                break;
            default:
                printf("Choix incorrect\n");
        }
}
	

void SuppTache(){
	int CherchTache();
	  int k;
    printf("Saisissez le numero de la tâche à supprimer : ");
    scanf("%d", &k);

    
        for ( i = k; i < numbTache ; i++) {
            taches[i] = taches[i+1];
        }
      numbTache--;
        printf("Tache supprimee avec succes.\n");
//    } else {
//        printf("Numero de tache non definer\n");
//    }
	
	
}

	

void Statistique(){
	
	
}
void Sortir(){
	
	
	
}	
//void Menu(){
//	//le menu option.
//	printf("-------------<toDoListMenu>-------------\n\n");
//	printf("\t1:ajouter plusieur nouvelle taches.\n");
//	printf("\t2:afficher la liste de toutes les taches.\n");
//	printf("\t3:modifier une tache.\n");
//	printf("\t4:supprimer une taches.\n");
//	printf("\t5:rechecher les taches.\n");
//	printf("\t6:les statistiques.\n");
//	printf("\t7:Au revoir!.\n");
//	//le choix d'utilisateur.
//	printf("entrer votre choix: ");
//	scanf("%d",&choix);


//}

int main(){
	int choix;
do{
	//le menu option.
	printf("-------------<toDoListMenu>-------------\n\n");
	printf("\t1:ajouter plusieur nouvelle taches.\n");
	printf("\t2:afficher la liste de toutes les taches.\n");
	printf("\t3:modifier une tache.\n");
	printf("\t4:supprimer une taches.\n");
	printf("\t5:rechecher les taches.\n");
	printf("\t6:les statistiques.\n");
	printf("\t7:Au revoir!.\n");
	//le choix d'utilisateur.
	printf("entrer votre choix: ");
	scanf("%d",&choix);
	
switch(choix){
		
		    case 1:
		    	PlusNvTache();
			
			
			break;
			
		  case 2:
		  	AffichnListTach();
			
		  
		  
		break;
		  case 3:
		  	ModifTache();
		
		  
		  
		break;
		  case 4:
		  	SuppTache();
			
		  
		break;
		  case 5:
		   CherchTache();
		  
		  
		break;
		  case 6:printf("statistiques");
		break;
		  case 7:printf("sortir.");
		  return 0;
		  	
		break;
		default:printf("vous deverez entrer un nombre defini.\n");

		}		


}	while(1);

	
	
		

		
return 0;
}








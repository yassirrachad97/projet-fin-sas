#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
typedef struct{
    int day;
    int month;
    int year;
} date;
	typedef struct{
		char titre[40];
		int ID;
		char desc[800];
		int deadline;
		char status[60];
	}task;
	//tableau au on va class?s.
	task taches[100];
    int numbTache=0;
    int choix;
    int ID;
    int num,i,k;

void AjouterTaches(){

}
void PlusNvTache(){
	printf("ajouter un nombre du taches: ");
	scanf("%d",&num);
	for( i=0;i<num;i++){
	task tache;
printf(" ajouter une tache: \n");
printf("ajouter un titre: \n");
scanf(" %[^\n]",&tache.titre);
printf(" ajouter une description: \n");
scanf(" %[^\n]",&tache.desc);
printf("tache numero: \n");
tache.ID=ID+1;
printf("ajouter deadline:\n");
scanf("%d",&tache.deadline);
printf("status: ");
scanf(" %[^\n]",&tache.status);
taches[numbTache]=tache;
numbTache++;
ID++;	
		
	}
	
	
	
	
}
void AffichnListTach(){
	
	   printf("===========<Liste des taches>===========:\n");
    for ( i = 0; i < numbTache; i++) {
        printf("Tache ID numero %d :\n", taches[i].ID);
        printf("Titre : %s\n", taches[i].titre);
        printf("Description : %s\n", taches[i].desc);
        printf("Deadline : %d\n", taches[i].deadline);
        printf("Statut : %s\n\n", taches[i].status);
    }AjouterTaches();
	
	
}
void ModifTache(){
 printf("Saisissez le numero de la tache a modifier : ");
    scanf("%d", &k);


     if (k >= 0 && k <= numbTache) {
        task taches[k];
        int choix;
        printf("1 pour modifier la description\n");
        printf("2 pour modifier le statut\n");
        printf("3 pour modifier le deadline\n");
        printf("Faites votre choix : ");
        scanf("%d", &choix);
}
        switch (choix) {
            case 1:
                printf("Entrez la nouvelle description : ");
                scanf("%s", taches[k].desc);
                break;
            case 2:
                printf("Entrez le nouveau statut : ");
                scanf("%s", taches[k].status);
                break;
            case 3:
                printf("Entrez le nouveau deadline : ");
                scanf("%d", &taches[k].deadline);
                break;
            default:
                printf("Choix incorrect\n");
        }Menu();
}
	

void SuppTache(){
	  int k;
    printf("Saisissez le numero de la tâche à supprimer : ");
    scanf("%d", &k);

    if (k >= 1 && k <= numbTache) {
        for ( i = k-1; i < numbTache ; i++) {
            task *tache = &taches[i+1];
        }
      numbTache--;
        printf("Tache supprimee avec succes.\n");
    } else {
        printf("Numero de tache non definer\n");
    }
	
	
}
void CherchTache(){



}
	

void Statistique(){
	
	
}
void Sortir(){
	
	
	
}	
void Menu(){
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


}

int main(int argc, char *argv[]){
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
		
		    case 1:{
		    	PlusNvTache();
			break;
			}
			break;
			
		  case 2:{
		  	AffichnListTach();
			break;
		  }
		  
		break;
		  case 3:{
		  	ModifTache();
			break;
		  }
		  
		break;
		  case 4:{
		  	SuppTache();
			break;
		  }
		  
		break;
		  case 5:printf("cherchTache");
		  
		break;
		  case 6:printf("statistiques");
		break;
		  case 7:printf("sortir.");
		  	
		break;
		default:printf("vous deverez entrer un nombre defini.\n");

		}		


}	while(choix!=7 );

	
	
		

		
return 0;
}








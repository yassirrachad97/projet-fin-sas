#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
 
	typedef struct{
		char titre[100];
		int ID;
		char desc[800];
		char status[60];
 
		struct deadlin{
		    int jour;
		    int heures;
		    int minutes;
		} deadlin;
	}task;
 
	task taches[100];
    int numbTache=0;
    int choix;
    int ID = 1;
    int nombre,i;
 
void AjouterTaches(){
 
	printf("ajouter un titre: \n");
	scanf(" %[^\n]",&taches[numbTache].titre);
	printf(" ajouter une description: \n");
	scanf(" %[^\n]",&taches[numbTache].desc);
	taches[numbTache].ID=ID;
	printf("Entrez le deadline : ");
    scanf("%d/%d/%d", &taches[numbTache].deadlin.jour,&taches[numbTache].deadlin.heures,&taches[numbTache].deadlin.minutes);
	strcpy(taches[numbTache].status,"a realiser");
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
 
void affichertache(int i){
 		printf("<======== Tache %d =========> \n \n",i+1);
	    printf("Tache ID : %d :\n", taches[i].ID);
        printf("Titre : %s\n", taches[i].titre);
        printf("Description : %s\n", taches[i].desc);
       	printf("le deadline: %d/%d/%d\n",taches[i].deadlin.jour,taches[i].deadlin.heures,taches[i].deadlin.minutes );
        printf("Statut : %s\n", taches[i].status);
}
 
int CherchTache(){
	int idRecherche;
	int i;
    printf("entrer l'ID de la tache rechercher:  ");
    scanf("%d", &idRecherche);
	for ( i = 0; i <numbTache ; i++)
     {
 		if (idRecherche == taches[i].ID){
 			affichertache( i);
		 } return i;
     }
return -1;
}
int recherche_titre(){
	char titre_recherche[100];
	int i;
    printf("entrer le titre de la tache rechercher:  ");
    scanf("%s", &titre_recherche);
	for ( i = 0; i <numbTache ; i++)
     {
 		if (strcmp(titre_recherche,taches[i].titre)==0) return i;
     }
return -1;
}
 
void trier(){
	int j;
	task temp;
	for(i=0;i<numbTache-1;i++)
	{
		for( j=i+1;j<numbTache;j++){
			if (strcmp(taches[i].titre,taches[j].titre)>0){
				temp=taches[i];
				taches[i]=taches[j];
				taches[j]=temp;
		}	
		}
 
	}
}
 
void affectation(int i,int j){
	task temp;
	temp=taches[i];
	taches[i]=taches[j];
	taches[j]=temp;
}
 
void trier_deadline(){
	int j;
	for(i=0;i<numbTache-1;i++)
	{
		for( j=i+1;j<numbTache;j++){
			if (taches[i].deadlin.jour>=taches[j].deadlin.jour){
				if(taches[i].deadlin.jour==taches[j].deadlin.jour){
					if (taches[i].deadlin.heures>=taches[j].deadlin.heures){
						if (taches[i].deadlin.heures==taches[j].deadlin.heures){
							if (taches[i].deadlin.minutes>taches[j].deadlin.minutes) affectation(i,j);
						}
						else affectation(i,j);
					}
				}
				else affectation(i,j);
			}	
		}
	}
}
 
void AffichnListTach(){
 
	printf("===========<Liste des taches>===========:\n");
    for ( i = 0; i < numbTache; i++) affichertache(i);
}
 
void ModifTache(){
 
        int choix;
        printf("1 pour modifier la description\n");
        printf("2 pour modifier le statut\n");
        printf("3 pour modifier le deadline\n");
        printf("Faites votre choix : ");
        scanf("%d", &choix);
 
        switch (choix) {
            case 1:{
            	int x;
            	x=CherchTache();
            	if(x==-1) printf("id n'existe pas \n");
				else{
					printf("Entrez la nouvelle description : ");
                	scanf("%s", &taches[x].desc);
                	printf("description est modifie \n");
				} 
				break;
			}
            case 2:{
            	int x=CherchTache();
            	if(x==-1) printf("id n'existe pas \n");
				else{
					int choix_status;
					printf("Les status pour la modification \n \n");
					printf("1- pour statut 'a realiser' \n");
                	printf("2- pour statut 'en cours de realiser' \n");
                	printf("3- pour statut 'finalisee' \n");
                	printf("choiser la status \n");
                	scanf("%d",&choix_status);
                	if(choix_status==1){
                		strcpy(taches[x].status,"a realiser");
                		printf("statut est modifie  \n");
					} 
                	else if(choix_status==2){
                		strcpy(taches[x].status,"en cours de realiser");
                		printf("statut est modifie  \n");
					} 
                	else if(choix_status==3){
                		strcpy(taches[x].status,"finalisee");
                		printf("statut est modifie  \n");
					} 
                	else printf("choix incorrect !!! \n");
 
				} 
				break;
			}
 
            case 3:{
            	int x=CherchTache();
            	if(x==-1) printf("id n'existe pas \n");
				else{
					printf("Entrez la nouvelle deadline : ");
                	scanf("%d/%d/%d", &taches[x].deadlin.jour,&taches[x].deadlin.heures,&taches[x].deadlin.minutes);
                	printf("deadline est modifie  \n");
				} 
				break;
			}
 
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
}
 
 void taches_status_statistique(){
 	int nbr_taches_incompletes=0;
 	int nbr_taches_completes=0;
	 for (i=0;i<numbTache;i++){
	 	if(strcmp(taches[i].status,"a realiser")==0 || strcmp(taches[i].status,"en cours de realiser")==0) nbr_taches_incompletes++;
	 	else nbr_taches_completes++;
	 }	
 	printf("nombre des taches incomplettes: %d \n",nbr_taches_incompletes);
 	printf("nombre des taches complettes: %d \n", nbr_taches_completes);
 }
 
void Statistique(){
 printf("<===== Statistiques ======> \n \n");
 printf("nombre des taches existees: %d \n",numbTache);
taches_status_statistique();
 printf("<====== Les Taches =====> \n\n");
 for ( i = 0; i < numbTache; i++) printf("Id tache : %d \n Titre : %s \n Deadline : %d jours \n \n",taches[i].ID,taches[i].titre,taches[i].deadlin.jour);
}
 
void Sortir(){
 
 
 
}	
 
void taches_deadline_3jours(){
	for(i=0;i<numbTache;i++){
		if(taches[i].deadlin.jour<3 || (taches[i].deadlin.jour==3 && taches[i].deadlin.heures==0 && taches[i].deadlin.minutes==0) ) affichertache(i);
	}
}
 
void Afficher(){
	int choix;
        printf("1 pour afficher les taches par order alphabetique\n");
        printf("2 pour pour afficher les taches par deadline\n");
        printf("3 pour pour afficher les taches dont le deadline dans 3 jours ou moins\n");
        printf("Faites votre choix : ");
        scanf("%d", &choix);
 
        switch (choix) {
            case 1:{
            	trier();
            	AffichnListTach();
				break;
			}
            case 2:{
            	trier_deadline();
            	AffichnListTach();
				break;
			}
 
            case 3:{
            	taches_deadline_3jours();
				break;
			}
 
            default:
                printf("Choix incorrect\n");
        }
}
 
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
 
	printf("entrer votre choix: ");
	scanf("%d",&choix);
 
	switch(choix){
 		case 1:{
 			PlusNvTache();
			break;
		 }
		case 2:{
			Afficher();
			break;
		}
		case 3:{
		  	ModifTache();
			break;
		}
		case 4:{
			SuppTache();
			break;
		}
		case 5:{
			CherchTache();
		
			break;
		}
		case 6:{
		  	 Statistique();
			break;
		}
		case 7:{
			printf("quitter le execution !!!!");
			break;
		}
		default:{
			printf("vous deverez entrer un nombre defini.\n");
			break;
		}
 
	}		
 
 
}while(choix!=7);
 
 
 
 
 
 
return 0;
}
 

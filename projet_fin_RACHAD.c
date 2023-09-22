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
		date deadline;
		char status[60];
	}task;
	//tableau au on va class?s.
	task taches[100];
    int numbTache=0;
    int choix;
    int ID=1;
    int num;

void ajouterTaches(){
task tache;
printf(" ajouter une tache: \n");
printf("ajouter un titre: \n");
scanf("%s",&tache.titre);
printf(" ajouter une description: \n");
scanf("%s",&tache.desc);
printf("tache numero: \n");
tache.ID=ID;
printf("ajouter deadline\");
scanf("%d",&tache.deadline);
printf("status: \n");
scanf("%s",&tache.status);
taches[numbTache]=tache;
numbTache++;
ID++;
}
void plusNvTache(){
	printf("ajouter un nombre du taches: ");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
	ajouterTaches();	
		
	}
	
	
	
	
}
void affichnListTach(){
	for(int i =0;i<numbTache;i++){
		printf("<====== tache =====> \n\n");
		printf("id : %d \n titre : %s \n discription : %s \n status : %s \n",taches[i].ID,taches[i].titre,taches[i].desc,taches[i].status);
	}
	
	
}
void suppTache(){
	
	
	
	
}
void cherchTache(){
	
	
	
	
}
void statistique(){
	
	
}
void sortir(){
	
	
	
}	
void menu(){


}

int main(int argc, char *argv[]){
	int choix;
do{
	//le menu option.
	printf("toDoListMenu:\n");
	printf("1:ajouter une nouvelle tache.\n");
	printf("2:ajouter plusieur nouvelle taches.\n");
	printf("3:afficher la liste de toutes les taches.\n");
	printf("4:modifier une tache.\n");
	printf("5:supprimer une taches.\n");
	printf("6:rechecher les taches.\n");
	printf("7:les statistiques.\n");
	printf("8:sortire.\n");
	//le choix d'utilisateur.
	printf("entrer votre choix: ");
	scanf("%d",&choix);
	
switch(choix){
		 case 1:{
		 	ajouterTaches();
			break;
		 }
		 break;
		    case 2:{
		    	plusNvTache();
			break;
			}
			break;
			
		  case 3:{
		  	affichnListTach();
			break;
		  }
		  
		break;
		  case 4:printf("modifTache");
		  
		break;
		  case 5:printf("suppTache");
		  
		break;
		  case 6:printf("cherchTache");
		  
		break;
		  case 7:printf("statistiques");
		break;
		  case 8:printf("sortir.");
		  	
		break;
		default:printf("vous deverez entrer un nombre defini.\n");

		}		


}	while(choix!=8 );

	
	
		

		
return 0;
}








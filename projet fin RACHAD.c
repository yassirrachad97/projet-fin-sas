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
	//tableau au on va class�s.
	task taches[100];
int numbTache;
char sortir;
int choix;


void ajouterTaches(){

printf(" ajouter une tache: \n");
printf("ajouter un titre: \n");
scanf("%s",&task.titre);
printf(" ajouter une description: \n");
scanf("%s",&task.desc);
printf("tache numero )
	
	
	
	
	
	
	
	
	
	
}
void plusNvTache(){
	
	
	
	
}
void affichnListTach(){
	
	
	
}
void suppTache(){
	
	
	
	
}
void cherchTache(){
	
	
	
	
}
void statistique(){
	
	
}
void sortir(){
	
	
	
}	
	
int main(int argc, char *argv[]){
	

	menu();
	
		switch(choix){
		 case 1:ajouterTaches();
		 break;
		  case 2:printf("plusNvTache");
		  
		break;
		  case 3:printf("affichnListTach");
		  
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

		
return 0;
}
	void menu(){

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
	
	


}	while(choix<1|| choix>8 );
}






#include <stdio.h>
#include <stdlib.h>
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


	switch(choix){
	    case 1:nouvelleTache();	
		
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
		  case 8:printf("sortir.");
		  	
		break;
		default:printf("vous deverez entrer un nombre defini.\n");
}
		while(choix<1|| choix>8 );
}
	

	
	
	






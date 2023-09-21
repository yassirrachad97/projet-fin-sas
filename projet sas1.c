#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

int main(int argc, char *argv[]) {
	typedef struct{
		char titre[40];
		int ID;
		char desc[300];
	}task;
	task k;
	int cpt_tache;
	int choix;
	menu();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
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


	switch(choix){
	    case 1:nouvelleTache();
		taches[cpt_tache]=k;
        cpt_tache++;	
	    if(int cpt_tache>100){
		 printf("espace plein !!");
	}
	    	else{
					task choix;
					printf("<=== Ajouter Une Tache ====> \n\n");
					printf("Entrer Titre : ");
					scanf("%s",&k.titre);
					printf("Entrer Description : ");
					scanf("%s",&k.desc);
//					printf("Entrer Deadline : ");
//					scanf("%d/%d%d",&t.deadline.day,&t.deadline.month,t.deadline.year);
//					strcpy(t.status, "arealiser");
					Add_Taches(taches,choix);
					printf("<==== La Tache est Ajouté ====>");
				}
				
		
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
}		while(choix<1|| choix>8 );
}
void nouvelleTache(){

	int cpt_id=0;
    int cpt_tache;
}

void ajouterTaches(task[],task k){

}
	//ajouter une nouvelle tache.
	task [1000]
	 for( int i=0;i<1000;i++){
	 	//ID.
	 	task[i].ID=1
	 	//le titre.
	 	printf("donner un titre a la tache %d.",cpt_tache++);
	 	scanf(" %[^\n]",task.titre);
        //discreption.
        printf("ecrire une discreption a la tache %d.",cpt_tache++);
	 	scanf(" %[^\n]",task.desc);
        
	 }
	
	
}



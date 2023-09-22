#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int day;
    int month;
    int year;
} date;

typedef struct {
    char titre[40];
    int ID;
    char desc[800];
    int deadline;
    char status[60];
} task;

task taches[100];
int numbTache = 0;
int ID = 1;
int i,k;

void ajouterTaches() {
    task tache;
    printf("Ajouter une tache :\n");
    printf("Ajouter un titre : ");
    scanf("%s", tache.titre);
    printf("Ajouter une description : ");
    scanf(" %[^\n]", tache.desc);
    printf("Ajouter un délai : ");
    scanf("%d", &tache.deadline);
    printf("Ajouter un statut : ");
    scanf(" %[^\n]", tache.status);
    tache.ID = ID++;
    taches[numbTache++] = tache;
}

void plusNvTache() {
    int num;
    printf("Ajouter un nombre de taches : ");
    scanf("%d", &num);
    for ( i = 0; i < num; i++) {
        ajouterTaches();
    }
}

void afficherListeTaches() {
    printf("Liste des tâches :\n");
    for ( i = 0; i < numbTache; i++) {
        printf("Tâche %d :\n", taches[i].ID);
        printf("Titre : %s\n", taches[i].titre);
        printf("Description : %s\n", taches[i].desc);
        printf("Deadline : %d\n", taches[i].deadline);
        printf("Statut : %s\n\n", taches[i].status);
    }
}

void modifierTache() {
    int k;
    printf("Saisissez le numéro de la tâche à modifier : ");
    scanf("%d", &k);

    if (k >= 1 && k <= numbTache) {
        task *tache = &taches[k - 1];
        int choix;
        printf("1 pour modifier la description\n");
        printf("2 pour modifier le statut\n");
        printf("3 pour modifier le deadline\n");
        printf("Faites votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entrez la nouvelle description : ");
                scanf(" %[^\n]", tache->desc);
                break;
            case 2:
                printf("Entrez le nouveau statut : ");
                scanf(" %[^\n]", tache->status);
                break;
            case 3:
                printf("Entrez le nouveau deadline : ");
                scanf("%d", &tache->deadline);
                break;
            default:
                printf("Choix incorrect\n");
        }
    } else {
        printf("Numéro de tâche incorrect\n");
    }
}

void supprimerTache() {
    int k;
    printf("Saisissez le numéro de la tâche à supprimer : ");
    scanf("%d", &k);

    if (k >= 1 && k <= numbTache) {
        for ( i = k - 1; i < numbTache - 1; i++) {
            taches[i] = taches[i + 1];
        }
        numbTache--;
        printf("Tâche supprimée avec succès.\n");
    } else {
        printf("Numéro de tâche incorrect\n");
    }
}

int main() {
    int choix;

    do {
        printf("-------------<Menu de gestion des tâches>-------------\n");
        printf("1 : Ajouter une nouvelle tâche\n");
        printf("2 : Ajouter plusieurs nouvelles tâches\n");
        printf("3 : Afficher la liste de toutes les tâches\n");
        printf("4 : Modifier une tâche\n");
        printf("5 : Supprimer une tâche\n");
        printf("6 : Rechercher des tâches\n");
        printf("7 : Statistiques\n");
        printf("8 : Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
        	 ajouterTaches();
            case 1:{
				break;
			}
               
                break;
            case 2:{
            	plusNvTache();
				break;
			}
                
                break;
            case 3:{
            	afficherListeTaches();
				break;
			}
                
                break;
            case 4:{
            	modifierTache();
				break;
			}
                
                break;
            case 5:{
            	 supprimerTache();
				break;
			}
               
                break;
            case 6:
                // À implémenter : Recherche des tâches
                break;
            case 7:
                // À implémenter : Statistiques
                break;
            case 8:
                printf("Au revoir.\n");
                break;
            default:
                printf("Choix incorrect. Veuillez choisir une option valide.\n");
        }
    } while (choix != 8);

    return 0;
}


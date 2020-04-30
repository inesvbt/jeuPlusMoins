#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv)

{

    int nombreMystere = 0, nombreChoisi = 0, compteur = 0, choixDePartie = 1, modeDeJeu = 0, joueur = 0, niveauDeJeu = 0;
    int MAX = 0, MIN = 1;

    srand(time(NULL));

            while (choixDePartie == 1)
            {
                do
                {
                    printf("Bienvenue dans le Jeu Plus ou Moins.\nChoisissez un mode de jeu: 1 joueur, ou 2 joueurs.", modeDeJeu);

                    printf("\n\n\n   $$\\                                            \n");
                    printf("   $$ |          $$$$$$\\  $$\\   $$\\               \n");
                    printf("$$$$$$$$\\       $$  __$$\\ $$ |  $$ |      $$$$$$\\ \n");
                    printf("\\__$$  __|      $$ /  $$ |$$ |  $$ |      \\______|\n");
                    printf("   $$ |         $$ |  $$ |$$ |  $$ |              \n");
                    printf("   \\__|         \\$$$$$$  |\\$$$$$$  |              \n");
                    printf("                 \\______/  \\______/               \n\n\n\n\n");
                    printf("\n\n   1. Mode 1 joueur");
                    printf("\n\n   2. Mode 2 joueurs\n\n");
                    printf("Votre choix:");
                    scanf("%d", &modeDeJeu);

                        if (modeDeJeu == 1)
                        {
                            printf("\nVous avez choisi le mode 1 joueur !\n");
                        }
                        else
                        {
                            printf("Vous avez choisi le mode 2 joueurs !\n");
                            printf("Qui commence ? Joueur 1 ou 2?\n\n");
                            printf("Votre choix: ");
                            scanf ("%d", &joueur);


                            switch (joueur)
                            {
                            case 1:
                                printf("Le joueur 1 commence\n\n");
                                break;
                            case 2:
                                printf("Le joueur 2 commence\n\n");
                                break;
                            default:
                                printf("Il faut choisir entre le joueur 1 et le joueur 2 !!\n\n");
                                break;
                            }
                        }

                printf("\n\nChoisissez le niveau de jeu:\n\n");
                printf("1. Niveau facile de 1 a 100\n");
                printf("2. Niveau intermediaire de 1 a 1000\n");
                printf("3. Niveau difficile de 1 a 10000\n");
                printf("\n\nVotre choix:");
                scanf("%d", &niveauDeJeu);
                printf("\n\nVous avez choisi le niveau %d ", niveauDeJeu);

                    switch (niveauDeJeu)
                    {
                    case 1:
                        printf("de 1 a 100. A vous de jouer !!\n\n");
                        break;
                    case 2:
                        printf("de 1 a 1000. A vous de jouer !!\n\n");
                        break;
                    case 3:
                        printf("de 1 a 10000. A vous de jouer !!\n\n");
                        break;
                    default:
                        printf("Veuillez choisir un niveau: 1 ou 2 ou 3");
                        break;
                    }

                            if(niveauDeJeu==1)
                            {
                                MAX=100;
                                MIN=1;
                            }
                            else if(niveauDeJeu==2)
                            {
                                MAX=1000;
                                MIN=1;
                            }
                            else if(niveauDeJeu==3)
                            {
                                MAX=10000;
                                MIN=1;
                            }
                            else
                            {
                                MAX=100;
                                MIN=1;
                            }


                        if(modeDeJeu==1)
                        {
                            srand(time(NULL));
                            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                        }
                        else if(modeDeJeu==2)
                        {
                            printf("Joueur 1, veuillez entrer un nombre que le joueur 2 devra deviner !\n");
                            scanf("%d",&nombreMystere);
                        }

                            printf("Veuillez entrer un nombre entre %d et %d\n",MIN,MAX);
                            compteur++;

                            do
                            {
                            printf("Quel est le nombre ? ");
                            scanf("%d", &nombreChoisi);

                            if (nombreMystere > nombreChoisi)
                            {
                            printf("C'est plus !\n\n");
                            compteur++;
                            }
                            else if (nombreMystere < nombreChoisi)
                            {
                            printf("C'est moins !\n\n");
                            compteur++;
                            }
                            else
                            {
                            printf("Bravo, vous avez trouve le nombre mystere en %d coups.\n\n", compteur);
                            }
                        }
                        while (nombreChoisi != nombreMystere);



                    printf("Voulez vous rejouer ?\n1.Oui\n2.Non\n");
                    scanf("%d", &choixDePartie);


                } while (choixDePartie == 1);

            }


    return 0;
}

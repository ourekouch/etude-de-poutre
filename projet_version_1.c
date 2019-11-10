#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define Malloc(type,VAL)   (type*)malloc(VAL*sizeof(type))
#define Mallop(type,VAL)   (type**)malloc(VAL*sizeof(type*))

char scanf_char()
{
    char A=0;
    char chaine[2]={'A','\n'};
    scanf("%s",chaine);
    A=chaine[0];
    return A;
}

typedef struct chargement{
    // la strcurure de chargement
    float Px;
    float Py;
    float Xp;

}Chargement;

void choix_1 (){
    float L ;
    int type_ch,nombreChargePonctuel;
    nombreChargePonctuel=5 ;//initialisation
    printf("### Resolution de system isostatique compose d'une poutre reposant  sur 2 appuis ###\n\n");

    printf("choisissez la longueur  de votre poutre : (0 < L < 10 m \n");

    printf("L(m):");
    L=atoi(scanf_char());
    {
        printf("choisissez le type de chargement que vous disirez imposer a la poutre ");
        printf("1  :  chargement ponctuel uniquement (5 chargements )\n");
        printf("2  :  chargement lineraire uniquement (2 chargements )\n");
        printf("3  :  chargement mixte (3 ponctuel et 1 lineaire \n");

        printf("type de chargement:");
        type_ch=(int)scanf_char();
        //test test test
        printf("type de chargement: %d \t%f ",type_ch,L);
        // a suivre ...


    }while (L>10.00 || L<0.00);


    FILE* fichier = NULL;
    fichier = fopen("note de calcule.txt", "w");
    if (fichier != NULL)
    {
    fprintf(fichier,"Longueur de la poutre : %f m", L);
    fprintf(fichier,"\n\n------- Charge ponctuelles imposees : --------\n\n");
    fprintf(fichier,"N \tPix \t\tPiy \t\tXpi\n");
    //for (int i = 0 ; i < nombreChargePonctuel ; i++)
    //{
    //fprintf(fichier,"%d \t%f \t%f \t%f\n", i+1,
    //tableauChargement[i].Px, tableauChargement[i].Py, tableauChargement[i].Xp);
    //}
    // On affiche les réactions d'appuis
    //fprintf(fichier,"\n\n------- Reaction d'appui : --------\n\n");
    //fprintf(fichier,"Ray \t\tRbx \t\tRby\n");
    //fprintf(fichier,"%f \t%f \t%f\n", R.Rya, R.Rxb, R.Ryb);
    fclose(fichier);
    } ;
}

void choix_2 (){
    printf("### Resolution de system isostatique compose d'une poutre reposant  sur 1 appuis ###\n\n");



}

void choix_3 (){
    printf("### Resolution de system isostatique Complexe compose d'un assemblage  de poutre isostatique ###\n\n");




}



void main(){
    char expression ;

    printf("######### \"Logiciel d’étude de poutre isostatique\" ##########\n\n");
    printf("Bonjour\n\n");
	printf("Choisissez le type de systeme que vous desirez resoudre :\n\n");
	printf("0  :  Quitter le programme :\n");
	printf("1  :  Resolution de system isostatique compose d'une poutre reposant  sur 2 appuis ( un appui double et un appui simple )\n");
	printf("2  :  Resolution de system isostatique compose d'une poutre reposant  sur 1 appuis un encastrement a gauche  et libre  a l'autre extremite\n");
	printf("3  :  Resolution de system isostatique Complexe compose d'un assemblage  de poutre isostatique\n\n");
    printf("Entrez votre choix:");
    expression=scanf_char();
    switch (expression)
{
    case '0':
      break;
    case '1':
      choix_1();
      break;
    case '2':
      choix_2();
      break;
    case '3':
      choix_3();
      break;
    default:
      break;
}
    printf("################## Fin de Calcule #####################\n\n");
    getchar();
	}


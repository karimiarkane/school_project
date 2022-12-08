#include "header.h"

int *tab_num_identif= NULL;
int nbr_case = 0;
bool trouv  = false; /* pour indiquer si la presence d'un identificateur dans le tab_num_identif */
int i,c;/* l'emplacement du valeur recherche ou ou doit elle se trouve */
int main()
{
    /******generation du nombre aleatoire*****************/

    int num, bi, h,bs,dernier_element, der_indice,avant_der_indice,s,t=2,
                                                                     repence;
label1:
    do
    {
        srand (t);/*pour que la fonction rand genere different nombre aleatoire*/
        num = (rand() % (9999 -1000 +1))+1000; /* generation d'un nombre aleatoire dans l'interval des nombre de 4 digits [1000 , 9999]*/
        printf("\n num = %d",num);
        printf("\n tab_num_identif@firstly = %p", tab_num_identif);
        /*rechanche le dans le bloc ou l'emplacement apres l'inserer*****************/
        if (nbr_case == 0)/* le tab_num_identif est vide donc la pas de recherche obliger*/
        {
            tab_num_identif = (int* )malloc(sizeof(int));
            printf("\n tab_num_identif@ primaire = %p", tab_num_identif);
            tab_num_identif[0]= num;
            printf("\ntab_num_identif[0] = %d",tab_num_identif[0]);

            nbr_case++;
            printf(" \n  nbre_case = %d , tab_num_identif[0]  = %d", nbr_case,tab_num_identif[0]);
        }
        else   /* tab_num_identif non vide*/
        {
            if (num > tab_num_identif[nbr_case - 1])
            {
                dernier_element = num;
                tab_num_identif=(int*)realloc(tab_num_identif,(nbr_case + 1)*sizeof(int));
                printf("\n@tab apres realoc %p",tab_num_identif);
                nbr_case++;
                tab_num_identif[nbr_case- 1 ]=dernier_element;
                printf("\n tab[%d] = %d ",nbr_case- 1, tab_num_identif[nbr_case- 1]);
            }
            else
            {
                /* recherche{
                initialisation des bande sup et inf */
                bi = 0;
                bs = nbr_case -1  ;
                printf("\n le tab_num_identif n'est pas vide on cherche avec bs = %d et bi =%d",bs, bi);
                do
                {
                    printf("\n bi =%d \n bs = %d ",bi,bs,c,i);

                    c  = (bi + bs ) / 2;
                    printf("\n le centre c=%d ",c);
                    if (tab_num_identif[c] == num)
                    {
                        printf("\n tab[c]=%d ",tab_num_identif[c]);
                        trouv == true;
                        i=c;
                        printf("\n il est egale est on trouver lelement a l'emplacement i = %d ", i);
                    }
                    else
                    {
                        printf("\n il n'est pas egale et en va changer les bande " );
                        if (tab_num_identif[c] > num)
                        {
                            bs = c-1;
                            printf("\n le numero est ineriere est en va changer le bs a %d",bs);
                        }
                        else
                        {
                            bi = c+1;
                            printf("\n le numero est superieure est en va changer le bi a %d",bi);
                        }
                        printf(" \n i = %d",i);
                    }

                }

                while (trouv == false && bi <=bs );

                if (bi > bs )
                {
                    i= bi;
                    printf("\n on  a pas trouver lelement mais l'emplacement i = %d ", i);
                }

                /* fin de la recherche */
                if (trouv == false )
                {
                    printf("\n l'element n'est pas dans le tab_num_identif donc en va l'inserer");
                    der_indice = nbr_case -1;
                    printf("\nder_indc = %d",der_indice);
                    dernier_element = tab_num_identif[der_indice ];
                    printf("\nder_elemt = %d",tab_num_identif[der_indice]);
                    while(tab_num_identif[der_indice] != tab_num_identif[i])
                    {
                        tab_num_identif[der_indice] = tab_num_identif[der_indice - 1 ];
                        printf("\nle decalage : tab[%d] = tab[%d] ,%d,%d",der_indice,der_indice -s, tab_num_identif[der_indice]),tab_num_identif[der_indice - s ];

                        der_indice--;
                    }
                    tab_num_identif[i] = num;
                    printf("\n tab[%d] = %d ",i, tab_num_identif[i]);

                    tab_num_identif=(int*)realloc(tab_num_identif,(nbr_case + 1)*sizeof(int));
                    printf("\n@tab apres realoc %p",tab_num_identif);
                    nbr_case++;
                    tab_num_identif[nbr_case- 1 ]=dernier_element;
                    printf("\n tab[%d] = %d ",nbr_case- 1, tab_num_identif[nbr_case- 1]);
                }

                else goto label1;
            }



        }
        t = t+1;



 for(h = 0; h<=nbr_case-1; h++)
    {
        printf(" \ntab_num_identif[%d]=%d",h,tab_num_identif[h]);
    }
  printf("\n voulez vous ajoutez un nombre ?  0/1");
        scanf("%d",&repence)   ;
    }
    while(repence == 1);
    for(h = 0; h<=nbr_case-1; h++)
    {
        printf("tab_num_identif[%d]=%d",h,tab_num_identif[h]);
    }


}


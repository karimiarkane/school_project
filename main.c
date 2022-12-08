#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num_class;int i =1;
    int t=1;
    int pre_annee = 0 ;
    int deux_annee=0;
    int trois_annee=0;
    int quat_annee=0;
    int cinq_annee=0;
    int prep=0;

    while(i<=18)
    {
        srand(t);

regenerer:
        num_class = rand()%6;
        printf("\n random = %d",num_class);
        if (num_class == 1)
        {
            pre_annee++;
            printf("\n l'etudiant est un etudiant de %d annee",num_class);
            printf("\n donc \n le nbr d'etudiant devient %d",pre_annee);
            if (pre_annee > 3)
            {
                printf("\n le nbr n'est pas genere goto regenrer");
                goto regenerer;
            }
        }
        else
        {
            if (num_class == 2)
            {
                deux_annee ++;
                printf("\n l'etudiant est un etudiant de %d annee",num_class);
                printf("\n donc \n le nbr d'etudiant devient %d",deux_annee);
                if (deux_annee > 3)
                {
                    printf("\n le nbr n'est pas genere goto regenrer");
                    goto regenerer;
                }
            }
            else
            {
                if( num_class == 3)
                {
                    trois_annee ++;
                    printf("\n l'etudiant est un etudiant de %d annee",num_class);
                    printf("\n donc \n le nbr d'etudiant devient %d",trois_annee);
                    if (trois_annee > 3)
                    {
                        printf("\n le nbr n'est pas genere goto regenrer");
                        goto regenerer;
                    }
                }
                else
                {
                    if (num_class == 4)
                    {
                        quat_annee ++;
                        printf("\n l'etudiant est un etudiant de %d annee",num_class);
                        printf("\n donc \n le nbr d'etudiant devient %d",quat_annee);
                        if (quat_annee > 3)
                        {
                            printf("\n le nbr n'est pas genere goto regenrer");
                            goto regenerer;
                        }
                    }
                    else
                    {
                        if (num_class == 5)
                        {
                            cinq_annee ++;
                            printf("\n l'etudiant est un etudiant de %d annee",num_class);
                            printf("\n donc \n le nbr d'etudiant devient %d",cinq_annee);
                            if (cinq_annee > 3)
                            {
                                printf("\n le nbr n'est pas genere goto regenrer");
                                goto regenerer;
                            }
                        }
                        else
                        {
                            prep++;
                            printf("\n l'etudiant est un etudiant de %d annee",num_class);
                            printf("\n donc \n le nbr d'etudiant devient %d",prep);
                            if (prep > 3)
                            {
                                printf("\n le nbr n'est pas genere goto regenrer");
                                goto regenerer;
                            }
                        }
                    }
                }
            }
        }
        printf("\n----------------------------");
        printf("\n le numero rand en sorti est %d ",num_class );
        t++;
        i++;
        printf("\n nbr d'etudiant generer correctement  est %d",i-1);
        printf("\n----------------------------");

    }
}



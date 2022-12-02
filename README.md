# school_project
This project aims to manage the hierarchy of students in a school and their marks using file structure and some other data structure in order to practice what we learned

On désire répertorier les informations scolaires des élèves d’une école primaire dans un fichier
binaire de type TOVC avec accès accéléré par index.
Un élève est enregistré avec les informations suivantes :
 Un numéro d’identification unique composé de 4 caractères
 Un numéro identifiant la classe, composé de :
o L’année de scolarisation sur un caractère (un numéro et P pour année
préparative)
o Le numéro de la salle (séquentiel par année ou séquentiel pour toute l’école).
 Le nom et prénom de taille variable.
 Le genre sur un caractère.
 Un tableau des notes de matières selon l’ordre alphabétique correspondant à l’année.
Le fichier est ordonné hiérarchiquement selon le numéro correspondant à la classe et le nom et
prénom de l’élève.
 Questions :
1. Construire la machine abstraite correspondant à ce fichier et créer votre fichier en suivant les
instructions ci‐dessous :
a. Générer aléatoirement le numéro d’identification de l’élève.
b. Générer aléatoirement l’identifiant de la classe.
c. Générer aléatoirement deux nombres pour 6 années* 100. Faites correspondre ces
deux nombres aux noms figurant dans deux fichiers textes de noms prénoms algériens
et genre, séparés par des virgules, que vous devez construire. Ces derniers sont
chargés en MC pour le traitement.
d. Une suite de notes selon l’année correspondant aux matières, de chaque année,
récupérées à partir d’un fichier texte.

2. Implémenter les fonctions d’insertion d’un élève, de mise à jour et de suppression.
3. Le fichier précédent représente l’année en cours. Chaque année est marquée par l’archivage
des résultats des élèves.

2
a. Comment devez‐vous procéder pour construire un fichier de dossiers scolaires par
élève comprenant les années de scolarisation par élève et la moyenne de passage.
Quelle sera la clé ? quel type du modèle allez‐vous choisir ?
b. On veut améliorer l’accès au fichier archive grâce à la construction d’un index basé sur
les moyennes adapté à la recherche par intervalle. Pour cela il faut noter pour chaque
bloc ou nombre de blocs la moyenne min et max. (noter que les enregistrements ne
sont pas triés par moyenne).
i. Quel type d’index choisir ?
ii. Implémenter la méthode de création et ajouter les mises à jour nécessaires
dans les fonctions précédemment créées.

4. On veut simuler 5 années de scolarisation ainsi que l’archivage. Construire le fichier d’élèves
de l’année en cours puis archivez le dans le deuxième fichier archive.
a. Quel est le coût de l’archivage.
b. Lister les élèves ayant obtenu une moyenne supérieure à 12 sur les 5 années.
5. Un transfert d’un élève est marqué par la suppression de l’élève de l’école d’origine et l’ajout
de sont dossier dans le fichier initial et le fichier archive. Créer la fonction correspondante.
6. Créer un menu pour l’ensemble des fonctions permettant la manipulation du fichier initial :
création, ajout, mise à jour et suppression ainsi que l’archivage.

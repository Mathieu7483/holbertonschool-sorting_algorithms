<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/img/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.

# 📊 Projet : Algorithmes de Tri et Notation Big O
Ce projet est une exploration approfondie des algorithmes de tri et de la notation Big O en C. Il vise à fournir une compréhension pratique et théorique des différentes méthodes de tri, de leur efficacité et de la manière d'analyser la complexité temporelle des algorithmes.

# 📚 Table des Matières
Contexte et Objectifs du Projet

Ressources et Apprentissages Clés

Exigences Générales

Structures de Données et Fonctions Utilitaires

Concepts Abordés

Tâches Réalisées

Compilation

Auteur

# 💡 Contexte et Objectifs du Projet
Ce projet est conçu pour être réalisé en binôme, encourageant le pair programming pour les parties obligatoires. C'est une excellente opportunité de collaborer et de renforcer les compétences en programmation et en résolution de problèmes.

Les objectifs d'apprentissage sont les suivants :

Algorithmes de Tri : Connaître au moins quatre algorithmes de tri différents (par exemple, tri à bulles, insertion, sélection, fusion, rapide, etc.).

Notation Big O : Comprendre ce qu'est la notation Big O et comment évaluer la complexité temporelle d'un algorithme.

Choix d'Algorithme : Savoir sélectionner le meilleur algorithme de tri pour un type d'entrée donné.

Tri Stable : Comprendre ce qu'est un algorithme de tri stable.

# 📚 Ressources et Apprentissages Clés
Ce projet s'appuie sur les ressources suivantes pour une compréhension solide :

Algorithmes de Tri : Principes de base et fonctionnement des différents algorithmes.

Notation Big O : Introduction à la complexité algorithmique et à son évaluation.

Visualisations : Utilisation d'animations pour mieux comprendre le comportement des algorithmes de tri.

# ✅ Exigences Générales
Ce projet est soumis aux exigences rigoureuses suivantes :

Éditeurs Autorisés : vi, vim, emacs.

Environnement de Compilation : Ubuntu 20.04 LTS.

Compilateur C : gcc, avec les options -Wall -Werror -Wextra -pedantic -std=gnu89.

Fin de Fichier : Tous les fichiers doivent se terminer par une nouvelle ligne.

Fichier README.md : Obligatoire à la racine du dépôt.

Style de Code : Strict respect du style Betty, vérifié par betty-style.pl et betty-doc.pl.

Variables Globales : Interdites.

Nombre de Fonctions par Fichier : Maximum 5 fonctions par fichier.

Bibliothèque Standard C : Interdite, sauf indication contraire. Les fonctions comme printf, puts sont totalement interdites (sauf pour les fonctions utilitaires fournies).

Fichiers main.c : Les fichiers de test ne doivent pas être poussés dans le dépôt principal.

Fichier d'En-tête (sort.h) : Doit inclure les prototypes de toutes les fonctions du projet, y compris print_array et print_list. Il doit être protégé contre les inclusions multiples (include guarded).

Tri de listes/tableaux : Une liste/un tableau n'a pas besoin d'être trié si sa taille est inférieure à 2.

# 📝 Structures de Données et Fonctions Utilitaires
Pour ce projet, les fonctions d'affichage print_array et print_list sont fournies pour faciliter les tests et la visualisation. La structure de données pour les listes doublement chaînées est également définie.
```
Fonctions d'Affichage
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```c
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

Structure de Liste Doublement Chaînée
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

# 📊 Concepts Abordés
Ce projet met l'accent sur la compréhension et l'application des concepts suivants :

Algorithmes de Tri : Implémentation de différentes approches pour ordonner des données.

Notation Big O : Analyse de la complexité temporelle et spatiale des algorithmes (ex : O(1), O(n), O(n^2), O(log(n)), O(nlog(n))). Utilisation de la notation "courte" (sans constantes).

Stabilité d'un Algorithme de Tri : Comprendre quand un algorithme préserve l'ordre relatif des éléments égaux.

# 🚀 Tâches Réalisées
Cette section listerait les différentes fonctions de tri implémentées, avec leurs prototypes et les fichiers correspondants. (Les tâches spécifiques ne sont pas fournies dans ce contexte, mais seraient ajoutées ici).
Cette section détaille les différentes fonctions de tri implémentées dans ce projet :

0. Bubble sort
Objectif : Trier un tableau d'entiers par ordre croissant en utilisant l'algorithme de tri à bulles.

Prototype : void bubble_sort(int *array, size_t size);

Affichage : Le tableau est imprimé après chaque échange d'éléments.

Complexité Big O : Les notations Big O (meilleur, moyen, pire cas) sont écrites dans le fichier 0-O.

Fichiers : 0-bubble_sort.c, 0-O

1. Insertion sort
Objectif : Trier une liste doublement chaînée d'entiers par ordre croissant en utilisant l'algorithme de tri par insertion.

Prototype : void insertion_sort_list(listint_t **list);

Contrainte : Interdiction de modifier la valeur n d'un nœud ; les nœuds eux-mêmes doivent être échangés.

Affichage : La liste est imprimée après chaque échange d'éléments.

Complexité Big O : Les notations Big O (meilleur, moyen, pire cas) sont écrites dans le fichier 1-O.

Fichiers : 1-insertion_sort_list.c, 1-O

2. Selection sort
Objectif : Trier un tableau d'entiers par ordre croissant en utilisant l'algorithme de tri par sélection.

Prototype : void selection_sort(int *array, size_t size);

Affichage : Le tableau est imprimé après chaque échange d'éléments.

Complexité Big O : Les notations Big O (meilleur, moyen, pire cas) sont écrites dans le fichier 2-O.

Fichiers : 2-selection_sort.c, 2-O

3. Quick sort
Objectif : Trier un tableau d'entiers par ordre croissant en utilisant l'algorithme de tri rapide (Quick sort).

Prototype : void quick_sort(int *array, size_t size);

Implémentation : Utilise le schéma de partitionnement de Lomuto. Le pivot est toujours le dernier élément de la partition triée.

Affichage : Le tableau est imprimé après chaque échange d'éléments.

Complexité Big O : Les notations Big O (meilleur, moyen, pire cas) sont écrites dans le fichier 3-O.

Fichiers : 3-quick_sort.c, 3-O

# ⚙️ Compilation
Les fichiers de ce projet seront compilés à l'aide de gcc avec les options suivantes :

```Bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_file_io_program
```

Verification des fuites de mémoire à l'aide de la commande
```Bash
valgrind --leak-check=full ./mon_programme
```

# ✍️ Auteur
[Mathieu GODALIER](https://github.com/Mathieu7483) - Elève en programmation à la Holberton School

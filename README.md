# Libft

Bienvenue dans **libft** ! 🎉 Ce projet marque le début de mon aventure à l’École 42.
L’objectif ? Recréer en C une **bibliothèque de fonctions usuelles**, pour apprendre à coder proprement, gérer la mémoire et comprendre en profondeur le fonctionnement des bases du langage.

---

## 📝 Description du projet

La **Libft** est une bibliothèque personnelle en C regroupant des fonctions standards (issues de la libc) ainsi que des fonctions supplémentaires.
Elle servira de socle à la majorité des futurs projets à 42, permettant de gagner du temps tout en réutilisant un code propre et robuste.

---

## 📚 Fonctions principales

### 🔹 Partie 1 – Fonctions de la libc (recodage)

* Gestion mémoire : `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* Chaînes de caractères : `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
* Conversions : `ft_atoi`
* Tests de caractères : `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* Transformations : `ft_toupper`, `ft_tolower`

### 🔹 Partie 2 – Fonctions supplémentaires

* Allocation mémoire : `ft_memalloc`, `ft_memdel`
* Chaînes de caractères dynamiques : `ft_strnew`, `ft_strdel`, `ft_strclr`
* Fonctions d’itération : `ft_striter`, `ft_striteri`, `ft_strmap`, `ft_strmapi`
* Comparaisons & manipulations : `ft_strequ`, `ft_strnequ`, `ft_strsub`, `ft_strjoin`, `ft_strtrim`, `ft_strsplit`
* Conversion : `ft_itoa`
* Affichage : `ft_putchar`, `ft_putstr`, `ft_putendl`, `ft_putnbr` (+ leurs versions avec file descriptor : `_fd`)

### 🔹 Partie bonus (Listes chaînées)

* Création & gestion de listes : `ft_lstnew`, `ft_lstdelone`, `ft_lstdel`, `ft_lstadd`, `ft_lstiter`, `ft_lstmap`

---

## 🛠️ Utilisation

### Compilation

La bibliothèque est générée sous forme de fichier **libft.a** grâce au Makefile.

Commandes disponibles :

```bash
# Compiler la bibliothèque
make

# Supprimer les fichiers objets
make clean

# Supprimer les fichiers objets + la librairie
make fclean

# Recompiler tout
make re
```

### Exemple d’utilisation

```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, 42!";
    int len = ft_strlen(str);
    printf("La longueur de la chaîne est : %d\n", len);
    return (0);
}
```

---

## 🚀 Objectifs pédagogiques

Ce projet m’a permis de : \n
✅ Approfondir ma maîtrise du langage **C**. \n
✅ Comprendre la gestion fine de la **mémoire** et des **pointeurs**. \n
✅ Utiliser les **Makefiles** pour automatiser la compilation. \n
✅ Structurer un projet réutilisable dans tous mes futurs travaux.

---

## 🤝 Contribution

Ce projet est développé dans le cadre de ma formation à 42 Lyon.
Les suggestions d’amélioration sont toujours les bienvenues !

---

## 🛡️ Licence

Projet réalisé dans le cadre de l’École 42.
Libre d’utilisation et de modification pour l’apprentissage.

---

✨ Merci d’avoir consulté mon projet Libft ! 🚀

Voici le fichier **README.md** formaté :  

---

# **Libft - Bibliothèque C Personnalisée**  

## **📖 Description**  
Libft est une bibliothèque standard personnalisée en C, créée dans le cadre du programme 42. Elle réimplémente plusieurs fonctions de la bibliothèque standard C ainsi que des fonctions utilitaires supplémentaires, facilitant le développement de projets plus complexes.  

---

## **⚙️ Installation**  

1. **Cloner le dépôt GitHub :**  
   ```bash
   git clone git@github.com:besrofex/libft42.git
   cd libft42
   ```

2. **Compiler la bibliothèque :**  
   ```bash
   make
   ```

3. **Inclure la bibliothèque dans un projet personnel :**  
   - Ajouter `libft.a` au fichier de compilation :  
     ```bash
     gcc -Wall -Wextra -Werror main.c libft.a -o main
     ```

---

## **🚀 Fonctionnalités**  

### **1. Gestion de chaînes de caractères**  
| Fonction       | Description                          |
|----------------|--------------------------------------|
| `ft_strlen`    | Calcule la longueur d'une chaîne.   |
| `ft_strcpy`    | Copie une chaîne dans une autre.    |
| `ft_strdup`    | Duplique une chaîne.                |
| `ft_strcmp`    | Compare deux chaînes de caractères. |

### **2. Gestion de la mémoire**  
| Fonction       | Description                          |
|----------------|--------------------------------------|
| `ft_memset`    | Remplit un bloc de mémoire.         |
| `ft_bzero`     | Efface un bloc de mémoire.          |
| `ft_memcpy`    | Copie un bloc de mémoire.           |
| `ft_memmove`   | Déplace un bloc de mémoire.         |

### **3. Conversion de types**  
| Fonction       | Description                          |
|----------------|--------------------------------------|
| `ft_atoi`      | Convertit une chaîne en entier.     |
| `ft_itoa`      | Convertit un entier en chaîne.      |

### **4. Gestion des listes chaînées**  
| Fonction       | Description                          |
|----------------|--------------------------------------|
| `ft_lstnew`    | Crée un nouvel élément de liste.    |
| `ft_lstadd`    | Ajoute un élément en début de liste.|
| `ft_lstdel`    | Supprime un élément de liste.       |

---

## **💻 Utilisation**  

### **Exemple : Utilisation de `ft_strlen`**  

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, Libft!";
    printf("Longueur de la chaîne : %zu\n", ft_strlen(str));
    return 0;
}
```

Compile avec :  

```bash
gcc -Wall -Wextra -Werror main.c libft.a -o main
./main
```

---

## **👨‍💻 Auteur**  
- **(besrofex)** - Développeur principal  

---

## **📜 Licence**  
Ce projet est sous licence MIT.  

---

Colle ce contenu dans un fichier **README.md** à la racine de ton dépôt GitHub ! 🚀

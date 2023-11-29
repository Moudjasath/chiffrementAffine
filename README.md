# chiffrement Affine
Ce projet contient un code de chiffrement affine en C++. Le chiffrement affine est un chiffrement symétrique simple qui utilise deux clés, a et b. La clé a est un nombre entier qui représente le nombre de positions que la lettre est décalée dans l'alphabet. La clé b est un nombre entier qui représente l'addition ou la soustraction effectuée sur la lettre après le décalage.
Comment utiliser le code
Le programme vous demandera de saisir les clés a et b. Une fois que vous avez saisi les clés, le programme vous demandera de saisir le message à chiffrer. Le message chiffré sera alors affiché.

Exemple

Supposons que vous souhaitiez chiffrer le message "Hello, world!" avec les clés a=3 et b=2. Pour ce faire, vous exécuteriez le programme avec les commandes suivantes :

Le programme vous demandera de saisir les clés suivantes :
Le programme vous demandera de saisir le message à chiffrer :
Entrez le message à chiffrer: Hello, world!
Entrez la clé a: 3
Entrez la clé b: 2
Le message chiffré sera alors affiché :
Le message chiffré est: Khoor, zruog!
Explication du code
Le code commence par déclarer les constantes suivantes :

const int ALPHABET_SIZE = 26;
Cette constante représente la taille de l'alphabet. Dans ce cas, l'alphabet est de 26 lettres.

Le programme demande ensuite à l'utilisateur de saisir le message à chiffré;
Le programme demande ensuite à l'utilisateur de saisir les clés a et b ;
Le programme utilise une boucle for pour parcourir chaque lettre du message. Pour chaque lettre, le programme convertit la lettre en son code numérique en soustrayant 'a' de la lettre. Le programme utilise ensuite la formule suivante pour chiffrer la lettre :

code = (a * code + b) % ALPHABET_SIZE;
Cette formule décale la lettre de a positions dans l'alphabet, puis ajoute b à la lettre. Enfin, le programme convertit le code numérique de la lettre en lettre en ajoutant 'a' au code.

Enfin, le programme affiche le message chiffré :

cout << "Le message chiffré est: " << message << endl
![Capture d’écran (2)](https://github.com/Moudjasath/chiffrementAffine/assets/140810316/17bbe0a9-8c80-4a8f-85c6-f6283cebe930)

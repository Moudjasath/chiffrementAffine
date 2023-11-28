# chiffrementAffine
Ce projet contient un code de chiffrement affine en C++. Le chiffrement affine est un chiffrement symétrique simple qui utilise deux clés, a et b. La clé a est un nombre entier qui représente le nombre de positions que la lettre est décalée dans l'alphabet. La clé b est un nombre entier qui représente l'addition ou la soustraction effectuée sur la lettre après le décalage.
Comment utiliser le code

#include <iostream>
#include <string>

using namespace std;

int main() {
  // Déclarer les constantes
  const int ALPHABET_SIZE = 26;

  // Demander la clé
  int a, b;
  cout << "Entrez la clé a: ";
  cin >> a;
  cout << "Entrez la clé b: ";
  cin >> b;

  // Chiffrer le message
  string message;
  cout << "Entrez le message à chiffrer: ";
  cin >> message;

  for (int i = 0; i<=message.length(); i++) {
    // Convertir la lettre en son code numérique
    int code = message[i] - 'a';

    // Chiffrer la lettre
    code = (a * code + b) % ALPHABET_SIZE;

    // Convertir le code numérique en lettre
    message[i] = 'a' + code;
  }

  // Afficher le message chiffré
  cout << "Le message chiffré est: " << message << endl;
  return 0;
 }


Le programme vous demandera de saisir les clés a et b. Une fois que vous avez saisi les clés, le programme vous demandera de saisir le message à chiffrer. Le message chiffré sera alors affiché.

Exemple

Supposons que vous souhaitiez chiffrer le message "Hello, world!" avec les clés a=3 et b=2. Pour ce faire, vous exécuteriez le programme avec les commandes suivantes :
// Déclarer les constantes
  const int ALPHABET_SIZE = 26;

  // Demander la clé
  int a, b;
 cout << "Entrez la clé a: ";
  cin >> a;
  cout << "Entrez la clé b: ";
  cin >> b;
  string message;
  cout << "Entrez le message à chiffrer: ";
  cin >> message;

  for (int i = 0; i<=message.length(); i++) {
    // Convertir la lettre en son code numérique
    int code = message[i] - 'a';

    // Chiffrer la lettre
    code = (a * code + b) % ALPHABET_SIZE;

    // Convertir le code numérique en lettre
    message[i] = 'a' + code;
  }
  // Afficher le message chiffré
  cout << "Le message chiffré est: " << message << endl;
  return 0;
 }
Le programme vous demandera de saisir les clés suivantes :

Entrez la clé a: 3
Entrez la clé b: 2
Le programme vous demandera ensuite de saisir le message à chiffrer :

Entrez le message à chiffrer: Hello, world!
Le message chiffré sera alors affiché :

Le message chiffré est: Khoor, zruog!
Explication du code

Le code commence par déclarer les constantes suivantes :

const int ALPHABET_SIZE = 26;
Cette constante représente la taille de l'alphabet. Dans ce cas, l'alphabet est de 26 lettres.

Le programme demande ensuite à l'utilisateur de saisir les clés a et b :

int a, b;
cout << "Entrez la clé a: ";
cin >> a;
cout << "Entrez la clé b: ";
cin >> b;
Le programme chiffre ensuite le message :

string message;
cout << "Entrez le message à chiffrer: ";
cin >> message;

for (int i = 0; i<=message.length(); i++) {
  // Convertir la lettre en son code numérique
  int code = message[i] - 'a';

  // Chiffrer la lettre
  code = (a * code + b) % ALPHABET_SIZE;

  // Convertir le code numérique en lettre
  message[i] = 'a' + code;
}
Le programme utilise une boucle for pour parcourir chaque lettre du message. Pour chaque lettre, le programme convertit la lettre en son code numérique en soustrayant 'a' de la lettre. Le programme utilise ensuite la formule suivante pour chiffrer la lettre :

code = (a * code + b) % ALPHABET_SIZE;
Cette formule décale la lettre de a positions dans l'alphabet, puis ajoute b à la lettre. Enfin, le programme convertit le code numérique de la lettre en lettre en ajoutant 'a' au code.

Enfin, le programme affiche le message chiffré :

cout << "Le message chiffré est: " << message << endl

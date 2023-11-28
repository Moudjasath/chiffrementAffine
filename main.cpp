#include <iostream>
using namespace std;

int modulo(int a, int b) {
    int result = a % b;
    if (result < 0) {
        result += b;
    }
    return result;
}

string encrypt(string message, int a, int b) {
    string encryptedText = "";
    for (char c : message) {
        if (isalpha(c)) {
            char encryptedChar = (toupper(c) - 'A') * a + b;
            encryptedChar = modulo(encryptedChar, 26) + 'A';
            encryptedText += encryptedChar;
        } else {
            encryptedText += c;
        }
    }
    return encryptedText;
}


int main() {
    string message;
    int a, b;

    cout << "Entrez le message à chiffrer : ";
    getline(cin, message);

    cout << "Entrez la valeur de 'a' : ";
    cin >> a;

    cout << "Entrez la valeur de 'b': ";
    cin >> b;

    string encryptedMessage = encrypt(message, a, b);

    cout << "Message chiffré : " << encryptedMessage << endl;

    return 0;
}

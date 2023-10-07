#include <iostream>
#include <string>
using namespace std;

string readText()
{
	string text = "";

	cout << "PLease enter a text to encrypt it: ";
	cin >> text;

	return text;

}

short getAsciiSymbolCode(char symbol)
{
	for (int i = 65; i <= 122; i++)
		if (symbol == char(i))
			return i;
	return -1;
}

string textEncryptor(string text, short EncryptionKey)
{
	string encryptedText = "";

	
	for (int i = 0; i <= text.length() - 1; i++)
	{
		encryptedText += char(getAsciiSymbolCode(text[i]) + EncryptionKey);
	}
	
	return encryptedText;
}

string textDecryptor(string text, short EncryptionKey)
{
	string textAfterEtextncryption = "";
	
	for (int i = 0; i <= text.length() - 1; i++)
	{
		textAfterEtextncryption += char(getAsciiSymbolCode(text[i]) - EncryptionKey);
	}

	return textAfterEtextncryption;
}


int main()
{
	const short EncryptionKey = 2;

	string text = readText();
	cout << "\nText Before Encryption : " << text << "\n";

	text = textEncryptor(text, EncryptionKey);
	cout << "Text After Encryption : " << text << "\n";

	text = textDecryptor(text, EncryptionKey);
	cout << "Text After Decryption : " << text << "\n";

	return 0;
}
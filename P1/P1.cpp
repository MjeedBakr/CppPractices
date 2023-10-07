#include <iostream>
#include <string>
using namespace std;

string readText()
{
	string text = "";

	cout << "PLease enter a text to encrypt it: ";
	getline(cin, text);

	return text;

}

string textEncryptor(string text, short EncryptionKey)
{

	for (int i = 0; i <= text.length() - 1; i++)
	{
		text[i] = char((int)text[i] + EncryptionKey);
	}
	
	return text;
}

string textDecryptor(string text, short EncryptionKey)
{
	
	for (int i = 0; i <= text.length() - 1; i++)
	{
		text[i] = char((int)text[i] - EncryptionKey);
	}

	return text;
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
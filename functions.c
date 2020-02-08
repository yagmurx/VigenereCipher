#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vgn.h"

#define limit 50 //If your letter or sentence has more than 50 character, you should increase this.

//APLHABETINDEX function finds a word's row in the alphabet. It is only finds one letter's index.
//alphabet is the string of alphabet 
//word is a word whose i. letter needed.
//i is the index of queue
//THIS FUNCTION'S OUTPUT IS AN INDEX NUMBER OF A LETTER
int alphabetindex(char alphabet[], char word[], int i)
{
	int a, index;
	
	for(a=0; a<strlen(alphabet); a++)
	{
		
		if(word[i] == alphabet[a])
		{
			index= a;	
		}
	}

return index;
}

//ENCRYPTION function encrypting a word by Method of Vigenere Cipher 
//alphabet is the string of alphabet 
//pass is the word which is wanted encrypting.
//key is key word
//THIS FUNCTION'S OUTPUT IS ENCRYPTED WORD'S POINTER
char* encryption(char alphabet[], char pass[], char key[])
{
	int passindex=0, keyindex=0, stindex=0;
	int i;
	char store[limit];
	for (i=0; i<strlen(pass); i++)
	{
		passindex= alphabetindex(alphabet, pass, i);
		keyindex= alphabetindex(alphabet,key, i%strlen(key));
		
		stindex= (passindex+keyindex) % 26;
		store[i] =  alphabet[stindex];
	}
	
	char *p;
	p = malloc(sizeof(char)*strlen(pass));
	strcpy(p, store);
		
	return p;
}

//DECRYPTION function solves the secret word which was encrypted by Cipher. 
//alphabet is the string of alphabet 
//store is encrypted world
//key is key word
//THIS FUNCTION'S OUTPUT IS DECRYPTED WORD'S POINTER
char* decryption(char alphabet[], char store[], char key[])
{
	int passindex=0, keyindex=0, stindex=0;
	int i;
	char password[limit];
	for (i=0; i<strlen(store); i++)
	{
		keyindex= alphabetindex(alphabet, key, i%strlen(key));
		stindex= alphabetindex(alphabet, store, i);
		
		passindex= ((stindex-keyindex) +26) % 26;
		password[i] =  alphabet[passindex];
	}

	char *p;
	p = malloc(sizeof(char)*strlen(store));
	strcpy(p, password);

	return p;	
}

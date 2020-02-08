#include "vgn.h"

int main(){
	
	char password[limit];
	char key[limit];
	char store[limit];
	char alphabet[26]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	
	printf("Please enter your password \n");
	gets(password);
	printf("Please enter your key word \n");
	gets(key);
	
	char* ps;
	ps= encryption(alphabet, password, key);
	printf("Encrypted Password\n %s\n", ps);
	
	int i;
	for (i=0; i<limit; i++)
	{
		store[i]=ps[0]; //Why ps[0]? Cause I use here pointer's arithmetics. 
		ps++; 
	}
	
	ps= decryption(alphabet, store, key);
	printf("Decrypted Password \n %s", ps);

return 0;
}

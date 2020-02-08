# VigenereCipher
--------//////////////--------
I wrote this program in C for my "Algorithm and Programming I" Lecture Project. I used there functions, pointers and header file. 

December 2019, Electronics Engineering First Class, Gebze Technical University
--------//////////////--------

 *****What is it?******
Vigenere Cipher is the basic cryptology method which is using for message encryption with a keyword. Every character has indexes in our alphabet. Vigenere Cipher uses indexes for encrypting messages. (https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher)

*****Description of Method******
Vigenere Cipher uses a basic algorithm for encryption and decryption.

      P= password’s i. character’s alphabet index
      K= key’s i. character’s alphabet index
      S= Stored data’s i. character’s alphabet index
      Encryption Method
      S = (P+K) mod26
      Decryption Method
      P = (S-K) mod26
      
Why mod26?
Because English Aphabet has 26 characther, if we want to make a Turkish Vigenere Cipher, we should use mod29 for this step. Hence mod26 ‘S’ is always has an alphabet index.

Also I made an inovation in this code. Normally if your word has 12 character and your keyword has only 5, you must write this for 2+ 2/5 times. However I added a mod code for this problem, one time writing is enough now. 

*****User Guide*****
Our only limitation is size of sentence. It is 50 but it will increase easily (with define limit code)
For Vigenere Cipher there are only two input
    • Password
    • Key word
and only one output
    • Store word
  
However for different functions inputs will be different.

//alphabetindex = this function using for converting a character to alphabetic index. For example A is 0, P is 15 etc. ( next page have a list for this index style) This function’s input’s are alphabet, word, and i.
      alphabet = It is a string which include the alphabet.
      word = This function convert this string’s i. element a number.
      i = index of the element which is converting to a number.
      Ex: Word is “GEBZE” and ‘i’ is “3”. Output is “Z”.
This function’s output is index number of character.
 
//encryption: this function using for encrypting passwords. This function’s input’s are alphabet, pass and key.
      alphabet = It is a string which include the alphabet.
      pass = Inputting the password entered by user.
      key = Inputting the key entered by user.
This function’s output is encrypted password’s string’s pointer.
      
//decryption: this function using for decrypting stored password. This function’s input’s are alphabet, store and key.
      alphabet = It is a string which include the alphabet.
      store = It is a string which include encrypted password.
      key = Inputting the key entered by user.
This function’s output is decrypted password’s string’s pointer.

*****Results of Program******
There are an input and output words that founds easily everywhere.
      Password: ATTACKATDAWN
      Key: LEMON
      Encrypted Password: LXFOPVEFRNHR
      
Also I generate an example.
      Password: GEBZETECHNIC
      Key: BUTTERFLY
      Encrypted Password: HYUSIKJNFOCV

Alphabetic Index
0 A
1 B
2 C
3 D
4 E
5 F
6 G
7 H
8 I
9 J
10 K
11 L
12 M
13 N
14 O
15 P
16 Q
17 R
18 S
19 T
20 U
21 V
22 W
23 X
24 Y
25 Z

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "VER.h"

using namespace std;
int main(){

string mess = GetStr();
int len = GetLen(mess);
int rand_k[len]={0};
//Encryption
for(int i = 0;i<len;i++){
    int r = GenRan();
    rand_k[i]=r;
}
cout<<"Your generated keys are :\r\n";
for(int i =0;i<len;i++){
    cout<<(char)rand_k[i];
    cout<<" ";
}
char encr[len];
for(int i = 0;i<len;i++){
    char ch = mess[i];
    ch^=rand_k[i];
    encr[i]=ch;
}
cout<<"\r\nYour encrypted message is:\r\n";
for(int i = 0;i<len;i++){
    cout<<encr[i];
    cout<<" ";
}
//Decryption
mess = GetStr();
len = GetLen(mess);
string key = GetKey();
char decr[len];
for(int i = 0;i<len;i++){
    char ch = mess[i];
    char k = key[i];
    ch^=k;
    decr[i] = ch;
}
cout<<"Your decrypted message is: ";
for(int i = 0;i<len;i++){
    cout<<decr[i];
}
return 0;
}

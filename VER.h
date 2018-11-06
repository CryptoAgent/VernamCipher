#ifndef VER
#define VER

std::string GetStr(){
std::cout<<"\r\nEnter your message\r\n>";
std::string str;
std::cin.sync();
getline(std::cin,str);
return str;
}

int GetLen(std::string str){
int l = 0;
for(int i = 0;str[i]!='\0';i++){
    l++;
}
return l;
}

int GenRan(){
int r = rand();
r%=256;
return r;
}
std::string GetKey(){
std::cout<<"\r\nEnter key for encryption\r\n>";
std::string str;
std::cin.sync();
getline(std::cin,str);
return str;
}

#endif

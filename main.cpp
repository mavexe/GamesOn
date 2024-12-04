#include "main.h"
#include <map>
#include <string>

int Fn(int n);
int value = 0;

int main()
{
    for(int i = 0;i<5;i++){
        std::cout<<"calculate the"<<i;
        int f = Fn(i);
        std::cout<<"result"<<f<<"\n and address is"<<&f;
    }
 return 0;
}

int Fn(int n){
    return n>0 ? n*Fn(n-1):1;
}



#include <iostream>
#include <algorithm>

int s,p,e[100000];

void coz(){
    std::cin>>s>>p;
    for(int i=0;i<s;i++){
        std::cin>>e[i];
    }
    std::sort(e,e+s);
    int cvp=0;
    for(int i=0;i<s;i++){
        if(p>=e[i]){
            cvp++;
            p-=e[i];
        }
    }
    std::cout<<cvp<<std::endl;
}

int main(){
    int tst,i=1;
    std::cin>>tst;
    while(tst--){
        std::cout<<"Case #"<<i<<": ";
        coz();
        ++i;
    }
}
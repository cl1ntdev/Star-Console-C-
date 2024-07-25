

#include <iostream>
using namespace std;
int len = 12;
int firstPart = 1;
int firstPartSpace = 30;
void triangle1(){
    
    for(int i = 0;i<len;i++){//text
        for(int x = 0;x<firstPartSpace;x++){
            cout<<" ";
        }
        for(int j = 0;j<firstPart;j++){
            cout<<"*";
        }
        firstPart+=2;
        firstPartSpace--;
            cout<<"\n";

    }
}

int midlen = 7;
int mid = 60;
int midSpace = 0;
void middle(){
    for(int i =0;i<midlen;i++){
        for(int j = 0;j<midSpace;j++){
            cout<<" ";
        }
        for(int x = 0;x<mid;x++){
            cout<<"*";
        }
        
        cout<<"\n";
        midSpace+=2;
        mid-=4;
        
    }
}

int botSpace = 12;
int botlen =10;
int bot = 35;
int botSideLR = bot/2;
int botSpaceBase = 1;
void bottom(){
    for(int i = 0;i<botlen;i++){
        for(int x = 0;x<botSpace;x++){
            cout<<" ";
        }
        for(int d = 0;d<botSideLR;d++){
            cout<<"*";
        }
        for(int k =0;k<botSpaceBase;k++){
            cout<<" ";
        }
        for(int d = 0;d<botSideLR;d++){
            cout<<"*";
        }
        botSpace--;
        botSpaceBase+=6;
        botSideLR-=2;
        cout<<"\n";
        
       
    }
    
}
int main() {
    triangle1();
    middle();
    bottom();
    
}

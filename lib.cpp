#include "lib.h"
int posizione(char a[20][10], char b[20]){
    for(int i=0;i<10;i++){
        int j=0;
        int c=0;
        while(j<20){
            if(a[j][i]==b[j]){
                c++;
            }
            j++;
        }
        if(c==20){
            return i;
        }
    }
    return -1;
}
void init(char a[20][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            a[j][i]=' ';
        }
    }
}

void init2(char b[20]){
    for(int i=0; i<20; i++){
        b[i]=' ';
    }
}

void inserimento(char a[20][10]){
    for(int i=0;i<10;i++) {
        char c[20];
        init2(c);
        cin >> c;
        for(int j=0;j<20;j++){
            a[j][i]=c[j];
        }
    }
}

void inserimento2(char b[20]){
    cin>>b;
}
  

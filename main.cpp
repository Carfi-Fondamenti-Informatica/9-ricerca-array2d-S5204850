#include <iostream>
#include "lib.h"
using namespace std;



int main() {
    char a[20][10];
    char b[20];
    init(a);
    init2(b);
    inserimento(a);
    inserimento2(b);
    if(posizione(a,b)==-1){
        cout<<"non presente";
    }else{
        cout<<posizione(a,b);
    }
    return 0;
}

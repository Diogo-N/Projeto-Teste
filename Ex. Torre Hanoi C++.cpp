#include <iostream>

using namespace std;

void move_disco(int d, char origem, char destino, char auxiliar){
    if(d==1){
        cout<<"Mover disco "<<d<<" de "<<origem<<" para "<<destino<<endl;
    }else{
        move_disco(d-1,origem,auxiliar,destino);
        cout<<"Mover disco "<<d<<" de "<<origem<<" para "<<destino<<endl;
        move_disco(d-1,auxiliar,destino,origem);
    }
}

int main(){
    int discos = 10;
    move_disco(discos,'A','C','B');
    return 0;
}


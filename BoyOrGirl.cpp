#include <iostream>
#include <string>
#include <set> //adiciona apenas caracteres distintos

using namespace std;

//se é impar é homem
//se é par mulher
//apenas carcteres distindos

int main(){
    string name;
    getline(cin, name); // para ler a linha inteira com espaço
    set<char> distinct_chars;



    for(char n:name){
        distinct_chars.insert(n);

    }
    if(distinct_chars.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
       
    }
    else{
         cout << "IGNORE HIM!" << endl;
    }
    
    

    return 0;
}
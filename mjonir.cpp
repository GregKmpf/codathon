#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        string name;
        int forca;
        cin >> name >> forca;

        if(name=="Thor" || name=="thor"){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }


    }

    return 0;
}
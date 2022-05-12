#include <iostream>
#include <string>

using namespace std;



string encrypt(string text, int key){
    string entext = "";
    for(int i = 0; i < text.size(); i++){
        char l = text[i];
        int n = int(l);
        int ne = n + key;
        char le = char(ne);
        //cout << l << " " << le << endl;
        entext += le;
    }
    return entext;
}


string decrypt(string entext, int key){
    string text = "";
    for (int i = 0; i < entext.size(); i++){
        char l = entext[i];
        int n = int(l);
        int ne = n - key;
        char le = char(ne);
        text += le;
    }
    return text;
}


int main(){
    
    string t = "Hola Mundo";
    string e = encrypt(t, 7);
    string h = decrypt(e, 7);
    cout << e << endl;
    cout << h << endl;
    
    
    return 0;
}


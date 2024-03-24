#include <iostream>
#include <string>
using namespace std;

class basketci{
    private:
    int sayi;
    int asist;
    int rebound;

    public:
    basketci(int sayi2,int asist2,int rebound2){ //constructor olusturma
        sayi = sayi2;
        asist = asist2;
        rebound = rebound2;
    }
    void goster(){
        cout << "sayi: " << sayi << " asist: " << asist << " rebound: " << rebound << endl;
    }

};
int main(){
    basketci alperen(25,12,13); //constructor kullanimi
    alperen.goster();
}

#include <iostream>
#include <string>

// std namespace'i kullanılıyor
using namespace std;

// Ogrenci sınıfı
class Ogrenci {
private:
    string ad;
    int yas;

public:
    // Getterlar
    string getAd() const {
        return ad;
    }

    int getYas() const {
        return yas;
    }

    // Setterlar
    void setAd(const string yeniAd) {
        ad = yeniAd;
    }

    void setYas(int yeniYas) {
        yas = yeniYas;
    }
};

int main() {
    Ogrenci ogrenci1;
    string ad;
    cout << "ogrenci ismi giriniz ";
    cin >> ad;
    cout << "ogrenci yasi giriniz ";
    int yas;
    cin >> yas;
    ogrenci1.setAd(ad);
    ogrenci1.setYas(yas);

    cout << "Ogrenci Adi: " << ogrenci1.getAd() << endl;
    cout << "Ogrenci Yas: " << ogrenci1.getYas() << endl;

    return 0;
}

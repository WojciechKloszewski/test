#include <iostream> //biblioteka c++ input output strumien wejscia, wyjscia z komputera

//#-dyrektywa preprocesora

using namespace std; //aby nie trzeba bylo pisac std::cout std::cin chociaz nie jest to dobra praktyka programistyczna

int main() //blok glowny programu
{
    unsigned int cukierki; //inicjalizacja zmiennej czyli przypisanie jej poczatkowej wartosci
    unsigned int uczniowie; //sredniki gdyz program ignoruje biale znaki oraz enetry zatem ; informuje o koncu lini kompilator
    unsigned int ilekazdy;
    unsigned int ilejasiowi;

    cout<<"Ile cukierkow? \n";
    cin>>cukierki;
    cout<<"Ile uczniow w klasie? \n";
    cin>>uczniowie;

    ilekazdy=cukierki/(uczniowie-1); // = jest znakiem przypisania a nie porownania ; ==jest operatorem porownania
    ilejasiowi=cukierki-ilekazdy*(uczniowie-1);

    cout<<"Kazdy dostal cukierkow: "<<ilekazdy<<endl;
    cout<<"Jasiowi zostalo cukierkow: "<<ilejasiowi<<endl;

    return 0; //konczy funkcje glowna, zwrocenie liczby calkowitej
}

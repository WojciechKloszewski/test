#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()

setlocale(LC_ALL,"");
{
    string login1="ciastko";
    string haslo1="1234";
    string login;
    string haslo;
    string exit;
    unsigned short int proba=3;
    unsigned short int wiek;

    while (proba>0)
{
    cout<<"Podaj login: ";
    cin>>login;
    cout<<"\n Podaj haslo: ";
    cin>>haslo;

    if (login!=login1 || haslo!=haslo1)

    {
        proba-=1;
        cout<<"Bledne haslo lub login. Masz jeszcze "<<proba<<" proby logowania"<<endl;

    }
    else
    {
       proba=0;
    }
}

 if (login!=login1 || haslo!=haslo1)

    {
        cout<<"Zablokowane dalsze mozliwosci logowania do programu"<<endl;

    }

else

    while(exit!="exit")
{
    system("CLS");
    cout<<"Poprawny login i haslo."<<endl;
    cout<<"Podaj swoj wiek: \n";
    cin>>wiek;

    while (!cin)
    {
        cin.clear();
        cin.ignore();
        cout<<"Nie wpisales liczby!";
        cin>>wiek;
    }

    if (wiek<18)
    {
        cout<<"Nie mozesz kupic alkoholu ani papierosw w USA"<<endl;
    }
    else if (wiek>=18 && wiek<21)
    {
        cout<<"Nie mozesz kupic alkoholu ale mozesz kupic papierosy w USA"<<endl;
    }
    else
    {
        cout<<"Mozesz kupic alkohol i papierosy w USA"<<endl;
    }

    cout<<"Jesli chcesz zakonczyc program napisz - exit"<<endl;
    cin>>exit;
}
    return 0;
}

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    int wiek;
    string login="Alibaba";
    string haslo="1234";

    cout<<"Aby przejsc do dalszej czesci programu podaj login i haslo \n";
    cout<<"Podaj login: ";
    cin>>login;
    cout<<"Podaj haslo: ";
    cin>>haslo;

    if ((login!="Alibaba") || (haslo!="1234"))
    {
        cout<<"Niepoprawny login lub haslo \n";
    }

    else
    {
        cout<<"\n";
        cout<<"Podaj swoj wiek: ";
        cin>>wiek;

        if (wiek<18)
        {
        cout<<"Jestes niepelnoletni";
        }
        else if ((wiek>=18) && (wiek<35))
        {
        cout<<"Jestes pelnoletni, ale nie mozesz zostac prezydentem";
        }
        else
        {
        cout<<"Jestes pelnoletni i mozesz zostac prezydentem";
        }

getch();
return 0;
    }
}

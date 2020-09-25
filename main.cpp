#include <iostream>
#include <conio.h>

using namespace std; /*  tworzymy ten fragment kodu aby nie by³o potrzeby pisania std::cout, std::cin itd */

int main()
{
    float x; //liczba zmiennoprzecinkowa
    float y;
    float pole;
    float obwod;

    cout<< "Program obliczajacy pole i obwod prostokata. \n"<<flush ;
    cout<<"Podaj wymiar dluzszego boku:"<< endl;
    cin>>x;
    cout<<"Podaj wymiar krotszego boku:"<<endl;
    cin>>y;

    pole=x*y;
    obwod=2*x+2*y;

    cout<<"Pole prostokata wynosi: " << pole<<" natomiast obwod prostokata wynosi: "<<obwod<<endl;

    getch();
    return 0;
}

#include <iostream>
#include "klasa.h"
using namespace std;
void menu(){
    cout<<" 1 - Trojkat"<< endl;
    cout<<" 2 - Stop"<< endl;
}
int main() {
    double a;
    double b;
    double c;
    char textt[10] = " ";
    char text[10] = " ";
    int o = 0;
    while(o!=2){
        menu();
        cout<<"Wybierz opcje";
        cin >> o;
        if(o==1){
            cout<<"Pierwszy"<<endl;
            triangle(&a,&b,&c);
            cout << endl;
            cout<<"Drogie"<<endl;
            triangle(&a,&b,&c);
            cout << endl;
            Triangle trojkat1(text ,a,b,c);
            Triangle trojkat2(textt ,a,b,c);
            if(a!= 0 && b!= 0 && c!= 0){
                cout<<"Wymiary "<< Triangle::numberFigury()<< " Trojkata "<< endl;
                trojkat1.showSides();
                cout << "Obwod = " << trojkat1.perimeter() << endl;
                cout << "Pole = " << trojkat1.area() << endl;
                trojkat2.showSides();
                cout << "Obwod = " << trojkat2.perimeter() << endl;
                cout << "Pole = " << trojkat2.area() << endl;
                if ( trojkat1.area()> trojkat2.area()) {
                    cout << "Pierwsza figura jest wieksza." << endl;
                } else if (trojkat1.area() < trojkat2.area()) {
                    cout << "Druga figura jest wieksza." << endl;
                } else {
                    cout << "Obie figury maja takie samo pole." << endl;
                }


            }
            else{
                cout<<"Bok nie moze byc 0"<<endl;
            }
        }

        else if ( o == 2 )
        {
            break;
        }
        else {
            cout<<"Zła opcja"<< endl;
        }
    }
    return 0;
}
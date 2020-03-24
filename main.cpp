#include "Vector.h"
#include <fstream>
using namespace std;
ifstream fin("date.in");

int main()
{
    Vector v1;
    Vector* v2 = new Vector(7,4);
    fin>>v1;

    v2->adaugareElement(5);
    v2->adaugareElement(67);
    v1.adaugareElement(13,2);

    /*Vector v3;
    v3.showVector(3);
    v3=v1;
    cout<<v3;*/

    cout<<"Pozitia pe care se afla elementul maxim din v1 inainte de sortare este: "<<v1.maxim()<<endl;
    cout<<"Pozitia pe care se afla elementul maxim din v2 inainte de sortare este: "<<v2->maxim()<<endl;
    cout<<v1<<*v2;
    v1.sortareCrescatoare();
    v2->sortareCrescatoare();
    cout<<"Pozitia pe care se afla elementul maxim din v1 dupa sortare este: "<<v1.maxim()<<endl;
    cout<<"Pozitia pe care se afla elementul maxim din v2 dupa sortare este: "<<v2->maxim()<<endl;
    cout<<v1<<*v2;
    Vector v3;
    v3=v1*(*v2);
    cout<<"Vectorul obtinut prin inmultirea vectorilor este: "<<v3;
    cout<<endl<<"Produsul scalar al vectorilor v1 si v2 este: "<<v3.suma()<<endl<<endl;
    delete v2;
    return 0;
}

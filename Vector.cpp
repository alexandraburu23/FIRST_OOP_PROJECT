#include "Vector.h"

Vector::Vector()
{
    this->nrElemente=0;
    std::cout<<"S-a creat un vector"<<std::endl;
}
Vector::Vector(int x, int nrElemente)
{
    this->nrElemente=nrElemente;
    for(int i=0;i<=this->nrElemente; ++i)
        (this->v)[i]=x;
    std::cout<<"S-a creat un vector"<<std::endl;
}

Vector::~Vector()
{
    this->nrElemente=0;
    std::cout<<"Vectorul a fost distrus"<<std::endl;
}

Vector::Vector(const Vector& other)
{
    this->nrElemente=other.nrElemente;
    for(int i=0;i<this->nrElemente;++i)
        (this->v)[i]=(other.v)[i];
    std::cout<<"S-a apelat constructorul de copiere"<<std::endl;
}

Vector Vector::operator=(const Vector& rhs)
{
   this->nrElemente=rhs.nrElemente;
   for(int i=0;i<rhs.nrElemente;++i)
        (this->v)[i]=(rhs.v)[i];
   return *this;
}
Vector Vector::operator *(const Vector& object)
{
    Vector aux;
    aux.nrElemente=object.nrElemente;
    for(int i=0;i<aux.nrElemente;++i)
        (aux.v)[i]=(this->v)[i]*(object.v)[i];
    return aux;
}
void Vector::adaugareElement(int x, int nrAdaugari)
{

  for(int i=nrElemente; i<nrElemente+nrAdaugari;++i)
    (this->v)[i]=x;
  this->nrElemente=this->nrElemente+nrAdaugari;

}
int Vector::suma()
{
    int sum=0;
    for(int i=0;i<this->nrElemente;++i)
        sum+=(this->v)[i];
    return sum;

}
int Vector::maxim()
{
    int maxx=(this->v)[0],poz=0;
    for(int i=1;i<this->nrElemente;++i)
        if(maxx<(this->v)[i])
    {
        maxx=(this->v)[i];
        poz=i;
    }

    return poz;
}
void Vector::sortareCrescatoare()
{
    for(int i=0;i<this->nrElemente-1;++i)
        for(int j=i+1;j<nrElemente;++j)
            if((this->v)[i]>(this->v)[j])
                std::swap((this->v)[i],(this->v)[j]);

}
std::istream& operator>> (std::istream& fin, Vector& aux)
{
    fin>>aux.nrElemente;
    for(int i=0;i<aux.nrElemente;++i)
        fin>>(aux.v)[i];
    return fin;
}
std::ostream& operator<< (std::ostream& cout, const Vector& aux)
{

    for(int i=0;i<aux.nrElemente;++i)
        cout<<(aux.v)[i]<<" ";
    cout<<std::endl;
    return cout;
}

void Vector::nrElem()
{
    std::cout<<this->nrElemente<<std::endl;
}

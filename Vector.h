#ifndef VECTOR_H
#define VECTOR_H
#include<vector>
#include<iostream>
class Vector
{
    int v[100];
    int nrElemente;

    friend std::istream& operator>> (std::istream&, Vector&);
    friend std::ostream& operator<< (std::ostream&, const Vector&);
public:
    Vector();
    Vector(int,int);
    ~Vector();
    Vector(const Vector&);
    Vector operator = (const Vector& );
    Vector operator *(const Vector&);
    void adaugareElement(int,int=1);
    int suma();
    int maxim();
    void sortareCrescatoare();
    void showVector(int);
    void nrElem();
};

#endif // VECTOR_H

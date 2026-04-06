#include <iostream>
using namespace std;

template<class T>
void swapp(T &i, T &j)
{
    T temp;
    temp=i;
    i=j;
    j=temp;
}

int main()
{
    int e,f;
    char q,r;
    float x,y;

    cout<<"\n Enter 2 integer values:" ; 
    cin>>e>>f;
    swapp(e,f);
    cout<<"\nInteger values after swapping: ";
    cout<<e<<"\t"<<f<<"\n";

    cout<<"\n Enter 2 Character Values";
    cin>>q>>r;
    swapp(q,r);
    cout<<"\n Character values after swapping:";
    cout<<q<<"\t"<<r<<"\n";

    cout<<"\n Enter 2 Float values:";
    cin>>x>>y;
    swapp(x,y);
    cout<<"\n The resultant float value values after swapping: ";
    cout<<"\t"<<y<<"\n";


}
#include <iostream>
// imnput stream
// output stream

using namespace std;

class ComplexNum{
    public:
        int real;
        int img;
        
        ComplexNum(int r=0, int i=0)
        {
            real = r;
            img = i;
        }

        ComplexNum operator+ (ComplexNum n)
        {
            ComplexNum temp;
            temp.real = real + n.real;
            temp.img = img + n.img;

            return temp;
        }
        friend ostream & operator<< (ostream &o, ComplexNum &a)
        {
            o<<a.real << " + " << a.img << "i";

            return o;
        }
        // istream
        friend istream & operator>> (istream &i, ComplexNum &a)
        {

        }
};



int main()
{
    int a, b;
    a = 4;
    b = 5;
    int c = a + b;
    // c = a.add(b);
    cout <<  c << endl;

    ComplexNum n1(5, 4);
    ComplexNum n2(6, 7);

    ComplexNum n3;
    n3 = n1+n2;
    cout<<n3;

    return 0;    
}
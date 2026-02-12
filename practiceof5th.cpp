#include<iostream>
using namespace std;


class complex{
    private:
    int real;
    int imag;

    public:
    complex(){
        real = 0;
        imag = 0;
    }

    complex(int r,int i){
        real = r;
        imag = i;
    }

    void setData(int r,int i){
        real = r;
        imag = i;
    }
};
int main(){

}


































































// #include<iostream>
// using namespace std;

// class complex{
//     private:
//     int real;
//     int imag;

//     public:

//     complex(){
//         real = 0;
//         imag = 0;
//     }

//     complex(int r,int i){ 
//         real = r;
//         imag = i;
//     }

//     void setData(int r,int i){
//         real = r;
//         imag = i;
//     }

//     int getReal(){
//         return real;
//     }

//     int getImag(){
//         return imag;
//     }

//     complex operator+(complex c2){
//         complex temp;
//         temp.real = real+c2.real;
//         temp.imag = imag+c2.imag; 
//         return temp;
//     }

//     complex operator-(complex c2){
//         complex temp;
//         temp.real = real-c2.real;
//         temp.imag = imag-c2.imag;
//         return temp;
//     }

//     complex operator*(complex &c2){
//         complex temp;
//         temp.real = (real*c2.real) - (imag*c2.imag);
//         temp.imag = (imag*c2.real) + ((real*c2.imag));
//         return temp;
//     }

//     void display()const{
//     if(imag == 0){
//         cout << real;
//     }
//     else if(real == 0){
//         if(imag == 1)
//             cout << "i";
//         else if(imag == -1)
//             cout << "-i";
//         else
//             cout << imag << "i";
//     }
//     else{
//         cout << real;
//         if(imag > 0)
//             cout << " + " << imag << "i";
//         else
//             cout << " - " << -imag << "i";
//     }
// }

// };

// int main(){
//     complex c1, c2, result;
//     int r, i;
//     cout << "Enter real and imaginary part of first complex number: ";
//     cin >> r >> i;
//     c1.setData(r, i);

//     cout << "\nEnter real and imaginary part of second complex number: ";
//     cin >> r >> i;
//     c2.setData(r, i);

//     cout << "\nFirst Complex Number: ";
//     c1.display();

//     cout << "\nSecond Complex Number: ";
//     c2.display();

//     result = c1 + c2;
//     cout << "\n\nAddition: ";
//     result.display();

//     result = c1 - c2;
//     cout << "\n\nSubtraction: ";
//     result.display();

//     result = c1 * c2;
//     cout << "\n\nMultiplication: ";
//     result.display();


// }
#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;

        Arithematic()
        {
           this-> No1 = 0;
            this->No2 = 0;
        }

        Arithematic(int i , int j)
        {
           this-> No1 = i;
           this-> No2 = j;
        }

      //int Addition(Arthimetic*this)  
        int Addition()
        {
            int Ans = 0;
            Ans = this->No1 + this->No2;
            return Ans;
        }

        //int Substraction(Arthimetic*this)  
        int Substraction()
        {
            int Ans = 0;
            Ans = this->No1 - this->No2;
            return Ans;
        }

};

int main()
{
    Arithematic aobj1(21,10);
    int Result = 0;

  //Result = Addition(&aobj1);        C++ code gets converted to C while compling
    Result = aobj1.Addition();     // caller object

    //Result = Substraction(&aobj1);        C++ code gets converted to C while compling
    Result = aobj1.Substraction();

    cout<<"Addition is :"<<Result<<"\n";
    cout<<"Substraction is : "<<Result<<"\n";

    return 0;
}
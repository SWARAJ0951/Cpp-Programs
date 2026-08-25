#include<iostream>
using namespace std;

class PPA
{
   public:
        int No1;
        int No2;

        // Default Constructor
        PPA()
        {
            cout<<"Inside Default Constructor\n";
        }

        // Parametrized Constructor
        PPA(int a, int b)
        {
            cout<<"Inside Parametrized Constructor\n";
        }

        // Copy Constructor
        PPA(PPA & obj)
        {
            cout<<"Inside Copy Constructor\n";
        }
        
        // Destructor
        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    PPA pobj1;               //Default
    PPA pobj2(11,21);        //Parametrized
    PPA pobj3(pobj1);        //Copy

    return 0;
}
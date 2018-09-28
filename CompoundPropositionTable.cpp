/* Write a program to generate truth table of compound proposition. */

#include<iostream>
#include<iomanip>
 #include <cstdlib>
using namespace std;
class Proposition
    {
        private:
        int p[4],q[4];

        public:
        void get_data();
        void display_input();
        void display_output();

    };

    void Proposition::get_data()
        {
        cout<<"Enter value of p(assume in LHS) and q(assume in RHS) of table simultaenously"<<endl;
        for(int i=0;i<4;i++)
            {
                cout<<" p = " ; cin>>p[i];
                cout<<" q = "; cin>> q[i];
            }


        }


    void Proposition::display_input()
{
    for(int i=0;i<4;i++)
    {

        if(!((p[i]==0 && q[i]== 0) || (p[i] == 1 && q[i]== 1) || (p[i] == 0 && q[i]== 1) || (p[i] == 1 && q[i]== 0)))
        {
            cout<<"\nWRONG INPUT ! Enter binary values of p and q "<<endl;
            exit(0);
         }
    }

    cout<<"\nInput given : "<<endl;
    cout<<"p"<<setw(15)<<"q"<<endl;
    cout<<"_____________________________________"<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<p[i]<<setw(15)<<q[i]<<endl;
        }
}
    void Proposition::display_output()
        {
        cout<< "\nCompound Proposition Output :"<<endl;
          cout<<"p"<<setw(15)<<"q"<<setw(30)<<"(p V ¬q) --> (p ^ q)"<<endl;
        cout<<"____________________________________________________"<<endl;

            for(int i=0;i<4;i++)

          {
                      cout<<endl<<p[i]<<setw(15)<<q[i];

                    if((p[i]==1 && q[i] == 1) || (p[i]==0 && q[i]==1))
                    {
                        cout<<setw(15)<<"1"<<endl;
                    }

                    if((p[i]==1 && q[i] == 0) || (p[i]==0 && q[i]==0))
                    {
                        cout<<setw(15)<<"0"<<endl;
                    }
            }

        }




    int main()
        {

            Proposition obj;
                obj.get_data();
                obj.display_input();
                obj.display_output();

        }

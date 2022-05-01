#include<iostream>
#include<iomanip>
using namespace std;
int col; //Переменая в которую помещаеться количество операций 
string more; //
int const numbers = 3; //Константа для массива num
int num [numbers]; //Массив num, сюда записываються все числа в операции
string op;
int two()

{
    cout << "Enter example ";
    cin>> num[0] >> op >>num[1];
//-----------------------------------------
    if(op=="-");
        {
            cout << num[0] - num[1] <<endl;
        }
//-----------------------------------------
         if(op=="+");
        {
            cout << num[0] + num[1] <<endl;
        }
//-----------------------------------------
         if(op=="*");
        {
            cout << num[0] * num[1] <<endl;
        }
 //-----------------------------------------
         if(op=="/");
        {
            cout << num[0] / num[1] <<endl;
        }
//------------------------------------------
    return 0;
}

int three()
    {
        
        return 0;
    }

int main(){
    cout << setw(45)<< "Calculator" << endl;
        do
            {
                cout << setw(5) << "Enter numbers of operations (Min 2 , Max 2) ";
                cin >> col;
                switch (col)
                {

                case 2: 
                    two();
                    break;
                
                case 3:

                    break;  
                }  
                
                cout << setw(5) << "more?"<< setw(10) <<"(yes/no)" << endl; 
                cin>> more;
        } while (more == "yes");
    cin.get();
    return 0;
}
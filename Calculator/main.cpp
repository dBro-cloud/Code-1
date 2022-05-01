#include<iostream>
#include<iomanip>
using namespace std;
int col; //Переменая в которую помещаеться количество операций 
string more; //
int const numbers = 3; //Константа для массива num
int num [numbers]; //Массив num, сюда записываються все числа в операции
int pr [5];
string op[5];
int two()

{
    cout << "Enter example ";
    cin>> num[0] >> op[0] >>num[1];
//-----------------------------------------
    if(op[0] == "-")
        {
            cout << num[0] - num[1] <<endl;
        }
//-----------------------------------------
         if(op[0] == "+")
        {
            cout << num[0] + num[1] <<endl;
        }
//----------------------------------------
         if(op[0] == "*")
        {
            cout << num[0] * num[1] <<endl;
        }
 //-----------------------------------------
         if(op[0] == "/")
        {
            cout << num[0] / num[1] <<endl;
        }
//------------------------------------------
    return 0;
}

int three()
    {
        cout << "Enter example ";
        cin>> num[0] >> op[0] >>num[1] >> op[1] >> num [2];
//---------------------------------------------------------
        if(op[0] == "+")
            {
                pr[0] = num[0] + num[1]; 
            }
        return 0;
//---------------------------------------------------------
        if(op[0] == "-");
            {
                pr[0] = num[0] - num[1];
            }
//---------------------------------------------------------
        if(op[1] == "-");
            {
                cout << pr[0] - num[2]<<endl; 
            }

        if(op[1] == "+");
            {
                cout << pr[0] + num[2]<<endl; 
            }
    }

int main()
{
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
                
                // case 3:
                    // three();
                    // break;  
                }  
                
                cout << setw(5) << "more?"<< setw(10) <<"(yes/no)" << endl; 
                cin>> more;
        } while (more == "yes");
    cin.get();
    return 0;
}
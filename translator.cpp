


#include <iostream>
#include <string>
#define some getline (cin, tmp)
#define cal tmp.size ()
#define rep tmp.replace
using namespace std;

int main ()
{
    string tmp;
    int i = 0; 
    while(i < 10)
    {
        some;
        cout << tmp << endl;
        i++;
    }

    // line 11
    some;
    rep (5,1,"q");
    rep (8,1,"r");
    cout << tmp << endl;

    // line 12
    some;
    rep (cal - 1, 1, "16");
    cout << tmp << endl;

    //line 13
    some;
    rep (cal - 5, 5, "6, -16");
    cout << tmp << endl;

    // line 14
    some;
    int j = 0; 
    while(j< (int) cal)
    {
        
        if (tmp[j] == 'e') tmp[j] = 'r';
        else if (tmp[j] == 'l') tmp[j] = 'q';
        j++;
    }
    cout << tmp << endl;
    some;
    tmp[cal - 1] = '6';
    cout << tmp << endl;

    int k = 0; 
    while(k < 3)
    {
     some;
     k++;
 	}

    cout << "\tmovl\t$.LC0, %edi\n\tmovl\t$0, %eax" << endl;

    some;
    cout << tmp << endl;

    getline (cin, tmp), some;

    cout << "\tpopq\t" << "%" << "rbp" << endl;

    some;
    rep (cal - 4, 4, "7, 8");
    cout << tmp << endl;

    // copy next 6 lines
    int l = 0; 
    while(l< 6)
    {
        some;
        cout << tmp << endl;
        l++;
    }

    return 0;
} 

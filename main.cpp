#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    vector<int> a;
    cout << "Vvedite kol-vo elementov v massive" << endl;
    int n;
    cin >> n;
    
    cout << endl << "Vvedite massiv" << endl;
    
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    
    
    if(poloj(a)) cout << endl << "Vse elementy massiva polozhitel'nyye" << endl;
    else cout << endl << "Ne vse elementy massiva polozhitel'nyye" << endl;

}

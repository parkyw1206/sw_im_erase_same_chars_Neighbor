/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout<<"Hello World" << endl;
    string str = "1238099084";
    vector<int> s;

    s.push_back(str[0]);
    
    for(int i = 1 ; i < str.size() ; i++){
        cout << str[i] << " ";

        if(s.back() == str[i]){
            s.pop_back();
        }else{
            s.push_back(str[i]);
        }
    }

    return 0;
}

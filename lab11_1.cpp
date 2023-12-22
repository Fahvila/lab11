
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

string cookie()
{   
    srand(time(0));
    int grade = rand()%9;
    if(grade == 0) return "A";
    else if(grade == 1) return "+B";
    else if(grade == 2) return "B";
    else if(grade == 3) return "+C";
    else if(grade == 4) return "C";
    else if(grade == 5) return "+D";
    else if(grade == 6) return "D";
    else if(grade == 7) return "F";
    else return "W";
}
  int main()
{  
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();

    cout <<"You will get "<<cookie()<<" in this 261102";

    return 0;
}
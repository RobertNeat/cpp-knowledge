#include <iostream>
#include <fstream>
#include <cmath>

#define bug out<<"#";
//#Happy Thoughts
using namespace std;

string two_last(){
return "ts";}

int main()
{
    ifstream in ("data.txt");
    ofstream out ("output.txt",ios::app);
    string words[50];
    int x;
    bug
    bool u = true;

    //loading data into program
    for(int a=0;a<20;a++){
        in>>words[a];
    }
    in>>x;
    out<<(char)x;

    out<<words[7][2];

    int number;
    for(int a=0;a<20;a++){
        in>>number;
        if(number%2==0){
                    out<<(char)number<<(char)number;
            }
    }

    while(u){
        out<<"y";
        u=false;
    }

    out<<(char)sqrt(9025);
    out<<words[0][0];
    out<<words[13][(words[13].length())-1];

    int w=1;
    while(w<=4){
    out<<words[18][w];
    w++;
    }
    out<<two_last()<<endl;

    cout<<"Look at output.txt file";

    in.close();
    out.close();
    return 0;
}

#include <iostream>
#include <string>
#include "string.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "merge.h"
#include "deque.h"
using namespace std;
void menu();
int main()
{
    deque<char> current;
    int ch=0;
    char value;
    srand(time(NULL));
    while(ch!=6){
        menu();
        cin>>ch;
        while((ch<1)||(!cin)||(ch>5)){
            system("cls");
            cin.clear();
            cin.ignore(32767,'\n');
            menu();
            cin>>ch;
        }
        if(ch==1){
            system("cls");
            current.doEmpty();
            int size=0;
            cout<<"size :";
            cin>>size;
            while((!cin)||(size<1)){
                system("cls");
                cin.clear();
                cin.ignore(32767,'\n');
                cout<<"size :";
                cin>>size;
            }
            for(size_t i=0;i<size;i++){
                cout<<"press ["<<i<<"] :";
                cin>>value;
                current.push_back(value);
            }
            ch=0;
        }
        if(ch==2){
            system("cls");
            current.doEmpty();
            int size=0;
            cout<<"size :";
            cin>>size;
            while((!cin)||(size<1)){
                system("cls");
                cin.clear();
                cin.ignore(32767,'\n');
                cout<<"size :";
                cin>>size;
            }
            int symbol;
            for(size_t i=0;i<size;i++){
                symbol=rand()%80+50;
                current.push_back((char)symbol);
            }
            ch=0;
        }
        if(ch==3){
             system("cls");
            if(current.empty())cout<<"deque is empty :("<<endl;
            else{
                deque<char> tmp(current);
                while(!tmp.empty()){
                    tmp.pop_front(value);
                    cout<<value<<endl;
                }
            }
            cout<<endl;
            ch=0;
        }
        if(ch==4){
            system("cls");
            unsigned check=merge(current);
            if(check==1)cout<<"empty "<<endl;
            if(check==2)cout<<"NO"<<endl;
            if(check==0)cout<<"YES"<<endl;
            cout<<endl;
            ch=0;
        }
    }
    return 0;
}
void menu(){cout<<"1.fill from keyboard"<<endl<<"2.fill random"<<endl<<"3.see deque"<<endl
<<"4.merge"<<endl<<"5.exit"<<endl;}


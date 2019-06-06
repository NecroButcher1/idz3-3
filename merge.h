#ifndef MERGE_H_INCLUDED
#define MERGE_H_INCLUDED
#include "deque.h"
#include <iostream>
#include <string>
template<class T>
/**
@in ��� ���� �
@merge ��������� �������� �� ����� � ���� �����������
@out unsigned 0 - ��, 1 - ���� ����, 2 - ���

*/
unsigned merge(deque<T> &buff){
    unsigned out=0;
    if(buff.empty())out=1;
    else{
        deque<T> tmp=buff;
        T value1;
        T value2;
        bool eq=true;
        if(buff.get_size()>2){
            while((!buff.empty())&&(eq)){
                value1=buff.front();
                value2=buff.back();
                if(value1==value2){
                    buff.pop_back();
                    buff.pop_front();
                }
                else eq=false;
            }
            if(!eq)out=2;
        }
    }
    return out;
}

#endif // MERGE_H_INCLUDED

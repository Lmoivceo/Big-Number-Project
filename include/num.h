#pragma GCC optimize(2)
#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class num
{
    friend istream&operator>>(istream&,num&);
    friend ostream&operator<<(ostream&,const num&);
    friend num operator+(num,num);
private:
    vector<int> number;
};

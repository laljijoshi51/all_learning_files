#include<iostream>

using namespace std;

int main(){
int x=10;
int *p = &x;
int *&rp = p;

cout << *p << endl;
cout << *rp << endl;

}

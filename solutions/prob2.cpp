#include <iostream>
using namespace std;int main(){cout<<"3 5"<<endl<<"5 7"<<endl;for(int i=10;i<10000;i++){if(i%2!=0&&i%3!=0&&i%4!=0&&i%5!=0&&i%6!=0&&i%7!=0&&i%8!=0&&i%9!=0){for(int j=i+1;j<i+3;j++){if(j%2!=0&&j%3!=0&&j%4!=0&&j%5!=0&&j%6!=0&&j%7!=0&&j%8!=0&&j%9!=0){cout<<to_string(i)+" "+to_string(j)<<endl;}}}}}
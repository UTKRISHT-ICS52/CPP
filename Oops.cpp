// Lab 1st Program 
#include<bits/stdc++.h>
using namespace std;
class age
{
public:
float num;
age (){
num=0;
}
age (int a){
num=a;
}
void disp(){
cout<<num<<endl;
}
};
int main(){
age age_default;
age age_insert(20);
age_default.disp();
age_insert.disp();
return 0;
}
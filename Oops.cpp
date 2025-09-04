// Lab 1st Program 
/*#include<bits/stdc++.h>
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



// Lab 1st Program 
#include<vector>
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

//Lab 2nd Program
#include<iostream>
using namespace std;
class Email{
    private:
    string password;

    protected:
    string email;

    public:
    void emailInput(){
        string email,password;
        cin>>email;
        cin>>password;
        this->email=email;
        this->password=password;
    }
    void emailDisplay(){
        cout<<"Email is : "<<this->email<<endl;
    }

};

int main(){
    Email email1;
    cout<<"Enter Email/Password"<<endl;
    email1.emailInput();
    email1.emailDisplay();
    return 0;
}
*/
#include<iostream>
using namespace std;

class Age{
    public:
    int age;

    Age(){
        age=-1;
    }
    int disp(){
        return age;
    }
};
int main (){
    Age ag;
    cout<<"Default Const Init Value is :"<<ag.disp()<<endl;
    return 0;
}
    

// Lab 1st Program 
/*
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

// call destructor in derived class

#include<iostream>
using namespace std; 

class parent{
    public:
    ~parent(){
        cout<<"Destructor of parent called"<<endl;
    }
};
class child: public parent{
    public:
    ~child(){
        cout<<"Destructor invoked in  child class"<<endl;
    }
};

int main(){
    child c;
    return 0;
}


// Demonstrate multiple inheritance
#include <iostream>
 using namespace std;
class Password { 
    protected:
string password;


Password() { cout << "Construct of Password invoked" << endl; }
 void takePassword(string password) { this->password = password; } 
 void pdisplay() { cout << this->password << endl; }
};


class Email { protected:
string email;


Email() { cout << "Construct of Email invoked" << endl; } 
void takeEmail(string email) { this->email = email; } 
void edisplay() { cout << this->email << endl; }
};


class Account : public Email, public Password {
     public:
int year;


Account() { cout << "Constructed Account invoked" << endl; } 
void takeAccount(string password, string email, int year) {
takePassword(password); 
takeEmail(email);
this->year = year;
}
void accDisplay() {
pdisplay(); 
edisplay();
cout << this->year << endl;
}
};


int main() { Account obj1;
obj1.takeAccount("123456", "245ICS052@gbu.ac.in", 2025); 
obj1.accDisplay();
return 0;
}
*/


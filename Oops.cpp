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
// 3rd program in OOPs 
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

// call destructor in derived class // 4rd programm in OOPs 


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


// Demonstrate multiple inheritance // 5th Pogram in OOPs 
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

// 6th program in OOPS
// constructor call in deriverd class 
#include<iostream>
using namespace std; 
class Animal{ public:
    string species;
    string color;
    string sound;

Animal(){
    this->species="";
    this->color="";
    this->sound="";
}
void setcolor(string color){ this ->color=color;}
void setSpecies(string species) { this->species=species;}
void setSound(string sound) { this->sound=sound;}
};
class cat : public Animal {
    public:
    string name;
    cat(){
        this->name= "cat"; cout << " constructor invoked in cat class" << endl;
    }
    void  disp(){
        cout << this->name << " :" << this ->color << this->species <<":" << this->sound << endl;
    }
};

int main(){
    cat c1;
    c1.setcolor("black");
    c1.setSpecies("cat species");
    c1.setSound("meow meow");

    c1.disp();
    return 0;
}


// 7th Program in OOPs 
// destructor call in derived class
#include<iostream>
using namespace std; 
class Animal{ public:
    string species;
    string color;
    string sound;

Animal(){
    this->species="";
    this->color="";
    this->sound="";
}
void setcolor(string color){ this ->color=color;}
void setSpecies(string species) { this->species=species;}
void setSound(string sound) { this->sound=sound;}
};
class cat : public Animal {
    public:
    string name;
    cat(){
        this->name= "cat"; cout << " constructor invoked in cat class" << endl;
    }
    void  disp(){
        cout << this->name << " :" << this ->color << this->species <<":" << this->sound << endl;
    }
    ~cat(){
        cout<< "Destructor Invoked for class cat" <<endl;}
    
};

int main(){
    cat c1;
    c1.setcolor("black");
    c1.setSpecies("cat species");
    c1.setSound("meow meow");

    c1.disp();
    return 0;
}




// 8th program in OOPs 
// find area and volume of circle using class and object  
#include <iostream>
using namespace std; 
class Sphare{
    public:
    float radius;
    Sphare(){
        radius=0;
    }
    Sphare(float r){
        radius=r;
    }
    float getArea(){
        return 4*3.14*radius*radius;
    }
    float getVolume(){
        return (4/3)*3.14*radius*radius*radius;
    }
};

int main(){
    Sphare s1;
    s1.radius=5;
    cout<<"Area: "<<s1.getArea()<<endl;
    cout<<"Volume: "<<s1.getVolume()<<endl;
    return 0;
}


// 9th Program in OOPs
// write a program to create a file  using file handling in C++
#include <iostream>
#include <fstream>
using namespace std;
int main(){
fstream af; 
af.open("test.txt",ios::out); 
if(!af){
cout<<"File Not created"<<endl;
}
cout<<"File created succesfully"<<endl;


return 0;
}


// 10th Program  in OOPs 
// write a Program to append a content in a file.
#include<iostream> 
#include<fstream> 
using namespace std; 
int main(){
fstream af; 
af.open("test.txt",ios::app);

string line="Hello! This is Utkrisht Patel";
string line2="MY roll no.is 245ICS052";


af<<line<<endl; af.close();
af<<line2<<endl; af.close();

cout<<"Sucessful"<<endl;
 return 0;

}
*/


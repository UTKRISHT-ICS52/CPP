//  First Program 
 #include <iostream>

int main()
{
  // using namespace std;
   //cout <<"Codewithutkrisht! Utkrisht is a C++ Developer.";
   int atm;
   std::cout << "Enter atm PIN: ";
   std::cin >> atm;
   if (atm == 123){
         std::cout << "ATM PIN accepted.";
   } 
   else {
         std::cout << "ATM PIN denied.";
   }
   return 0;
}


// second Program 
 # include <iostream>
int main(){
     std::cout << "Codewithutkrisht!";
     return 0;
}


// Third Program
#include <iostream>
int main(){
  std::cout << "Enter your Name: ";
  std::string name;
  std:: cin >> name;
  std::cout << "Hello, " << name << "! Welcome to C++ programming." << std::endl;
  
   return 0;
} 


// Fourth Program 
 #include <iostream>
using namespace std;
int main(){
      int ch;
      cout <<"Enter your choice: ";
      cin >> ch;
      switch (ch)
      {
      case 1: cout <<"Monday";
            break;
      case 2: cout <<"Tuesday";
            break;
      case 3: cout <<"Wednesday";
            break;
      case 4: cout <<"Thursday";
            break;
      case 5: cout <<"Friday";
            break;
      case 6: cout <<"Saturday";
            break;
      case 7: cout <<"Sunday";
            break;
      default:
            break;
      }

} 


// 5th Program 
#include <iostream>
using namespace std;
int main(){
     cout <<((10>5) && (20<5)) << endl; // Logical AND operator 
     cout <<((10>5) || (20<5)) << endl; // Logical OR operator
     cout <<!(20>10); // Logical NOT operator

     return 0;
} 


// 6th Program 

#include<iostream>
using namespace std;
int main (){
      int a = 100;
      while(a>=1)
{
      cout << a<< ends;
      -- a;
}
return 0;
}

 

// 7th Program 


 #include<iostream>
using namespace std;
int main (){
      
      while(1)
{
      cout <<"utkrisht";
}
return 0;
} 

// 8th Program 

#include<iostream>
using namespace std;
int main (){
      int i = 1;
      while(i <= 5)
{
      cout << "Hello World " << i << endl;
      i++;
}
return 0;
} 


 // 9th Preogram  

#include <iostream>
using namespace std;
int main(){
   
     int a = 1;
     do {
            cout <<a;
            a++;
     } while (a <= 20);
     return 0;
} 

// 10th Program 

#include <iostream>
using namespace std;
int main(){
      cout<< "Hello utkrisht "<< endl;
      cout<<"Welcome to C ++ PROGRMAING LANGUAGE"<< endl;

}

// 11th Program


#include<iostream>
using namespace std;
int main (){
      cout << "codewithutkrisht" <<endl;
      namespace std;
 int main(){ cout << " Utkrisht is a topperboy" << endl;
      exit(0); // Exit the Program,
       cout<<"utkrisht patel"<<endl;
       cout<<"kapil web developer"<<endl;
       return 0;
} 

 // 12th program
 
 #include <iostream>
 using
      int arr[5]= {1,2,3,4,5};
      int i;
      for(i = 0; i <5; i++){
            cout << arr[i] << ends;
      }
      return 0;
 } 
 
// 13th program 


#include<iostream>
#include<string.h>
using namespace std;
int main(){
      char str[] = "utkrisht";
      cout  <<str<<endl;
      size_t r = strlen(str);
      cout <<r;
      return 0;
}

// 14th program

#include<iostream>
using namespace std;
int main(){
    int *p;
    int a = 10;
    p = &a; // Pointer p now hold the address of a 
    cout <<&a << endl;
    cout <<p << endl;
    cout <<"a=" <<a << endl;
    cout <<"p="<<*p;
    return 0;
}



// 15th Program 

#include<iostream>
using namespace std;
int main(){
      int a = 5;
      int b = 10;
      int c = a + b;
      cout << "The sum of " << a << " and " << b << " is " << c << endl;
      return 0;
}


 // 16th Program 

 // Program to assign data to members of a structure variable

 #include <iostream>
using namespace std;

struct Person
{
    string first_name;
    string last_name;
    int age;
    float salary;
};

int main()
{
    Person p1;
    
    cout << "Enter first name: ";
    cin >> p1.first_name;
    cout << "Enter last name: ";
    cin >> p1.last_name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p1.first_name << endl;
    cout << "Last Name: " << p1.last_name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}


// 17th Program 
 
#include <iostream>
using namespace std;

union Person
{
    string first_name;
    string last_name;
    int age;
    float salary;
};

int main()
{
    Person p1;
    
    cout << "Enter first name: ";
    cin >> p1.first_name;
    cout << "Enter last name: ";
    cin >> p1.last_name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p1.first_name << endl;
    cout << "Last Name: " << p1.last_name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}

// 18th Program 

#include<iostream>
using namespace std;
int main(){
      enum gender{

            male, female
      };
      cout <<male;
      return 0; 
}



// 19th Program 
#include <iostream>
#define  num 10
using namespace std;
int main(){
      int i,r;
    for(i=1; i<=10; ++i){
            r = num * i;
            cout << num << " * " << i << " = " << r << endl;

    }
}


// 20th program 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
      ofstream newFile("C:\\Users\\WIN10\\Desktop\\CPP.txt");

      cout <<"File Created...";

      newFile.close();
       return 0; 
}


// 21th Program 
#include<iostream>
using namespace std;
int main(){
      cout << "learn with codewithutkrisht";
      return 0; 
      
}


// 22th Program 

#include<iostream>
using namespace std;
int main (){
    int age = 25; // Integer
    float pi = 3.14; // Floating-point
    char initial = 'A'; // Character
    bool isStudent = true; // Boolean

cout << "Age: " << age << endl;
cout << "Pi: " << pi << endl;
cout << "Initial: " << initial << endl;
cout << "Is Student: " << isStudent << endl;

return 0;
}

// 23th Program 
#include<iostream>
using namespace std;
int main (){
      int ch;
      cout<<"Enter user choice:";
      cin>>ch;
      switch(ch)
      {
            case 0:cout<<"Monday";
            break;
            case 1:cout<<"Tuesday";
            break;
            case 2:cout<<"Wednesday";
            break;
            case 3:cout<<"Thursday";
            break;
            case 4:cout<<"Friday";
            break;
            case 5:cout<<"Saturday";
            break;
            case 6:cout<<"Sunday";
            break;
            
             default: cout<<"Invalid Number";
      }
      return 0; 
}

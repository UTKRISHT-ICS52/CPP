/*
#include<iostream>
using namespace std;
int main (){

cout << "codewithutkrisht" <<"endl"; 
return 0;
}


#include<iostream>
using namespace std;
int main (){
int age = 25; 
cout << age  <<endl; 
return 0;
}


#include<iostream>
using namespace std;
int main (){
char grade = 'O'; 
float PI = 3.14f;
cout << grade  <<endl;
cout << PI  <<endl;  
return 0;
}


#include<iostream>
using namespace std;
int main (){
char grade = 'A'; 
int value = grade;
cout << value   <<endl;
return 0;
}


#include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"Enter a age :" ;
    cin>>age;
    cout<<"Your age is :" << age;
    return 0; 
}
    
#include<iostream>
using namespace std;
int main(){
    int n = 25;
    if(n>=0){
        cout << "n is a postive number\n";
    }
    else{
        cout << "n is negative number\n";
    }
    return 0;
}  


#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "enter age:";
    cin >> age;
    if(age>=18){
        cout << "You can vote\n";
    }
    else{
        cout << "You can not vote\n";
    }
    return 0;
}   

#include<iostream>
using namespace std;
int main(){
      int n ;
      cout <<"Enter a Number";
      cin >>n;
      if(n%2 ==0){
      cout << "even\n";
      }
      else{
        cout << "odd\n";
      }
    return 0;
}  


#include<iostream>
using namespace std;
int main(){
      int n ;
      cout <<"Enter a Number";
      cin >>n;
      if(n%2 == 0){
      cout << "even\n";
      cout << "bye\n";
      }
      else{
        cout << "odd\n";
      }
    return 0;
} 



#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter marks :";
    cin >> marks;

    if(marks >=90){
        cout << "A\n";
    } 
    else if (marks >=80 && marks <90){
        cout << "B\n";
    }else {
        cout << "C\n";
    }
    return 0; 
}


#include<iostream>
using namespace std;
int main(){
     char ch;
     cout << "Enter a character :";
     cin >> ch;
     if(ch>='a' && ch<='z'){
        cout << "lowercase\n";
     } else{
        cout << "Uppercase\n";
     }
    return 0;
}
 
#include<iostream>
using namespace std;
int main(){
     char ch;
     cout << "Enter a character :";
     cin >> ch;
     if(ch>= 65 && ch<= 90){
        cout << "uppercase\n";
     } else{
        cout << "lowercase\n";
     }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n = -56;
    cout << (n>=0 ? "positive" : "negative")<< endl;
    return 0; 
}


#include<iostream>
using namespace std;
int main (){
    int count =1;
    while(count <=5){
        cout << count << "";
        count++;
        
    }
    cout << endl;
    return 0; 
}


#include<iostream>
using namespace std;
int main (){
    int n = 4;
    for(int i =1; i<=n; i++){ // outer loop 
        for(int j =1; j<=n; j++){ // inner loop
            cout <<j;
        }
        cout << endl;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main (){
    int n = 4;
    for(int i =1; i<=n; i++){ // outer loop 
        for(int j =1; j<=n; j++){ // inner loop
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}



#include<iostream>
using namespace std;
int main (){
    int n = 3;
    int num = 1;

    for( int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< num <<"";
            num++;
        }
        cout << endl;
    }
    cout<< "after pattern :"<<num<<endl; // 10 
    return 0;
} 



#include<iostream>
using namespace std;

// function definition 
void printHello(){
    cout << "hello\n";
}

int main(){
    // function Call inovation 
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    return 0; 
}




#include<iostream>
using namespace std; 
int sumN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    return sum;
    }

    int main(){
        cout << sumN(5)<<endl;
         cout << sumN(10)<<endl;
         return 0; 
}


*/

#include<iostream>
using namespace std; 
int factorialN(int n) {
int fact =1;

for(int i =1; i<=n; i++){
    fact *= i;
}
return fact;
}
  
    int main(){
        cout << factorialN(4) <<endl;
         cout << factorialN(5) <<endl;
         return 0; 
}




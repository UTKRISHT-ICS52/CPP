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



#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int ans =0, pow =1;

    while(decNum>0){
        int rem = decNum %2;
        decNum /=2;

        ans +=(rem * pow);
        pow *=10;
    }
    return ans;  // binary form 
}
int main (){
    int decNum = 100;
   // for(int i =1; i<=10; i++)
        cout<< decToBinary(decNum) <<endl;
    
    return 0;
}


// Bitwise operatorn AND,OR , NOT example in code c++
// AND
#include<iostream>
using namespace std;
int main(){
    int a = 4, b = 8;
    cout<<(a&b);
    return 0; 
}

// OR 
#include<iostream>
using namespace std;
int main(){
    int a = 4, b = 8;
    cout<<(a|b);
    return 0; 
}



// XOR 
#include<iostream>
using namespace std;
int main(){
    int a = 4, b = 8;
    cout<<(a^b);
    return 0; 
}

// Bitwise << (left shift op.)
#include<iostream>
using namespace std;
int main(){
    
    cout<<(4<<1);
    return 0; 
}


// Bitwise >> (Right shift op.)
#include<iostream>
using namespace std;
int main(){
    
    cout<<(4>>1);
    return 0; 
}

// homework 

#include<iostream>
using namespace std;
int main(){
    int a = 6, b = 10;
    cout<<(a&b);
    return 0; 
}

// home work
#include<iostream>
using namespace std;
int main(){
    int a = 6, b = 10;
    cout<<(a|b);
    return 0; 
}

// homework

#include<iostream>
using namespace std;
int main(){
    int a = 6, b = 10;
    cout<<(a^b);
    return 0; 
}
// homework

#include<iostream>
using namespace std;
int main(){
   
    cout<<(10<<2);
    return 0; 
}
//homework

#include<iostream>
using namespace std;
int main(){
   
    cout<<(10>>1);
    return 0; 
}

// practice 

#include<iostream>
using namespace std;
int main (){
    cout<<(10>>6);
    return 0; 

}

#include<iostream>
using namespace std;
int main (){
    cout<< sizeof(int) ;
    return 0; 

}


//Data type modifier program 
#include<iostream>
using namespace std;
int main (){
    cout<< sizeof(float);
    return 0; 

}

#include<iostream>
using namespace std;
int main (){
    cout<< "utkrisht";
    return 0; 

}

#include<iostream>
using namespace std;
int main (){
    cout<< sizeof(double);
    return 0; 

}

#include<iostream>
using namespace std;
int main (){
    unsigned int x = -10;
    cout<< x <<endl;
    return 0; 

}
    
#include<iostream>
using namespace std; 
class age{
    int a;
    public:
    void setAge(int age){
        a = age;
    }
    int getAge(){
        return a;
    }
};

int main(){
    age obj;
    obj.setAge(20);
    cout << "Age: " << obj.getAge() << endl;
    return 0;
}




// object oriented programming lab program -1 
// #include<bits/stdc++.h>
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
num = static_cast<float>(a);
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



#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>vec={1,2,3};//0
    cout<<vec[0]<<endl;//1 
    return 0;
} 


#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>vec(5,0);
    for(int i: vec){
        cout<<i<<endl;  
    }
    
    return 0;
} 


#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<char>vec={'a','b','c','d','e','f','g','h'};
    cout <<"size="<<vec.size()<<endl;
    for(char i: vec){
        cout<<i<<endl;  
    }
    
    return 0;
} 

#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<char>vec={'a','b','c','d','e','f','g','h'};
    cout <<"size="<<vec.size()<<endl;
    vec.push_back(25);
    cout <<"size after push back="<<vec.size()<<endl;
    for(char i: vec){
        cout<<i<<endl;  
    }
    return 0;
} 

#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<char>vec={'a','b','c','d','e','f','g','h'};
    cout <<"size="<<vec.size()<<endl;
    vec.push_back(25);
      vec.push_back(35);
        vec.push_back(45);
          vec.push_back(55);

    cout <<"size after push back="<<vec.size()<<endl;
    for(char i: vec){
        cout<<i<<endl;  
    }
    return 0;
}


#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex; 
    int left = 0, maxLength = 0;

    for (int right = 0; right < (int)s.size(); right++) {
        if (charIndex.find(s[right]) != charIndex.end() && charIndex[s[right]] >= left) {
            left = charIndex[s[right]] + 1;
        }
        charIndex[s[right]] = right;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}


int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    cout << "Length of longest substring without repeating characters: "
         << lengthOfLongestSubstring(s) << endl;
    return 0;
}

// Oopsfirstprogram 
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

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        int start = 0, maxLen = 1;

        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
        };

        for (int i = 0; i < n; i++) {
            expand(i, i);       // Odd-length palindrome
            expand(i, i + 1);   // Even-length palindrome
        }

        return s.substr(start, maxLen);
    }
};
*/
// Palindrome Leetcode Problem 
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return (x == reversed || x == reversed / 10);
    }
};
int main(){
    Solution s;
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(s.isPalindrome(num)){
        cout<<num<<" is a palindrome number."<<endl;
    } else {
        cout<<num<<" is not a palindrome number."<<endl;
    }
    return 0;
}

//container with most water problem
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            maxArea = max(maxArea, h * w);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxArea;
    }
};
int main(){
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<"Maximum area: "<<s.maxArea(height)<<endl;
    return 0;
}
/* Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral. */

#include<bits/stdc++.h>
using namespace std;

string intToRoman(int num) 
{
    unordered_map<int,string>map;
    map[1]="I";
    map[2]="II";
    map[3]="III";
    map[4]="IV";
    map[5]="V";
    map[6]="VI";
    map[7]="VII";
    map[8]="VIII";
    map[9]="IX";
    string res = "";
    
    while(num)
    {
        
        if(num / 1000)
        {
            
            int x = num / 1000;
            num = num % 1000;
            
            while(x--)
            {
                
                res = res + "M";
            }
        }
        
        else if(num / 900)
        {
            
    
            num = num % 900;
            res = res + "CM";
            
        }
        
        else if(num / 500)
        {
            
            
            num = num % 500;
            res = res + "D";
            
        }
         
        else if(num / 400)
        {
            
            num = num % 400;
            res = res + "CD";
            
        }
        
        else if(num/100)
        {
            int x = num / 100;
             
            num=num%100;
             
            while(x)
            {
                x--;
               res+="C"; 
            }
        }
        
        else if(num / 90)
        {
            
            num = num % 90;
            res = res + "XC";
            
        }
         
        else if(num / 50)
        {
            num = num % 50;
            res = res + "L";
            
        }
         
        else if(num / 40)
        {    
            num = num % 40;
            res = res + "XL";
            
        }
        
        else if(num/10)
        {
            int x = num / 10;
              
            num=num%10;
            while(x--)
            {
              
               res+="X"; 
            }
        }
        
        else
        {
            
            res = res + map[num];
            num = num / 10;
        }
        
    }
    return res;
}

int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;

    string str = intToRoman(num);
    cout<<"Roman Number : "<<str;

    return 0;
}

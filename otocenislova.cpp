#include <iostream>
std::string s;
int main()
{
    std::getline(std::cin,s);//precte cely radek
    for (int  i = s.length()-1; i >= 0 ;i -- 1){
        std::cout<<s[i];
    }
}
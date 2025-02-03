//najde nejvetsi cislo ze zadanych
#include <stdio.h>
#include<iostream>
int main()
{   int c = 0;
    int a = 0;
    int last_a = 0;
    for (int i=0; i<3;i++){
         std::cout<<"zadej cislo: ";
         if(i==0)
            last_a = a;
         std::cin>>a;
         if (a > last_a){
            last_a = a;
            c=i;
         }
    }
std::cout<<"nejvetsi je: ";
std::cout<<last_a<<std::endl;
std::cout<<"poradi: ";
std::cout<<c + 1;
}
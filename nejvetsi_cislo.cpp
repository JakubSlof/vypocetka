//najde nejvetsi cislo ze zadanych
#include <stdio.h>
#include<iostream>
int main()
{
    int a = 0;
    int last_a = 0;
    for (int i=0; i<10;i++){
         std::cout<<"zadej cislo: ";
         if(i==0)
            last_a = a;
         std::cin>>a;
         if (a > last_a)
            last_a = a;
    }
std::cout<<"nejvetsi je: ";
std::cout<<last_a;
}
//kolikrat obsahuje nejvetsi cislo
#include <stdio.h>
#include<iostream>
int main()
{
    int c = 0;
    int a = 0;
    int last_a = 0;
    for (int i=0; i<10;i++){
         std::cout<<"zadej cislo: ";
         if(i==0)
            last_a = a;
         std::cin>>a;
         if (last_a == a){
             c++;
         }
         if (a > last_a){
             last_a = a;
             c = c - c + 1;
         }
    }
std::cout<<"nejvetsi je: ";
std::cout<<last_a;
std::cout<<" je tam: ";
std::cout<<c;
std::cout<<" x";
}
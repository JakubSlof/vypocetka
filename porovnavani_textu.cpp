#include<iostream>
#include<string>
std::string max, x;
int main(){
    std::cin >> max;
    for(int i = 0;i<4;i++){
        std::cin >> x;
        if(x>max){
            max = x;
        }
    }
std::cout<<max;
}
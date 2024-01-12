#include <iostream>

void name_age(std::string myName,int age);


int main(){

    std::string myName;
    int age;

    name_age(myName,age);

    return 0;

}

void name_age(std::string myName,int age){
    
    std::cout << "What's your name???" << "\n";
    std::getline(std::cin,myName);
    std::cout << "How old are you??" << "\n";
    std::cin >> age;

    if(myName == "Aris" && age == 21){
        std::cout << "It's me " << myName << " and I am " << age << " years old!!!" << "\n";
        std::cout << "That's great";
    }else{
        std::cout << "Wrong Answer" << "\n";
        std::cout << "Please try again" << "\n";

        //Input Output information
        //Mine information!!
        //Using methods!!!!
    }
}



#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <algorithm>

class Animal
{
    public:

        enum Breed{MAMMAL, AMPHIBIAN, REPTILIAN, AVIAN};

        Breed breed_i;
        std::string _breeds_[4] = {"MAMMAL", "AMPHIBIAN", "REPTILIAN", "AVIAN"};
        std::string breed_; 
        std::string name_;
        std::string sound_;  

        Animal(Breed breed, std::string name, std::string sound){
            breed_i = breed;
            breed_ = _breeds_[breed];
            name_ = name;
            sound_ = sound;
        }

        void speak(int noOfTimes){
            std::string speech = "";
            for(int i = 0; i < noOfTimes; i++){
                 speech.append(sound_ + " ");
            }
            std::cout << speech << "\n";
            return;
        }

        std::string lowercase(std::string string){
            std::transform(string.begin(), string.end(), string.begin(), [](unsigned char c){return std::tolower(c);});
            return string;
            
            // std::string str = "";
            // for(int x = 0; x < string.length(); x++){
            //     string[x] = tolower(string[x]);
            // }
            // return string;
        }

        void introduceSelf(){
            std::cout << "Hi, I am a " << lowercase(name_) << "\n";
            std::string breed = breed_;
            std::cout << "I am of the " << lowercase(breed_) << " breed! \n";
            speak(3);
            return;
        }
};

void converse(Animal animal1, Animal animal2){
    std::cout << animal1.name_ << ":\n";
    animal1.introduceSelf();
    std::cout << animal2.name_ << ":\n";
    animal2.introduceSelf();
}

int main(){
    Animal dog(Animal::Breed::MAMMAL, "Dog", "Bark");
    Animal cat(Animal::Breed::MAMMAL, "Cat", "Meow");
    dog.speak(3);
    dog.introduceSelf();
    std::cout << "\nLets have the " << dog.name_ << " converse with the " << cat.name_ << "! \n\n";
    converse(cat, dog);
}

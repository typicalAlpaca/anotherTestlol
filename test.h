
void Animal::init(Type type, string name, string sound){
    type_i = type
    type_ = _types_[type];
    name_ = name;
    sound_ = sound;
}

void Animal::printType(){
    switch(type_i){
        case MAMMAL:
        case REPTILIAN:
            cout << "I am a " << type_;
            break;
        case AMPHIBIAN:
        case AVIAN:
            cout << "I am an " << type_;
            break;
        default:
            cout << "IDUNNOWHAT AM I";
    }
}

void Animal::introduceSelf(){
    cout << "Hello, my name is " << name_;
    printType();
}

void Animal::changeType(Type type){
    type_ = type;
    cout << "Your type has been changed to " << type;
}

void Animal::speak(int numOfTimes){
    cout << "Speak?? Fuck you. But oh well...";
    string speech = "";
    for (int i = 0; i < numOfTimes; i++){
        speech = speech + sound_ + " "
    }
    cout << speech;
}

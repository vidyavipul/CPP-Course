/*
//  main.cpp
//  CPP Course

//  Created by Vidya on 18/01/24.


#include <iostream>
using namespace std;
#include <string>

int main() {
    // insert code here...
 
    int a = 3;
    {
        int a = 4;
        cout << a << endl;
    }
    cout << a << endl;
    return 0;
}

// FUNCTIONS
void greet()
{
    cout << "Welcome to the programming world!" << endl;
    return;
}

int main()
{
    greet();
}

void welcome();
char getYesNo();
void printResponse(char responseToPrint);

int main()
{
    welcome();
    char answer = getYesNo();
    printResponse(answer);
    return 0;
}

void welcome()
{
    cout << "Welcome!" << endl;
}

char getYesNo()
{
    cout << "Please answer: yes or no " << endl;
    char response;
    cin >> response;
    return response;
}
void printResponse(char responseToPrint)
{
    cout << "Your answer is: " << responseToPrint << endl;
}

int main()
{
    int a{};
    while(a<=10)
    {
        cout << a << endl;
        a++;

    }
    cout << a << endl;
}
int a{10};
void fun1(int b)
{
    ++b;
    cout << b << endl;
}
int main()
{
    fun1(a);
}

 Reference

int main()
{
    int a{23};
    int& b = a;
    cout << a << endl;
    cout << b << endl;
    cout << &a << endl; // Same memory location for both the variable and reference variable
    cout << &b << endl;
    b += 5;
    cout << a << endl; // Change in any one implies change in both variable a and b(alias of a)
    cout << b << endl;
    cout << &a << endl;
    cout << &b << endl;
}

 FUNCTION OVERLOADING

void print(int my_num);
void print(string my_str);
void print(int my_num1, int my_num2);
void print(string my_str, int my_num);
int main()
{
    print(4);
    print("SugarDaddy");
    print(4,6);
    print("Ankii",5);
}
void print(int num)
{
    cout << "Num: " << num << endl;
}
void print(string my_str)
{
    cout << "my_str: " << my_str << endl;
}
void print(int my_num1, int my_num2)
{
    cout << "My Num1: " << my_num1 << endl;
    cout << "My Num2: " << my_num2 << endl;
}
void print(string my_str, int my_num)
{
    cout << "My Str: " << my_str << endl;
    cout << "My Num:  " << my_num << endl;
}

 STRINGS

int main()
{
    string my_str("I am Stephen");
    string last = " Ullibari";
//    my_str += (" " + last);
    my_str += last;
    cout << my_str << endl;
    string a = "66";
    string b = "67";
    cout << a+b << endl;
}

 CONSTANTS

void CanPassLiterals(const int& num)
{
    cout << num << endl;
}
int main()
{
    int a = 3;
    CanPassLiterals(a);
    CanPassLiterals(4); // Can pass literal while passing by reference using const
}

 ARRAYS

int main()
{
    int myIntArr[10];

    for(int i=0;i<10;i++)
    {
        myIntArr[i] = i;
    }
    cout << myIntArr[5] << endl;
}
int main()
{
    int myArr[5] = {{1},{23},{10},{15},{7}};
    cout << myArr[0] << endl;
    cout << myArr[1] << endl;
    cout << myArr[2] << endl;
    cout << myArr[3] << endl;
    cout << myArr[4] << endl;
}

 ENUM

enum PlayerStatus
{
    PS_crouched,
    PS_standing,
    PS_walking,
    PS_running
};

enum MovementStatus
{
    MS_running,
    MS_walking
};

int main()
{
    PlayerStatus status;
    status = PS_crouched;
//  status = PlayerStatus :: PS_crouched;
    if(status == PS_crouched)
    {
        cout << "The player is crouched." << endl;
    }
    
    
    MovementStatus status1;
    status1 = MS_walking;
    cout << status1 << endl;
    
}

 Using SWITCH over IF & ELSE IF

enum PLayerStatus
{
    PS_running,
    PS_walking,
    PS_crouching
};
const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;
void UpdateMovementSpeed(PLayerStatus P_Status, float& speed);

int main()
{
    PLayerStatus status = PS_walking;
    float MovementSpeed;
    UpdateMovementSpeed(status,MovementSpeed);
    cout << "The MovementSpeed is : " << MovementSpeed << endl;
}
void UpdateMovementSpeed(PLayerStatus P_Status, float& speed)
{
    if (P_Status == PS_running)
    {
        speed = RunSpeed;
        cout << "The Running Speed of the player is " << RunSpeed << endl;
    }
    else if(P_Status == PS_walking)
    {
        speed = WalkSpeed;
        cout << "The Walking Speed of the player is " << WalkSpeed << endl;
    }
    else if(P_Status == PS_crouching)
    {
        speed = CrouchSpeed;
        cout << "The crouching Speed of the player is " << CrouchSpeed << endl;
    }
}
void UpdateMovementSpeed(PLayerStatus P_Status, float& speed)
{
    switch(P_Status)
    {
        case PS_running:
            speed = RunSpeed;
            break;
        
        case PS_walking:
            speed = WalkSpeed;
            break;
        case PS_crouching:
            speed = CrouchSpeed;
            break;
    }

}
struct LocationVector
{
    float x;
    float y;
    float z;
};

struct Player
{
    int level;
    float health;
    float damage;
    float stamina;
    
    LocationVector Location = {0.f,0.f,0.f};

    
    void TakeDamage(float dmg)
    {
        health -= dmg;
        cout << health << endl;
    }
    int getLevel()
    {
        if(level > 30)
        {
            cout << "Player is a Pro" << endl;
        }
        return level;
    }
    void Displaylocation()
    {
        cout << "The location in X is : " << Location.x << endl;
        cout << "The location in Y is : " << Location.y << endl;
        cout << "The location in Z is : " << Location.z << endl;
    }
        
};
    
int main()
{
    Player P1;
    P1.level = 45;
    P1.damage = 40.f;
    P1.health = 100.f;
    P1.stamina = 200.f;
    
    P1.TakeDamage(P1.damage);
    cout << P1.getLevel() << endl;
    P1.Displaylocation();
}

int a = 5;


int main()
{
    int* a_ptr; // Declaration of a pointer
    a_ptr = &a; // Initialization of the int pointer by passing the address of int variable
    cout << a_ptr << endl;
    cout << *a_ptr << endl; // Dereferencing the pointer to access the int variable whose address was                           stored in the int pointer
}

 Pointers to Arrays
int main()
{
    int numbers[] = {0,1,2,3,4,5,6,7,8,9};
    int* numPtr = numbers;
    
    cout << *numPtr << endl; //The address of the first variable is stored in the pointer when it is                            assigned with arrays
    
    //Arithmetic operations in an array pointer
    numPtr++;                 // address of the next element is stored in the pointer
    cout << *numPtr << endl;  // dereferenced to access the second element in the array
    
    numPtr--;
    cout << *numPtr << endl;
    
    numPtr += 3;
    cout << *numPtr << endl;
}

 Pointer to struct

struct Container
{
    string Name;
    int x;
    int y;
    int z;
};

int main()
{
    Container container = {"Sayan",2,3,4};
    Container* PtrToCont = &container;  // Address of struct container stored in a pointer to Container                                     Struct
    cout << (*PtrToCont).Name << endl;
    cout << PtrToCont->Name << endl;   // We can use this way to dereference inorder to look better
}

 Class and Object

class Dog
{
public:
    Dog(string Name, int Age)
    {
        this->name = Name;
        this->age = Age;
    }
//    
//    ~Dog()
//    {
//        
//        cout << "Dog has been deleted";
//    }
    
//private:
    string name;
    int age;
    
    void bark()
    {
        cout << "woof!" << endl;
    }
    
//    // Setters
//    void SetName(string Name)
//    {
//        this->name = Name;
//    }
//    void SetAge(int Age)
//    {
//        this->age = Age;
//    }
//    
//    // Getters
//    string GetName()
//    {
//        return this->name;
//    }
//    int GetAge()
//    {
//        return this->age;
//    }
};

int main()
{
    Dog Spot("Sheru", 5);
    Spot.name = "Sheru";
    cout << Spot.name << endl;
    cout << Spot.age << endl;
    Spot.bark();
    
 
//    Dog Rex;
//    Spot.name = "Sheru";
//    cout << Spot.name << endl;
}

 Constructor

class Dog
{
public:
    // Constructor with similar name as of class ; initializes variables to default and auto calls member functions when object is instantiated
    Dog()
    {
        Name = "default name";
        Age = 10;
        Health = 45.5f;
        
        Bark();
    }
    string Name;
    int Age;
    float Health;
    
    void Bark()
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    Dog dog;     // Bark function automatically gets called when object instance is created due to the                   constructor
    cout << dog.Name << endl;
}

 Fucntions and construtors outside the class

void Dog::Bark()
{
    cout << "Woof!" << endl;
}

Dog::Dog()
{
    Name = "default name";
    Age = 10;
    Health = 45.5f;
    Bark();
}

 Using Constructor with Struct

struct Cat
{
    Cat();
    void Meow();
    int age;
    float Health;
};

Cat::Cat()
{
    cout << "A new cat is born!" << endl;
    age = 3;
    Health = 23.4f;
    
    Meow();
}

void Cat::Meow()
{
    cout << "meooow" << endl;
}

int main()
{
    Cat cat;
    cout << cat.Health << endl;
    cout << cat.age << endl;
}

 More on Classes and Constructors

class Animal
{
public:
    Animal();
    Animal(string name,int age,int num_limb);  // Constructor overloading

    string Name;
    int Age;
    int NumberOfLimbs;
    void report();
};

int main()
{
    Animal animal;
    cout << "\n";
    Animal animal_2("Cheetah",7,5);
//    animal_2.report();

}

void Animal::report()
{
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
}

Animal::Animal()
{
    cout << "An animal is formed!" << endl;
    Name = "Default";
    Age = 2;
    NumberOfLimbs = 4;
    report();
}
Animal::Animal(string name,int age,int num_limb)
{
    Name = name;
    Age = age;
    NumberOfLimbs = num_limb;
    report();
}
 another way to initialize member variables with input parameters using constructor

Animal::Animal(string name,int age,int num_limb):Name(name),Age(age),NumberOfLimbs(num_limb)
{
    cout << "An another animal is formed!" << endl;
    report();
}

 Inheritance and constructors

class Animal
{
public:
    Animal();
    Animal(string name,int age,int num_limb);
    
    string Name;
    int Age;
    int NumberOfLimbs;
    void report();
};

class Dog : public Animal   // Inheriting child class from parent class
{
public:
    Dog();
    Dog(string name,int age,int num_limb);
    void Speak();
};

int main()
{
//    Animal animal;
//    cout << "\n";
//    Animal animal_2("Cheetah",7,5);
//    Dog dog;
    Dog dog("Sheru",10,5);
    dog.Speak();
}

void Animal::report()
{
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
}

Animal::Animal()
{
    cout << "An animal is formed!" << endl;
    Name = "Default";
    Age = 2;
    NumberOfLimbs = 4;
//    report();
}

Animal::Animal(string name,int age,int num_limb):Name(name),Age(age),NumberOfLimbs(num_limb)
{
//    cout << "An another animal is formed!" << endl;
    report();
}

Dog::Dog()
{
    cout << "A dog is formed!\n";
}

//Dog::Dog(string name,int age,int num_limb)
//{
//    Animal(name,age,num_limb);
//}

// to explicitally call a constructor we want to instead of the default constructor we can do like below
Dog::Dog(string name,int age,int num_limb):Animal(name,age,num_limb){}

void Dog:: Speak()
{
    cout << "woof!" << endl;
}

 Access Modifiers & Getters - Setters

class Creature
{
public:
    Creature();
    void SetName(string name);
    string GetName();
    float GetHealth();
    void TakeDamage(float damage);
    
private:
    string Name;
    float Health;
    
protected:
    int NumberOfLimbs;
};

class Goblin : public Creature
{
public:
    Goblin();
    int GetNumberOfLimbs();
    
};

Creature::Creature()
{
    cout << "Creature is formed!" << endl;
    Health = 100.f;
}

void Creature::SetName(string name)
{
    Name = name;
}

string Creature::GetName()
{
    return Name;
}

float Creature::GetHealth()
{
    return Health;
}

int Goblin::GetNumberOfLimbs()
{
    return NumberOfLimbs;
}

void Creature::TakeDamage(float damage)
{
    float Total = 0.f;
    Total = Health - damage;
    if(Total <= 0)
    {
        cout << GetName() << "is dead.\n";
    }
    else;
    {
        Health -= damage;
        cout << "Health of "<< GetName() << ": " << Health << endl;
    }
}

Goblin::Goblin()
{
    NumberOfLimbs = 5;
    SetName("Gobby");
    cout << GetName() << endl;
    
}

int main()
{
//    Creature Bot;
//    Bot.SetName("Sayan");
//    cout << Bot.GetName() << endl;
//    Bot.TakeDamage(45.0);
    Goblin Gobby;
    cout << Gobby.GetNumberOfLimbs() << endl;
    
}

Dynamic Memory alloaction ; Heap and Stack

struct Character
{
    Character();
    string Name;
    float Health;
    void PrintHealth();
};

int main()
{
//    Character* PtrToChar = new Character();
//    cout << PtrToChar->Name << endl;
//    cout << PtrToChar->Health << endl;
//    delete PtrToChar;
    for(int i = 0; i < 10; i++)
    {
        Character* PtrToChar = new Character;
        cout << PtrToChar->Name << endl;
        PtrToChar->PrintHealth();
        delete PtrToChar;
    }
}

Character::Character()
{
    Name = "Batman";
    Health = 100.f;
}

void Character::PrintHealth()
{
    cout << Health << endl;
}

 Destructor

class Character
{
public:
    Character();
    ~Character();
    
    int* CharacterAge;
    float* CharacterHealth;
    
    void DisplayData();
};

int main()
{
    Character* Char = new Character;
    Char->DisplayData();
    delete Char;
}

Character::Character()
{
    cout << "A new character was created!\n";
    CharacterAge = new int(1);
    CharacterHealth = new float(100.f);
}

Character::~Character()
{
    cout << "Character Destroyed!\n";
}

void Character::DisplayData()
{
    cout << *CharacterAge << endl;
    cout << *CharacterHealth << endl;
}

Static Keyword

void AddToCount()
{
    static int count = 0;
    count++;
    cout << count << endl;
}

int main()
{
    for(int i = 0;i < 100; i++)
    {
        AddToCount();
    }
}

class Item
{
public:
    Item();
    ~Item();
    
    static int GiveANumber()
    {
        return 42;
    }
};

int main()
{
    {
        static Item item;
    }
}

Item::Item()
{
    cout << "An item has been created!\n";
}
Item::~Item()
{
    cout << "Item destroyed!\n";
}

class Critter
{
public:
    Critter()
    {
        cout << "A critter is born!\n";
        ++CritterCount;
    }
    static void AnnounceCount()
    {
        cout << CritterCount << endl;
    }
    static int CritterCount;
};

int Critter::CritterCount = 0;

int main()
{
//    Critter crit;
//    Critter::CritterCount = 15;
//    cout << Critter::CritterCount << endl;
//    Critter crit_2;
//    cout << Critter::CritterCount << endl;

    Critter::AnnounceCount();
}

Virtual Function and Overriding Function;

class Object
{
public:
    virtual void BeginPlay();
};

class Actor : public Object
{
public:
    virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
    virtual void BeginPlay() override;
};
    
    

int main()
{
    Object* obj = new Object;
    obj->BeginPlay();
    
    Actor* act = new Actor;
    act->BeginPlay();
    
    Pawn* pwn = new Pawn;
    pwn->BeginPlay();
    
    
    delete obj;
    delete act;
    delete pwn;
}

void Object::BeginPlay()
{
    cout << "Object BeginPlay() called!\n";
}

void Actor::BeginPlay()
{
    cout << "Actor BeginPlay() called!\n";
}

void Pawn::BeginPlay()
{
    cout << "Pawn BeginPlay() called!\n" << endl;
}

 Pure Virtual Function

class shape
{
public:
    virtual ~shape() = default;
    virtual double area()  = 0;
    virtual double perimeter() const = 0;
};

int main()
{
//    shape square;
}

 Polymorphism

class Object
{
public:
    virtual void BeginPlay();
};

class Actor : public Object
{
public:
    virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
    virtual void BeginPlay() override;
};
    
    

int main()
{
    Object* ptr_to_object = new Object;
    Actor* ptr_to_actor = new Actor;
    Pawn* ptr_to_pawn = new Pawn;
    
    Object* ObjectArray[] = {ptr_to_object,ptr_to_actor,ptr_to_pawn};
    
    for(int i = 0; i < 3; i++)
    {
        ObjectArray[i]->BeginPlay();
    }
    
    delete ptr_to_object;
    delete ptr_to_actor;
    delete ptr_to_pawn;
}

void Object::BeginPlay()
{
    cout << "Object BeginPlay() called!\n";
}

void Actor::BeginPlay()
{
    cout << "Actor BeginPlay() called!\n";
}

void Pawn::BeginPlay()
{
    cout << "Pawn BeginPlay() called!\n" << endl;
}

 Casting

class Object
{
public:
    virtual void BeginPlay();
    void ObjectFunction()
    {
        cout << "ObjectFunction() called.\n";
    }
};

class Actor : public Object
{
public:
    virtual void BeginPlay() override;
    void ActorFunction()
    {
        cout << "ActorFunction() called.\n";
    }
};

class Pawn : public Actor
{
public:
    virtual void BeginPlay() override;
    void PawnFunction()
    {
        cout << "PawnFunction() called.\n";
    }
};
    
    

int main()
{
    Object* ptr_to_object = new Object;
    Actor* ptr_to_actor = new Actor;
    Pawn* ptr_to_pawn = new Pawn;
    
    Object* ObjectArray[] = {ptr_to_object,ptr_to_actor,ptr_to_pawn};
    
  
    
    for(int i = 0; i < 3; i++)
    {
        Object* obj = ObjectArray[i];
        
        Actor* act = dynamic_cast<Actor*>(obj);
        
        if(act)
        {
            act->ActorFunction();
        }
        
        Pawn* pwn = dynamic_cast<Pawn*>(obj);
        
        if(pwn)
        {
            pwn->PawnFunction();
        }
    }
    
    delete ptr_to_object;
    delete ptr_to_actor;
    delete ptr_to_pawn;
}

void Object::BeginPlay()
{
    cout << "Object BeginPlay() called!\n";
}

void Actor::BeginPlay()
{
    cout << "Actor BeginPlay() called!\n";
}

void Pawn::BeginPlay()
{
    cout << "Pawn BeginPlay() called!\n" << endl;
}
*/

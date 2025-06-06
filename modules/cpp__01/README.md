# C++ - Module 01

## Memory allocation, pointers to members,

## references and switch statements

_Summary:
This document contains the exercises of Module 01 from C++ modules._

```
Version: 10.
```

## Contents

- I Introduction
- II General rules
- III Exercise 00: BraiiiiiiinnnzzzZ
- IV Exercise 01: Moar brainz!
- V Exercise 02: HI THIS IS BRAIN
- VI Exercise 03: Unnecessary violence
- VII Exercise 04: Sed is for losers
- VIII Exercise 05: Harl 2.0
- IX Exercise 06: Harl filter
- X Submission and peer-evaluation

---

## C++ - Module 01

```
Memory allocation, pointers to members,
references and switch statements
```
- Note that unless explicitly stated otherwise, theusing namespace <ns_name>and
    friendkeywords are forbidden. Otherwise, your grade will be -42.
- **You are allowed to use the STL only in Modules 08 and 09.** That means:
    no **Containers** (vector/list/map, and so forth) and no **Algorithms** (anything that
    requires including the<algorithm>header) until then. Otherwise, your grade will
    be -42.

```
A few design requirements
```
- Memory leakage occurs in C++ too. When you allocate memory (by using thenew
    keyword), you must avoid **memory leaks**.
- From Module 02 to Module 09, your classes must be designed in the **Orthodox**
    **Canonical Form, except when explicitly stated otherwise**.
- Any function implementation put in a header file (except for function templates)
    means 0 to the exercise.
- You should be able to use each of your headers independently from others. Thus,
    they must include all the dependencies they need. However, you must avoid the
    problem of double inclusion by adding **include guards**. Otherwise, your grade will
    be 0.

```

```
- You can add some additional files if you need to (i.e., to split your code). As these
    assignments are not verified by a program, feel free to do so as long as you turn in
    the mandatory files.
- Sometimes, the guidelines of an exercise look short but the examples can show
    requirements that are not explicitly written in the instructions.
- Read each module completely before starting! Really, do it.
- By Odin, by Thor! Use your brain!!!

```
Regarding the Makefile for C++ projects, the same rules as in C apply
(see the Norm chapter about the Makefile).
```
```
You will have to implement a lot of classes. This can seem tedious,
unless you’re able to script your favorite text editor.
```

C++ - Module 01

```
Memory allocation, pointers to members,
references and switch statements
```
```
You are given a certain amount of freedom to complete the exercises.
However, follow the mandatory rules and don’t be lazy. You would
miss a lot of useful information! Do not hesitate to read about
theoretical concepts.
```

# Chapter III

# Exercise 00: BraiiiiiiinnnzzzZ

```
Exercise : 00
```
```
BraiiiiiiinnnzzzZ
Turn-in directory : ex 00 /
Files to turn in :Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp,
newZombie.cpp, randomChump.cpp
Forbidden functions :None
```
First, implement a **Zombie** class. It has a private string attributename.
Add a member functionvoid announce( void ); to the Zombie class. Zombies
announce themselves as follows:

```
<name>: BraiiiiiiinnnzzzZ...
```
Do not print the angle brackets (< and >). For a zombie named Foo, the message
would be:

```
Foo: BraiiiiiiinnnzzzZ...
```
```
Then, implement the following two functions:
```
- Zombie* newZombie( std::string name );
    This function creates a zombie, names it, and returns it so you can use it outside
    of the function scope.
- void randomChump( std::string name );
    This function creates a zombie, names it, and makes it announce itself.

Now, what is the actual point of the exercise? You have to determine in which case
it is better to allocate zombies on the stack or the heap.

Zombies must be destroyed when you no longer need them. The destructor must print
a message with the name of the zombie for debugging purposes.


# Chapter IV

# Exercise 01: Moar brainz!

```
Exercise : 01
```
```
Moar brainz!
Turn-in directory : ex 01 /
Files to turn in :Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp,
zombieHorde.cpp
Forbidden functions :None
```
```
Time to create a horde of Zombies!
```
```
Implement the following function in the appropriate file:
```
```
Zombie* zombieHorde( int N, std::string name );
```
It must allocateNZombie objects in a single allocation. Then, it must initialize the
zombies, giving each of them the name passed as a parameter. The function returns a
pointer to the first zombie.
Implement your own tests to ensure that yourzombieHorde()function works as ex-
pected. Try callingannounce()for each of the zombies.

Do not forget to usedeleteto deallocate all the zombies and check for **memory
leaks**.


# Chapter V

# Exercise 02: HI THIS IS BRAIN

```
Exercise : 02
```
```
HI THIS IS BRAIN
Turn-in directory : ex 02 /
Files to turn in :Makefile, main.cpp
Forbidden functions :None
```
```
Write a program that contains:
```
- A string variable initialized to "HI THIS IS BRAIN".
- stringPTR: a pointer to the string.
- stringREF: a reference to the string.

```
Your program must print:
```
- The memory address of the string variable.
- The memory address held bystringPTR.
- The memory address held bystringREF.

```
And then:
```
- The value of the string variable.
- The value pointed to bystringPTR.
- The value pointed to bystringREF.

That’s all—no tricks. The goal of this exercise is to demystify references, which may
seem completely new. Although there are some small differences, this is simply another
syntax for something you already do: address manipulation.


# Chapter VI

# Exercise 03: Unnecessary violence

```
Exercise : 03
```
```
Unnecessary violence
Turn-in directory : ex 03 /
Files to turn in :Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h,
hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp
Forbidden functions :None
```
```
Implement a Weapon class that has:
```
- A private attributetype, which is a string.
- A getType()member function that returns a constant reference totype.
- A setType()member function that setstypeusing the new value passed as a pa-
    rameter.

Now, create two classes: **HumanA** and **HumanB**. They both have aWeaponand
aname. They also have a member functionattack()that displays (without the angle
brackets):

```
<name> attacks with their <weapon type>
```
```
HumanA and HumanB are almost identical except for these two small details:
```
- While **HumanA** takes theWeaponin its constructor, **HumanB** does not.
- **HumanB** may **not always** have a weapon, whereas **HumanA** will **always** be
    armed.


C++ - Module 01

```
Memory allocation, pointers to members,
references and switch statements
```
If your implementation is correct, executing the following code will print an attack
with "crude spiked club" followed by a second attack with "some other type of club" for
both test cases:

```
int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}
```
```
Do not forget to check for memory leaks.
```
```
In which case do you think it would be best to use a pointer to
Weapon? And a reference to Weapon? Why? Think about it before
starting this exercise.
```

# Chapter VII

# Exercise 04: Sed is for losers

```
Exercise : 04
```
```
Sed is for losers
Turn-in directory : ex 04 /
Files to turn in :Makefile, main.cpp, *.cpp, *.{h, hpp}
Forbidden functions :std::string::replace
```
Create a program that takes three parameters in the following order: a filename and
two strings,s1ands2.
It must open the file<filename>and copy its content into a new file
<filename>.replace, replacing every occurrence ofs1withs2.

Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the classstd::stringare allowed, exceptreplace. Use them
wisely!

Of course, handle unexpected inputs and errors. You must create and turn in your
own tests to ensure that your program works as expected.


# Chapter VIII

# Exercise 05: Harl 2.

```
Exercise : 05
```
```
Harl 2.
Turn-in directory : ex 05 /
Files to turn in :Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions :None
```
Do you know Harl? We all do, don’t we? In case you don’t, find below the kind of
comments Harl makes. They are classified by levels:

- " **DEBUG** " level: Debug messages contain contextual information. They are mostly
    used for problem diagnosis.
    Example: _"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-_
    _ketchup burger. I really do!"_
- " **INFO** " level: These messages contain extensive information. They are helpful for
    tracing program execution in a production environment.
    Example: _"I cannot believe adding extra bacon costs more money. You didn’t put_
    _enough bacon in my burger! If you did, I wouldn’t be asking for more!"_
- " **WARNING** " level: Warning messages indicate a potential issue in the system.
    However, it can be handled or ignored.
    Example: _"I think I deserve to have some extra bacon for free. I’ve been coming for_
    _years, whereas you started working here just last month."_
- " **ERROR** " level: These messages indicate that an unrecoverable error has occurred.
    This is usually a critical issue that requires manual intervention.
    Example: _"This is unacceptable! I want to speak to the manager now."_


C++ - Module 01

```
Memory allocation, pointers to members,
references and switch statements
```
You are going to automate Harl. It won’t be difficult since he always says the same
things. You have to create a **Harl** class with the following private member functions:

- void debug( void );
- void info( void );
- void warning( void );
- void error( void );

**Harl** also has a public member function that calls the four member functions above
depending on the level passed as a parameter:

```
void complain( std::string level );
```
The goal of this exercise is to use **pointers to member functions**. This is not a
suggestion. Harl has to complain without using a forest of if/else if/else. He doesn’t
think twice!

Create and turn in tests to show that Harl complains a lot. You can use the examples
of comments listed above in the subject or choose to use comments of your own.


# Chapter IX

# Exercise 06: Harl filter

```
Exercise : 06
```
```
Harl filter
Turn-in directory : ex 06 /
Files to turn in :Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions :None
```
Sometimes you don’t want to pay attention to everything Harl says. Implement a
system to filter what Harl says depending on the log levels you want to listen to.

Create a program that takes as a parameter one of the four levels. It will display all
messages from this level and above. For example:

$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years, whereas you started working here just last month.

[ ERROR ]
This is unacceptable! I want to speak to the manager now.

$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]

Although there are several ways to deal with Harl, one of the most effective is to
SWITCH it off.

```
Give the nameharlFilterto your executable.
```
```
You must use, and maybe discover, the switch statement in this exercise.
```
```
You can pass this module without doing exercise 06.
```
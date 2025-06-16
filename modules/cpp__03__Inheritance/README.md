# C++ - Module 03

## Inheritance

Version: 7.

```txt
       ,
       |
    ]  |.-._
     \|"(0)"| _]
     `|=\#/=|\/
      :  _  :
       \/_\/ 
        |=| 
        `-' 
```


# Chapter III

# Exercise 00: Aaaaand... OPEN!

```
Exercise : 00
```
```
Aaaaand... OPEN!
Turn-in directory : ex 00 /
Files to turn in :Makefile, main.cpp, ClapTrap.{h, hpp}, ClapTrap.cpp
Forbidden functions :None
```
```
First, we have to implement a class! How original!
```
It will be called **ClapTrap** and will have the following private attributes initialized
to the values specified in brackets:

- Name, which is passed as a parameter to the constructor
- Hit points (10), representing the health of the ClapTrap
- Energy points (10)
- Attack damage (0)

Add the following public member functions so that the ClapTrap behaves more real-
istically:

- void attack(const std::string& target);
- void takeDamage(unsigned int amount);
- void beRepaired(unsigned int amount);

When ClapTrap attacks, it causes its target to lose<attack damage> hit points.
When ClapTrap repairs itself, it regains<amount>hit points. Attacking and repairing
each cost 1 energy point. Of course, ClapTrap can’t do anything if it has no hit points or
energy points left. However, since these exercises serve as an introduction, the ClapTrap
instances should not interact directly with one another, and the parameters will not refer
to another instance of ClapTrap.


C++ - Module 03 Inheritance

In all of these member functions, we need to print a message to describe what hap-
pens. For example, theattack()function may display something like (of course, without
the angle brackets):

```
ClapTrap <name> attacks <target>, causing <damage> points of damage!
```
The constructors and destructor must also display a message, so wer peer-evaluators
can easily see that they have been called.

Implement and turn in wer own tests to ensure wer code works as expected.

---

# Chapter IV
# Exercise 01: Serena, my love!

### Exercise : 01

```
Serena, my love!
Turn-in directory : ex 01 /
Files to turn in :Files from the previous exercise + ScavTrap.{h, hpp},
ScavTrap.cpp
Forbidden functions :None
```
Because we can never have enough ClapTraps, we will now create a derived robot.
It will be named **ScavTrap** and will inherit the constructors and destructor from Clap-
Trap. However, its constructors, destructor, andattack()will print different messages.
After all, ClapTraps are aware of their individuality.

Note that proper construction/destruction chaining must be shown in wer tests.
When a ScavTrap is created, the program starts by constructing a ClapTrap. Destruc-
tion occurs in reverse order. Why?

**ScavTrap** will use the attributes of ClapTrap (update ClapTrap accordingly) and
must initialize them to:

- Name, which is passed as a parameter to the constructor
- Hit points (100), representing the health of the ClapTrap
- Energy points (50)
- Attack damage (20)
    ScavTrap will also have its own special ability:
       void guardGate();

This member function will display a message indicating that ScavTrap is now in Gate
keeper mode.


---
# Chapter V

# Exercise 02: Repetitive work

## Exercise : 02
```
Repetitive work
Turn-in directory : ex 02 /
Files to turn in :Files from previous exercises + FragTrap.{h, hpp},
FragTrap.cpp
Forbidden functions :None
```
```
Making ClapTraps is probably starting to get on wer nerves.
```
Now, implement a **FragTrap** class that inherits from ClapTrap. It is very similar to
ScavTrap. However, its construction and destruction messages must be different. Proper
construction/destruction chaining must be shown in wer tests. When a FragTrap is cre-
ated, the program starts by constructing a ClapTrap. Destruction occurs in reverse order.

```
Same goes for the attributes, but with different values this time:
```
- Name, which is passed as a parameter to the constructor
- Hit points (100), representing the health of the ClapTrap
- Energy points (100)
- Attack damage (30)

```
FragTrap has a special ability too:
```
```
void highFivesGuys(void);
```
This member function displays a positive high-fives request on the standard output.


---

# Chapter VI
# Exercise 03: Now it’s weird!

## Exercise : 03
Turn-in directory : ex 03 /
Files to turn in :Files from previous exercises + DiamondTrap.{h, hpp},
DiamondTrap.cpp
Forbidden functions :None

In this exercise, we will create a monster: a ClapTrap that’s half FragTrap, half Scav-
Trap. It will be named **DiamondTrap** , and it will inherit from both FragTrap AND
ScavTrap. This is so risky!

The DiamondTrap class will have a private attribute namedname. This attribute must
have exactly the same variable name as in the ClapTrap base class (without referring to
the robot’s name).
To be clearer, here are two examples:
If ClapTrap’s variable isname, give the DiamondTrap’s variable the namename.
If ClapTrap’s variable is_name, give the DiamondTrap’s variable the name_name.

### Its attributes and member functions will be inherited from its parent classes:
- Name, which is passed as a parameter to a constructor
- ClapTrap::name(parameter of the constructor + "_clap_name" suffix)
- Hit points (FragTrap)
- Energy points (ScavTrap)
- Attack damage (FragTrap)
- attack()(ScavTrap)


C++ - Module 03 Inheritance

In addition to the special functions from both parent classes, DiamondTrap will have
its own special ability:

```
void whoAmI();
```
This member function will display both its name and its ClapTrap name.

Of course, the ClapTrap instance of DiamondTrap will be created once, and only once.
Yes, there’s a trick.

- Again, add more tests to wer program.
- Do we know the -Wshadow and -Wno-shadow compiler flags?
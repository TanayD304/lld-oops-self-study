# Session 01 - Introduction to Object-Oriented Programming (OOP)

> Phase 1 – OOP Foundations
>
> Language: C++17
>
> Difficulty: ⭐☆☆☆☆
>
> Goal: Build the mindset required to think like a software engineer before writing code.

---

# Learning Objectives

After completing this session, you should be able to:

- Explain why OOP was invented.
- Compare Procedural Programming with Object-Oriented Programming.
- Understand Class vs Object.
- Explain State, Behaviour and Identity.
- Understand Object Lifecycle.
- Know the Four Pillars of OOP at a conceptual level.
- Understand when to use OOP and when not to.
- Model real-world problems into objects.
- Answer basic Google SDE interview questions related to OOP.

---

# Introduction

Object-Oriented Programming is one of the most influential software development paradigms ever created.

However, OOP is **not** about classes.

It is **not** about inheritance.

It is **not** about memorizing four pillars.

OOP is a way of **thinking**.

The biggest mindset shift is:

> Stop thinking about functions.

Start thinking about **objects and responsibilities**.

---

# Evolution of Programming

Software development evolved because software itself evolved.

Initially, programs were very small.

Example:

- Calculator
- Student Marks
- Payroll
- Inventory

A few functions were enough.

Example:

```cpp
add();
subtract();
multiply();
divide();
```

Everything was manageable.

Then software became:

- Operating Systems
- Banking Systems
- Telecom Systems
- Social Media
- E-Commerce
- Distributed Systems

Instead of hundreds of lines of code...

Software became millions of lines of code.

Suddenly procedural programming started showing its weaknesses.

---

# Procedural Programming

Procedural Programming organizes software around **functions**.

Example:

```cpp
readStudent();

updateStudent();

displayStudent();

saveStudent();

deleteStudent();
```

The data lives separately.

Functions operate on that data.

Visualization

```
Data

↓

Functions

↓

Output
```

This works well for small applications.

It becomes difficult for large applications.

---

# Problems with Procedural Programming

Imagine a Library Management System.

Initially

```
Book

↓

display()

↓

save()
```

Everything looks clean.

Now new requirements arrive.

```
Borrow Book

Return Book

Reserve Book

Fine

Renew

Inventory

Notification

Payment

Report
```

Soon you have

```
100+

Functions

↓

All operating on Book
```

Question:

Who owns the Book?

Answer:

Nobody.

Every function can modify it.

---

# Major Problems

## 1. No Ownership

Every function has direct access to the data.

```cpp
student.cgpa = 50;
```

Nothing prevents invalid data.

---

## 2. Low Cohesion

Related functionality becomes scattered.

Instead of

```
Student

↓

Everything related to Student
```

you get

```
Student.cpp

Utils.cpp

Database.cpp

Helper.cpp

Validation.cpp
```

Responsibilities become scattered.

---

## 3. High Coupling

Many modules depend on the same data.

Changing one structure forces multiple files to change.

---

## 4. Difficult Maintenance

Large systems become difficult to modify.

Small changes have unexpected consequences.

---

## 5. Difficult Scaling

As software grows,

functions grow faster than understanding.

---

# Why OOP Was Invented

Software engineers asked one simple question.

> Why don't we keep the data and the functions operating on that data together?

That single idea became Object-Oriented Programming.

Instead of

```cpp
Student student;

displayStudent(student);

updateStudent(student);
```

We write

```cpp
Student student;

student.display();

student.updateCGPA();
```

The object owns both

- Data
- Behaviour

---

# Definition of OOP

## Simple Definition

Object-Oriented Programming is a programming paradigm that organizes software around objects instead of standalone functions.

---

## Interview Definition

Object-Oriented Programming is a programming paradigm that models software as interacting objects containing both state (data) and behaviour (methods), improving modularity, maintainability and extensibility.

---

# Biggest Mindset Shift

Procedural Programming asks:

> Which function should I call?

Object-Oriented Programming asks:

> Which object should be responsible?

This is the single most important sentence of Session 1.

---

# Real World Analogy

Consider a Car.

State

- Fuel
- Speed
- Gear

Behaviour

- Start
- Accelerate
- Brake
- Turn

Would you allow someone to write

```cpp
car.speed = 5000;
```

No.

Instead,

```cpp
car.accelerate();
```

The object itself decides how its internal state changes.

This is OOP.

---

# Another Analogy

Human

State

- Name
- Age
- Weight
- Energy

Behaviour

- Eat
- Sleep
- Walk
- Study
- Run

Identity

- Aadhaar Number
- Passport Number
- Memory Address (programming)

---

# Ericsson Example

Suppose MTAS has a Subscriber.

Procedural approach

```cpp
createSubscriber();

updateSubscriber();

backupSubscriber();

restoreSubscriber();

authenticateSubscriber();

deleteSubscriber();
```

Every function receives

```cpp
Subscriber&
```

Eventually

Every module starts depending on Subscriber.

Maintenance becomes difficult.

OOP instead creates

```cpp
Subscriber
```

that owns

- Configuration
- Validation
- Operations

Responsibilities remain together.

---

# When Should You Use OOP?

Use OOP when:

- Real-world entities exist.
- Entities have state.
- Entities perform actions.
- Entities interact with each other.
- Long-term maintainability matters.

Examples

- Banking System
- Library Management
- ATM
- Hospital
- Ericsson MTAS
- BookMyShow
- Parking Lot
- Food Delivery
- Splitwise

---

# When NOT to Use OOP

Not every problem requires objects.

Examples

```cpp
int gcd(int a,int b);

binarySearch();

mergeSort();

quickSort();
```

These are algorithms.

They don't naturally model real-world entities.

A simple function is often the better choice.

Remember

> OOP is a tool.

Not a religion.

---

# Interview Notes

Q. Why was OOP invented?

Expected Answer

As software systems became larger, procedural programming became difficult to maintain because data and behaviour were scattered across many functions. OOP groups related state and behaviour together into objects, improving modularity, maintainability and scalability.

---

Q. Is OOP always better?

Answer

No.

OOP is excellent for modelling complex systems with interacting entities.

For algorithms, mathematical computations and small utilities, procedural programming is often simpler and more appropriate.

---

# Session Takeaway

Remember only one sentence.

> Procedural Programming organizes software around functions.

> Object-Oriented Programming organizes software around objects.

---

# Procedural Programming vs Object-Oriented Programming

Before understanding classes and objects, it is important to understand the difference between the two major paradigms.

Both are valid.

Both solve problems.

The real question is:

> Which paradigm is better suited for the problem?

---

# Procedural Programming

Procedural Programming organizes software around **functions**.

The primary focus is:

```
Functions

↓

Data
```

Example

```cpp
struct Student
{
    std::string name;
    int rollNo;
    float cgpa;
};

void displayStudent(Student&);
void updateCGPA(Student&);
void saveStudent(Student&);
void deleteStudent(Student&);
```

Notice that the data and the functions are separate.

---

## Visualization

```
                Student

          +----------------+
          | name           |
          | rollNo         |
          | cgpa           |
          +----------------+

displayStudent()

updateCGPA()

saveStudent()

deleteStudent()
```

The Student does not own any behaviour.

Every function can operate on it.

---

# Problems with Procedural Programming

## Problem 1 — No Ownership

Who owns Student?

Nobody.

Every function can modify Student.

```cpp
student.cgpa = 50;
```

Compiler error?

No.

Validation?

No.

Anyone can modify anything.

---

## Problem 2 — Validation Everywhere

Suppose CGPA should always remain between 0 and 10.

Every function must remember to validate it.

```cpp
if(cgpa >= 0 && cgpa <= 10)
```

If one developer forgets,

bugs enter the system.

---

## Problem 3 — High Coupling

Everything depends on Student.

```
Display Module

↓

Student

↑

Database Module

↑

Scholarship Module

↑

Report Module

↑

Email Module
```

Changing Student forces multiple modules to change.

---

## Problem 4 — Low Cohesion

Responsibilities become scattered.

Instead of one place handling Student,

Student-related logic exists in many files.

Maintenance becomes difficult.

---

# Object-Oriented Programming

Instead of separating data and behaviour,

we combine them.

```cpp
class Student
{
private:

    std::string name;
    int rollNo;
    float cgpa;

public:

    void display();

    void updateCGPA(float);

    void study();
};
```

Now Student owns

- its own data
- its own behaviour

---

## Visualization

```
+--------------------------------------+

              Student

----------------------------------------

name

rollNo

cgpa

----------------------------------------

display()

updateCGPA()

study()

+--------------------------------------+
```

Everything related to Student stays together.

---

# Ownership

This is one of the biggest ideas in OOP.

Instead of

```
Everyone owns Student
```

we now have

```
Student

↓

Owns

↓

Student Data
```

The object is responsible for protecting and maintaining its own state.

---

# Example

Instead of

```cpp
student.cgpa = 15;
```

We write

```cpp
student.updateCGPA(9.2);
```

The object validates the value before updating it.

This is the beginning of Encapsulation.

---

# Real World Analogy

Imagine a TV.

State

```
Volume

Channel

Power
```

Behaviour

```
Increase Volume

Decrease Volume

Change Channel

Turn On

Turn Off
```

Nobody directly writes

```cpp
tv.volume = 500;
```

Instead,

```cpp
tv.increaseVolume();
```

The object protects itself.

---

# Responsibilities

One of the biggest mistakes beginners make is assigning behaviour to the wrong object.

Example

```
ATM

↓

withdraw()
```

Question

Who owns the balance?

Answer

```
Account
```

Therefore

```cpp
Account::withdraw()
```

is a much better design.

---

# Responsibility Assignment Rule

Whenever you write a function,

ask yourself

> Which object owns the data this function changes?

Example

```
withdraw()

↓

Changes

↓

balance
```

Who owns balance?

```
Account
```

Therefore

```
Account::withdraw()
```

---

# Procedural vs OOP

| Procedural Programming | Object-Oriented Programming |
|------------------------|-----------------------------|
| Organized around functions | Organized around objects |
| Data and functions are separate | Data and behaviour stay together |
| Low ownership | Clear ownership |
| Difficult to maintain | Easier to maintain |
| High coupling | Better modularity |
| Validation everywhere | Validation inside the object |
| Best for algorithms | Best for large systems |

---

# Advantages of OOP over Procedural Programming

- Better organization
- Better maintainability
- Better scalability
- Easier debugging
- Easier testing
- Better responsibility assignment
- Better modelling of real-world systems

---

# Is OOP Always Better?

No.

Consider

```cpp
int gcd(int a, int b);
```

Would creating

```cpp
class GCDCalculator
{
public:
    int gcd(int,int);
};
```

improve the design?

No.

It introduces unnecessary complexity.

Good engineers choose the right abstraction.

---

# Decision Framework

```
Does the problem contain
real-world entities?

        │
        ▼
      Yes
        │
        ▼
Do they have state?

        │
        ▼
      Yes
        │
        ▼
Do they perform actions?

        │
        ▼
      Yes
        │
        ▼
Use OOP
```

Otherwise,

procedural programming may be a better choice.

---

# Google Interview Notes

Question

Why is OOP preferred over Procedural Programming?

Expected Answer

Procedural programming separates data and behaviour, which becomes difficult to maintain as software grows. Object-Oriented Programming groups related state and behaviour into objects, improving ownership, modularity, maintainability and extensibility.

---

Question

Is OOP always the best choice?

Expected Answer

No.

For systems with interacting entities, OOP is usually a better fit.

For algorithms, mathematical computations and utility functions, procedural programming is often simpler and more efficient.

---

# Common Mistakes

❌ Thinking OOP means "using classes."

A class without responsibilities is simply procedural code wrapped in a class.

---

❌ Creating a class for every noun.

Not every noun deserves to become an object.

Ask:

- Does it have state?
- Does it have behaviour?
- Does it have identity?

---

❌ Assigning behaviour to the wrong object.

Bad

```
ATM::withdraw()
```

Better

```
Account::withdraw()
```

because the Account owns the balance.

---

# Session Summary

Remember these three rules.

1.

Procedural Programming organizes software around functions.

1.

Object-Oriented Programming organizes software around objects.

1.

Every behaviour should belong to the object that owns the data it modifies.

These three ideas form the foundation of all future OOP and Low-Level Design concepts.

---

# Class vs Object

This is one of the most important concepts in Object-Oriented Programming.

Most beginners memorize:

> "A class is a blueprint."

While technically correct, it is incomplete.

As a software engineer, you should understand what a class actually represents and what happens internally when objects are created.

---

# What is a Class?

A class is a **user-defined data type**.

Just as C++ provides built-in types like

```cpp
int
float
char
double
```

we can create our own type.

Example

```cpp
class Student
{
public:
    std::string name;
    int rollNo;

    void study();
};
```

Now `Student` becomes a new type.

```cpp
Student s;
```

works exactly like

```cpp
int age;
```

The difference is that **Student is designed by the programmer.**

---

# Definition

A class describes

- What data an object contains.
- What operations an object can perform.

A class **does not create an object.**

It merely defines the structure.

---

# Real World Analogy

Think about a house blueprint.

The blueprint specifies

- Number of rooms
- Doors
- Windows
- Kitchen

Question

Can you live inside the blueprint?

No.

It only describes how a house should be built.

Similarly,

a class describes how objects should be created.

---

# Another Analogy

Pizza Recipe

Recipe

```
Ingredients

Cheese

Tomato

Bread
```

Instructions

```
Bake

Serve
```

Does the recipe itself become a pizza?

No.

Only when someone follows the recipe is a pizza created.

Likewise,

the class defines the object.

The object is the real thing.

---

# What is an Object?

An object is an **instance of a class.**

Example

```cpp
Student s1;
```

Memory is now allocated.

A real Student object exists.

---

Multiple Objects

```cpp
Student s1;

Student s2;

Student s3;
```

Visualization

```
Student Class

        │
        │
        ▼

+------------+

Student s1

+------------+

Student s2

+------------+

Student s3

+------------+
```

One class.

Many objects.

---

# Important Observation

Every object has

its own

```
name

rollNo
```

But...

How many copies of

```cpp
study()
```

exist?

Let's understand.

---

# Member Functions

Consider

```cpp
class Student
{
public:

    std::string name;

    int rollNo;

    void study()
    {
        std::cout << "Studying";
    }
};
```

Now create

```cpp
Student s1;

Student s2;

Student s3;
```

Question

How many copies of

```
name
```

exist?

Answer

```
3
```

Each object stores its own data.

---

Question

How many copies of

```
study()
```

exist?

Answer

```
1
```

The compiler stores the machine code only once.

Every object shares that function.

---

# Memory Visualization

```
OBJECTS

+-------------------+
| Student s1        |
|-------------------|
| name              |
| rollNo            |
+-------------------+

+-------------------+
| Student s2        |
|-------------------|
| name              |
| rollNo            |
+-------------------+

+-------------------+
| Student s3        |
|-------------------|
| name              |
| rollNo            |
+-------------------+

------------------------------

CODE SEGMENT

study()

display()

updateCGPA()
```

Three copies of data.

One copy of code.

This is memory efficient.

---

# Hidden this Pointer (Introduction)

Question

How does

```cpp
s2.study();
```

know it should use

```
s2.name
```

instead of

```
s1.name
```

Answer

The compiler secretly passes a pointer called

```
this
```

Conceptually,

```cpp
s2.study();
```

becomes

```cpp
study(&s2);
```

Inside the function

```
this
```

points to the object that invoked it.

This allows one shared function to work with multiple objects.

We will study `this` in detail in Session 2.

---

# Does a Class Occupy Memory?

Interview Question

```cpp
class Student
{
public:

    std::string name;

    int age;
};
```

How much memory does

```
Student
```

occupy?

Answer

Zero bytes for object instances.

A class is a type definition.

Memory is allocated only when an object is created.

Example

```cpp
Student s;
```

Now memory is reserved for `s`.

---

# Object Creation

When we write

```cpp
Student s;
```

Conceptually the following happens

```
Compiler sees Student

↓

Recognizes Student as a user-defined type

↓

Allocates memory for object

↓

Calls constructor (later sessions)

↓

Object becomes usable
```

---

# Identity

Suppose

```cpp
Student s1;

Student s2;
```

Now

```cpp
s1.name = "Tanay";

s2.name = "Tanay";
```

Also

```cpp
s1.rollNo = 101;

s2.rollNo = 101;
```

Question

Are they the same object?

No.

Because

```
&s1 != &s2
```

Identity is different.

---

# Identity Visualization

```
Student s1

Address

0x100

---------------------

Student s2

Address

0x200
```

Same data.

Different identity.

---

# Stack vs Heap (Introduction)

Objects can live in different memory regions.

---

## Stack Object

```cpp
Student s;
```

Memory

```
Stack

Student Object
```

Characteristics

- Automatic lifetime
- Fast allocation
- Automatic destruction

---

## Heap Object

```cpp
Student* s = new Student();
```

Memory

```
Stack

Pointer

↓

Heap

Student Object
```

Characteristics

- Dynamic lifetime
- Manual cleanup (`delete`)
- Larger available memory

---

# Important Difference

This does **not** create an object.

```cpp
Student* ptr;
```

It only creates a pointer.

The object is created only when

```cpp
ptr = new Student();
```

---

# Class vs Object

| Class | Object |
|--------|---------|
| User-defined type | Instance of a class |
| Blueprint/Definition | Real entity in memory |
| Describes data & behaviour | Contains actual state |
| No instance memory | Occupies memory |
| Used to create objects | Created from a class |

---

# Common Interview Questions

## Q1

Does a class occupy memory?

Answer

A class itself does not allocate memory for object instances.

Memory is allocated when objects are instantiated.

---

## Q2

How many copies exist?

```cpp
Student s1;

Student s2;

Student s3;
```

```
name → 3

rollNo → 3

study() → 1
```

---

## Q3

Why is there only one copy of member functions?

Because the function implementation is identical for every object.

Only object data changes.

The compiler stores one copy of the function and shares it.

---

## Q4

How does one function work for multiple objects?

Using the hidden `this` pointer.

---

## Q5

How many objects exist?

```cpp
Student s1;

Student s2 = s1;
```

Answer

Two.

`s2` is a separate object initialized from `s1`.

(Copy constructors will be covered later.)

---

# Common Mistakes

❌ Thinking a class occupies memory.

Memory belongs to objects, not the class definition.

---

❌ Thinking every object has its own copy of member functions.

Only data members are duplicated.

Functions are shared.

---

❌ Confusing pointers with objects.

```cpp
Student* ptr;
```

does not create a Student object.

---

❌ Thinking two objects with identical data are the same object.

Identity is determined by the object itself (conceptually, its memory location), not merely by its field values.

---

# Engineering Takeaway

Never think of a class as merely a "blueprint."

Think of it as a **user-defined type** that describes:

- State
- Behaviour
- Rules

Objects are concrete instances of that type.

Each object owns its own state, while sharing the behavior defined by the class.

This understanding is the foundation for constructors, destructors, memory management, polymorphism, and every advanced C++ topic that follows.

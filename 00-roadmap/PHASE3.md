# PHASE 3 — DESIGN PATTERNS

> Goal:
> Learn reusable software design solutions and understand when, why and how to use them.
> By the end of this phase, you should be able to identify design problems, choose appropriate design patterns and justify your decisions during interviews.

---

# Session 19 — Singleton Pattern

## Concepts

- What is Singleton?
- Motivation
- Lazy Initialization
- Eager Initialization
- Thread Safety
- Double Checked Locking
- Meyer's Singleton
- Advantages
- Disadvantages
- Common Mistakes

## Practice

🟢 Implementation

- Logger Singleton

🟡 Design

- Global Configuration Manager

🔴 Interview Challenge

- Explain why Singleton is considered an anti-pattern in many systems.

## Interview Questions

- What is Singleton?
- Thread-safe Singleton?
- Why avoid Singleton?
- Real-world use cases?
- Singleton vs Static Class?

## Deliverable

- Logger
- Config Manager

---

# Session 20 — Factory Method Pattern

## Concepts

- Factory Method
- Object Creation
- Encapsulation of Creation
- Factory vs Constructor
- Product Hierarchy
- Creator Hierarchy
- Factory Registry

## Practice

🟢 Implementation

- Shape Factory

🟡 Design

- Notification Factory

🔴 Interview Challenge

- Remove object creation from business logic using Factory.

## Interview Questions

- Why Factory?
- Factory vs Simple Factory?
- Advantages?
- Real-world examples?
- Factory in Spring?

## Deliverable

- Shape Factory
- Notification Factory

---

# Session 21 — Builder Pattern

## Concepts

- Builder
- Director
- Fluent Builder
- Immutable Objects
- Complex Object Construction
- Builder vs Factory

## Practice

🟢 Implementation

- Computer Builder

🟡 Design

- House Builder

🔴 Interview Challenge

- Design a Pizza Builder supporting unlimited customizations.

## Interview Questions

- Why Builder?
- Builder vs Factory?
- Immutable Objects?
- Fluent API?

## Deliverable

- Computer Builder
- Pizza Builder

---

# Session 22 — Strategy Pattern

## Concepts

- Strategy
- Runtime Behaviour
- Composition
- Replace Conditionals
- Open Closed Principle
- Context
- Strategy Selection

## Practice

🟢 Implementation

- Payment Strategies

🟡 Design

- Discount Engine

🔴 Interview Challenge

- Replace if-else discount calculation with Strategy.

## Interview Questions

- Strategy Pattern?
- OCP connection?
- Real-world usage?
- Strategy vs State?

## Deliverable

- Payment Module
- Discount Engine

---

# Session 23 — Observer Pattern

## Concepts

- Observer
- Publisher
- Subscriber
- Event Driven Systems
- Push vs Pull
- Loose Coupling
- Event Notification

## Practice

🟢 Implementation

- Weather Station

🟡 Design

- YouTube Subscriber System

🔴 Interview Challenge

- Design a Stock Price Notification System.

## Interview Questions

- Observer Pattern?
- Push vs Pull?
- Real-world examples?
- Event-driven architecture?

## Deliverable

- Weather Station
- YouTube Notifications

---

# Session 24 — Adapter Pattern

## Concepts

- Adapter
- Legacy Integration
- Object Adapter
- Class Adapter
- Wrapper
- Third Party Integration

## Practice

🟢 Implementation

- Media Player Adapter

🟡 Design

- Payment Gateway Adapter

🔴 Interview Challenge

- Integrate two incompatible APIs.

## Interview Questions

- Adapter?
- Wrapper?
- Adapter vs Facade?
- Object vs Class Adapter?

## Deliverable

- Media Player
- Payment Adapter

---

# Session 25 — Decorator Pattern

## Concepts

- Decorator
- Dynamic Behaviour
- Recursive Decoration
- Composition
- Runtime Extension

## Practice

🟢 Implementation

- Coffee Shop

🟡 Design

- Pizza Customization

🔴 Interview Challenge

- Build unlimited notification decorators.

## Interview Questions

- Decorator?
- Decorator vs Inheritance?
- Real-world examples?
- Benefits?

## Deliverable

- Coffee
- Pizza

---

# Session 26 — Facade Pattern

## Concepts

- Facade
- Simplified Interface
- Subsystems
- API Gateway Analogy
- Decoupling Clients

## Practice

🟢 Implementation

- Home Theatre

🟡 Design

- Online Shopping Checkout

🔴 Interview Challenge

- Simplify a Banking System API.

## Interview Questions

- Facade?
- Adapter vs Facade?
- Benefits?
- Gateway comparison?

## Deliverable

- Home Theatre
- Checkout Module

---

# Session 27 — Command Pattern

## Concepts

- Command
- Receiver
- Invoker
- Queue
- Undo
- Macro Commands

## Practice

🟢 Implementation

- Remote Control

🟡 Design

- Text Editor Commands

🔴 Interview Challenge

- Design Undo/Redo architecture.

## Interview Questions

- Command Pattern?
- Undo support?
- Queue processing?
- Event sourcing relation?

## Deliverable

- Remote
- Text Editor

---

# Session 28 — State Pattern

## Concepts

- State
- Context
- State Transition
- Runtime Behaviour
- State Machine
- Transition Rules

## Practice

🟢 Implementation

- Traffic Signal

🟡 Design

- Vending Machine

🔴 Interview Challenge

- ATM State Machine.

## Interview Questions

- State vs Strategy?
- State transitions?
- Benefits?
- Real-world examples?

## Deliverable

- Traffic Signal
- Vending Machine

---

# Session 29 — Composite, Proxy & Template Method

## Concepts

### Composite

- Tree Structures
- Parent Child Relationship
- Recursive Composition

### Proxy

- Virtual Proxy
- Protection Proxy
- Remote Proxy
- Lazy Loading

### Template Method

- Algorithm Skeleton
- Hook Methods
- Inheritance Based Behaviour

## Practice

🟢 Implementation

- File System (Composite)

🟡 Design

- Image Loader Proxy

🔴 Interview Challenge

- Design a Document Processing Framework using Template Method.

## Interview Questions

- Composite?
- Proxy?
- Template Method?
- Proxy vs Decorator?
- Composite vs Tree?

## Deliverable

- File System
- Proxy
- Document Processor

---

# MACHINE CODING 04 — SNAKE & LADDER

## Concepts Used

- Strategy
- State
- Factory
- Singleton
- Composition
- Observer
- SOLID Principles

## Features

- Multiple Players
- Dice Strategy
- Snakes
- Ladders
- Game State
- Winner Detection
- Restart Game
- Configurable Board
- Undo Last Move (Bonus)

---

# PHASE 3 SUMMARY

## Learning Sessions

11

## Machine Coding

1

## Practice Questions

🟢 Implementation : 11

🟡 Design : 11

🔴 Interview Challenge : 11

**Total Practice : 33**

## Design Patterns Covered

### Creational

- Singleton
- Factory Method
- Builder

### Structural

- Adapter
- Decorator
- Facade
- Composite
- Proxy

### Behavioral

- Strategy
- Observer
- Command
- State
- Template Method

## Deliverables

- 20+ Pattern Implementations
- Pattern Comparison Notes
- Pattern Decision Guide
- 1 Complete Machine Coding Project

## Outcome

✅ Able to identify which design pattern fits a problem

✅ Comfortable applying patterns in machine coding

✅ Strong understanding of reusable software design

✅ Ready for Low Level Design interviews

✅ Ready to design extensible production-quality systems

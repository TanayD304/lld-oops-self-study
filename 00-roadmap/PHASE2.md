# PHASE 2 — SOLID PRINCIPLES & CLEAN CODE

> Goal:
> Learn how to design maintainable, extensible and loosely coupled software.
> By the end of this phase you should be able to identify bad designs, refactor them and apply SOLID principles naturally while solving LLD problems.

---

# Session 13 — Single Responsibility Principle (SRP)

## Concepts

- What is SOLID?
- Single Responsibility Principle
- Responsibility vs Functionality
- Identifying Responsibilities
- Cohesion
- Separation of Concerns
- God Class
- Refactoring Large Classes
- Layered Responsibilities

## Practice

🟢 Implementation

- Refactor a `StudentManager` class handling student data, file I/O and report generation into separate classes.

🟡 Design

- Design a User Management System following SRP.

🔴 Interview Challenge

- Given a monolithic Employee class, identify SRP violations and refactor.

## Interview Questions

- What is SRP?
- Benefits of SRP?
- What is a God Class?
- High Cohesion vs Low Cohesion?
- How do you identify responsibilities?

## Deliverable

- User Management System
- Refactored Student Manager

---

# Session 14 — Open Closed Principle (OCP)

## Concepts

- Open Closed Principle
- Extensibility
- Modification vs Extension
- Interfaces
- Abstract Classes
- Strategy Pattern (Introduction)
- Plugin Architecture
- Avoiding Switch Statements

## Practice

🟢 Implementation

- Extend a Payment System without modifying existing code.

🟡 Design

- Design a Notification System supporting Email, SMS and Push.

🔴 Interview Challenge

- Replace if-else chains with extensible architecture.

## Interview Questions

- Explain OCP.
- Why avoid modifying existing classes?
- How does Strategy help OCP?
- What are extension points?
- OCP examples from real projects.

## Deliverable

- Payment System
- Notification System

---

# Session 15 — Liskov Substitution Principle (LSP)

## Concepts

- LSP
- Behavioral Subtyping
- Contract Preservation
- Base Class Expectations
- Common LSP Violations
- Rectangle-Square Problem
- Fragile Base Class
- Correct Hierarchy Design

## Practice

🟢 Implementation

- Rectangle and Square example.

🟡 Design

- Design a Bird hierarchy avoiding LSP violations.

🔴 Interview Challenge

- Identify and fix LSP violations in an existing design.

## Interview Questions

- Explain LSP.
- Rectangle-Square problem.
- Why is LSP important?
- Common violations?
- Relation with inheritance?

## Deliverable

- Rectangle Example
- Bird Hierarchy

---

# Session 16 — Interface Segregation Principle (ISP)

## Concepts

- ISP
- Fat Interfaces
- Client Specific Interfaces
- Role Based Interfaces
- Interface Design
- Breaking Large Interfaces
- API Design Basics

## Practice

🟢 Implementation

- Printer Interface.

🟡 Design

- Design a Restaurant Ordering System using multiple interfaces.

🔴 Interview Challenge

- Refactor a fat interface into multiple interfaces.

## Interview Questions

- Explain ISP.
- Why avoid fat interfaces?
- Benefits?
- ISP vs SRP?
- Examples from production systems?

## Deliverable

- Printer Example
- Restaurant Ordering System

---

# Session 17 — Dependency Inversion Principle (DIP)

## Concepts

- DIP
- Dependency Injection
- High Level Modules
- Low Level Modules
- Programming to Interface
- Constructor Injection
- Setter Injection
- Interface Injection
- Inversion of Control (Overview)

## Practice

🟢 Implementation

- Logger Injection.

🟡 Design

- Design an Authentication System supporting multiple providers.

🔴 Interview Challenge

- Refactor tightly coupled code using Dependency Injection.

## Interview Questions

- Explain DIP.
- What is Dependency Injection?
- Constructor vs Setter Injection?
- IoC vs DI?
- Why does Google prefer interfaces?

## Deliverable

- Logger Framework
- Authentication System

---

# Session 18 — Clean Code & Design Principles

## Concepts

### Clean Code

- Naming Conventions
- Code Formatting
- Readability
- Self Documenting Code
- Comments vs Clean Code

### Design Principles

- DRY
- KISS
- YAGNI
- Separation of Concerns
- High Cohesion
- Low Coupling
- Law of Demeter
- Favor Composition over Inheritance
- Tell Don't Ask
- Fail Fast Principle
- Defensive Programming
- Code Smells (Introduction)

## Practice

🟢 Implementation

- Refactor a messy Order Management System into clean code.

🟡 Design

- Design a simple E-Commerce Checkout applying all design principles.

🔴 Interview Challenge

- Review a poorly written project and identify at least 10 code smells with improvements.

## Interview Questions

- Explain DRY.
- KISS vs YAGNI.
- High Cohesion vs Low Coupling.
- Composition vs Inheritance.
- Law of Demeter.
- Tell Don't Ask.
- What are Code Smells?
- What makes code maintainable?

## Deliverable

- Clean Order Management
- E-Commerce Checkout

---

# MACHINE CODING 03 — ATM SYSTEM

## Concepts Used

- SOLID Principles
- Clean Code
- Layered Design
- Interfaces
- Dependency Injection
- Object Relationships
- Error Handling

## Features

- Card Authentication
- PIN Validation
- Balance Inquiry
- Cash Withdrawal
- Cash Deposit
- Mini Statement
- Transaction History
- ATM Cash Management
- Receipt Generation

---

# PHASE 2 SUMMARY

## Learning Sessions

6

## Machine Coding

1

## Practice Questions

🟢 Implementation : 6

🟡 Design : 6

🔴 Interview Challenge : 6

**Total Practice : 18**

## Deliverables

- 12+ Production Style Implementations
- SOLID Notes
- Clean Code Notes
- 1 Complete Machine Coding Project

## Outcome

✅ Strong understanding of all SOLID principles

✅ Able to identify bad software design

✅ Able to refactor existing code

✅ Ready to learn Design Patterns

✅ Able to write clean, extensible and maintainable object-oriented code

# 🚕 Rapido Platform System (Linked List Based CRUD)

## 📌 Project Title

**Rapido Platform System using Linked List in C**

---

## 👥 Team Members

* Ravikumar 
* Harsha Vardhan

---

## 📖 Project Overview

This project is a console-based application developed in C that simulates a basic ride-booking management system similar to Rapido. The system allows users to manage ride details dynamically using a linked list data structure.

It demonstrates core concepts of **data structures, dynamic memory allocation, and CRUD operations**, making it suitable for academic learning and practical understanding of linked lists.

---

## ❗ Problem Statement

In real-world ride-sharing platforms, efficient handling of ride data is essential. This project aims to design a system that can:

* Store ride details dynamically
* Perform quick insertion and deletion
* Allow easy updates and searches

The challenge is to implement these features efficiently using a suitable data structure without wasting memory.

---

## 🎯 Objectives

* To implement a real-time ride management system
* To understand linked list operations practically
* To perform CRUD operations efficiently
* To manage dynamic data without fixed size limitations
* To improve problem-solving and programming skills in C

---

## 🧠 Data Structure Used

### **Singly Linked List**

A linked list is chosen because:

* It allows **dynamic memory allocation**
* No fixed size limitation like arrays
* Efficient insertion and deletion operations

### Node Structure:

Each node contains:

* `rideID` → Unique identifier
* `customerName` → Name of the customer
* `destination` → Ride destination
* `fare` → Cost of the ride
* `next` → Pointer to next node

---

## ⚙️ Algorithm Explanation

### 🔹 1. Add Ride (Create)

* Allocate memory using `malloc`
* Input ride details
* Insert node at the end of the list
* Time Complexity: **O(n)**

---

### 🔹 2. Display Rides (Read)

* Traverse from head to NULL
* Print each node’s data
* Time Complexity: **O(n)**

---

### 🔹 3. Update Ride (Update)

* Search for node using Ride ID
* Modify destination and fare
* Time Complexity: **O(n)**

---

### 🔹 4. Delete Ride (Delete)

* Locate node and its previous node
* Adjust pointers to remove node
* Free allocated memory
* Time Complexity: **O(n)**

---

### 🔹 5. Search Ride

* Traverse list and compare Ride ID
* Display details if found
* Time Complexity: **O(n)**

---

### 🔹 6. Free Memory

* Traverse entire list
* Free each node before program exit
* Prevents memory leaks

---

## 🛠️ Technologies Used

* **Programming Language:** C
* **Concepts:** Linked List, Pointers, Dynamic Memory Allocation
* **Compiler:** GCC / Any C Compiler

---

## 🛠️ Compilation Instructions

### Step 1: Save the file

```bash
rapido.c
```

### Step 2: Compile

```bash
gcc rapido.c -o rapido
```

### Step 3: Run

```bash
./rapido
```

*(For Windows: `rapido.exe`)*

---

## 💻 Sample Output

```
===================================
    RAPIDO PLATFORM SYSTEM
===================================
1. Add Ride (Create)
2. Display All Rides (Read)
3. Update Ride (Update)
4. Delete Ride (Delete)
5. Search Ride
6. Exit
Enter choice: 1

Enter Ride ID: 101
Customer Name: Ravi
Destination: Chennai
Fare: 150
Ride logged successfully.

Enter choice: 2

ID      Name            Dest            Fare
101     Ravi            Chennai         150.00

Enter choice: 3
Enter ID to Update: 101
New Destination: Bangalore
New Fare: 200
Update complete.

Enter choice: 5
Search ID: 101
Found: Ravi to Bangalore ($200.00)
```

---

## 🔍 Key Features

* ✔️ Dynamic ride storage using linked list
* ✔️ Full CRUD functionality
* ✔️ Simple and user-friendly menu-driven interface
* ✔️ Efficient memory usage
* ✔️ Easy to extend and modify

---

## 🚀 Future Enhancements

* Add file handling to store ride data permanently
* Implement sorting (by fare or destination)
* Add authentication system (admin/user login)
* Convert to GUI-based application
* Implement doubly linked list for better navigation

---

## ⚠️ Limitations

* Data is not persistent (lost after program exit)
* Linear search leads to O(n) time complexity
* No validation for duplicate Ride IDs
* Limited user interface (CLI only)

---

## 🎥 Demo Video Link

👉 *(Paste your YouTube / Google Drive link here)*

---

## 📚 Learning Outcomes

* Understanding of linked list operations
* Practical knowledge of memory management
* Implementation of real-world problem using C
* Improved debugging and logical thinking skills

---

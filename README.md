# Driver_Passenger_Matching_graph
# 🚖 Ride Matching System

A simple **C-based Ride Matching System** that simulates drivers and passengers using a graph data structure.  
This project demonstrates **nodes (users)** and **edges (matches)** with operations like adding, updating, and deleting.

---

## 📌 Features
- Add **Drivers** and **Passengers**
- Create **Matches** between Drivers and Passengers
- View all current matches
- Update match distance
- Remove matches
- Remove users (drivers/passengers)
- Interactive **menu-driven system**

---

## 🛠️ Tech Stack
- **Language:** C
- **Data Structures:** Graphs, Linked Lists
- **Concepts:** Nodes, Edges, Adjacency List

---

## 📂 Project Structure

---

## ▶️ How to Run

### 1. Clone the repository
```bash
git clone https://github.com/your-username/RideMatchingSystem.git
cd RideMatchingSystem
gcc main.c -o ride_matching
./ride_matching
==============================
Ride Matching System
==============================
1. Add Driver
2. Add Passenger
3. Create Match (Driver <-> Passenger)
4. View All Matches
5. Update Match Distance
6. Remove Match
7. Remove User
0. Exit
------------------------------
Enter Driver ID: 1
Driver/Passenger added successfully.
ID: 1 (driver)
Enter Passenger ID: 101
Driver/Passenger added successfully.
ID: 101 (passenger)

Enter Driver ID: 1
Enter Passenger ID: 101
Enter Distance (km): 12
Match created successfully.
Driver 1 <-> Passenger 101
Distance: 12 km




# Initialize repo
git init

# Stage files
git add .

# Commit changes
git commit -m "Initial commit: Ride Matching System"

# Add remote
git remote add origin https://github.com/your-username/RideMatchingSystem.git

# Push to GitHub
git push -u origin main

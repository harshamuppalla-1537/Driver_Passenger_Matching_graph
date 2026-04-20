# 🚗 Ride Matching System

A **C-based Ride Matching System** that uses **Graph (Adjacency List)** to simulate matching between **drivers** and **passengers**.  
This project demonstrates **CRUD operations** on nodes (users) and edges (matches), making it a practical example of applying **Data Structures & Algorithms (DSA)** concepts.

---

## ✨ Features
- Add **Drivers** and **Passengers**
- Create **Matches** between Drivers and Passengers
- View all current matches
- Update match distance
- Remove matches
- Remove users (drivers/passengers)
- Interactive **menu-driven system**

---

## 🧠 Concepts Used
- **Graph Theory** – Representation of relationships between drivers and passengers  
- **Adjacency List** – Efficient storage of matches  
- **Linked List** – Used for nodes and edges  
- **CRUD Operations** – Create, Read, Update, Delete  

---

## 📊 Data Structures Used
| Data Structure | Purpose |
|----------------|---------|
| `struct Node`  | Represents a Driver or Passenger |
| `struct Edge`  | Represents a Match (Driver <-> Passenger) with distance |
| `Graph`        | Stores nodes and adjacency lists |

---

## 🎓 Academic Relevance
- Demonstrates **Graph Representation** using adjacency lists  
- Implements **Linked Lists** dynamically  
- Covers **CRUD operations** on graph  
- Useful for **DSA coursework and lab exams**  
- Real-world use of **graph theory**

---

## 📁 Project Structure
```
RideMatchingSystem/
│── main.c
│── README.md
```

---

## ⚙️ How to Compile and Run
```bash
# Clone the repository
git clone https://github.com/your-username/RideMatchingSystem.git
cd RideMatchingSystem

# Compile
gcc main.c -o ride_matching

# Run
./ride_matching
```

---

## 🧪 Sample Input/Output
```
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

Enter Driver ID: 1
Driver added successfully

Enter Passenger ID: 101
Passenger added successfully

Match created
Driver 1 <-> Passenger 101
Distance: 12 km
```

---

## 🔄 CRUD Mapping
| Operation | Function | Description |
|-----------|----------|-------------|
| Create    | addNode, addEdge | Add users and matches |
| Read      | displayGraph | View matches |
| Update    | updateEdge | Update distance |
| Delete    | deleteEdge, deleteNode | Remove match/user |

---

## 🌍 Use Cases
- Ride-sharing apps (Uber-like systems)  
- Delivery/logistics assignment  
- Academic mini-projects  
- Graph-based relationship modeling  

---

## ⚠️ Limitations
- Max users limited to 100  
- No duplicate ID validation  
- No file storage (data resets)  
- No optimal matching algorithm  

---

## 🚀 Future Improvements
- Add shortest path (Dijkstra / BFS)  
- File saving/loading  
- Input validation  
- GUI interface  

---

## 🧑‍💻 Authors
**Harshavardhan|Ravi kumar** 


Computer Science Student | DSA Enthusiast  

---

 

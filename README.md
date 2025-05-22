# Task-Manager

# 🗂️ Task Manager using Linked Lists in C++

This C++ project implements a simple task management system using **singly and doubly linked lists**. It organizes tasks into two categories: **active** and **completed**. Each category is managed with different types of linked list structures for demonstration purposes.

---

## 🔧 Features

### ✅ Completed Tasks
- Represented using a **singly linked list** (`task` class).
- Supports insertion and traversal of completed tasks.
- Each task has:
  - `TaskID`
  - `Priority` pointer (link to the next task)

### 🔄 Active Tasks
- Managed using a **doubly linked list** (`dlink` class inside `active`).
- Supports:
  - Insertion at the front and rear
  - Deletion from front and rear
  - Bidirectional traversal (head-to-tail and tail-to-head)

---

## 🏗️ Classes Overview

### `task`
Represents a node in the completed task list. Each node holds a task ID and a pointer to the next node (`Priority`).

### `complete`
Manages the singly linked list of completed tasks. Contains:
- `insertion()`: Adds a new task to the list.
- `print()`: Displays completed tasks.

### `active`
Manages the doubly linked list of active tasks via the nested `dlink` class. Contains:
- `insertionFirst(int k)`: Inserts at head.
- `insertionLast(int k)`: Inserts at tail.
- `deleteAtFirst()`: Deletes from head.
- `deleteAtLast()`: Deletes from tail.
- `printHeadtoTail()`, `printTailtoHead()`: Traversal functions.

---

## 🧪 Example Usage

```cpp
complete completeTask;
active activeTask;

completeTask.insertion(t1, 1);         // Insert completed task

activeTask.insertionFirst(5);          // Add active task at front
activeTask.insertionFirst(6);
activeTask.insertionLast(7);           // Add at rear
activeTask.insertionLast(8);

# 🧠 Task Manager in C++

This project implements a simple **task manager** using:

- 🟩 **Doubly Linked List** for active tasks
- ✅ **Singly Linked List** for completed tasks

## 🚀 Features

- Add/remove active tasks (front or end)
- Mark last active task as completed
- Print active tasks (Head→Tail / Tail→Head)
- Print completed tasks

## 🔧 Data Structures

```cpp
struct dl {
    int value;
    dl* pre, *next;
};

struct task {
    int TaskId;
    task* priority; // next task
};
🛠️ Key Functions
insertAtFirst() / insertAtLast()

deleteAtFirst() / deleteAtLast()

insertion() → move last active task to completed

HeadToTail() / TailToHead()

print() → show completed tasks

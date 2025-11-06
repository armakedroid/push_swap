# 🏗️ Push_swap
*Because Swap_push doesn’t feel as natural*

---

## 📘 Overview
The **Push_swap** project is an algorithmic challenge where you need to **sort data in a stack** using a limited set of instructions.  
Your goal is to sort numbers in **stack a** with the fewest possible operations, using **stack b** as auxiliary storage.

---

## 🎯 Objectives
- Learn to implement sorting algorithms in C.
- Work with **stack data structures**.
- Understand algorithm complexity.
- Optimize operations to achieve minimal moves.
- Handle errors and memory management properly.

---

## ⚙️ Rules

### Stacks
- **Stack a**: Contains unique integers (negative and/or positive) at the start.
- **Stack b**: Initially empty.

### Operations
| Instruction | Description |
|-------------|-------------|
| `sa` | Swap first 2 elements of stack a |
| `sb` | Swap first 2 elements of stack b |
| `ss` | `sa` and `sb` simultaneously |
| `pa` | Push first element of b to a |
| `pb` | Push first element of a to b |
| `ra` | Rotate stack a up by 1 |
| `rb` | Rotate stack b up by 1 |
| `rr` | `ra` and `rb` simultaneously |
| `rra` | Reverse rotate stack a |
| `rrb` | Reverse rotate stack b |
| `rrr` | `rra` and `rrb` simultaneously |

> **Goal:** Sort stack a in ascending order using the **fewest possible operations**.

---

## 📝 Program Usage

### push_swap
**Program Name:** `push_swap`  
**Arguments:** List of integers (first argument = top of stack a)  

**Example:**
```bash
$> ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa

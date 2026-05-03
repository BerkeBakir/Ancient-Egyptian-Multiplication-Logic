# Ancient Egyptian Multiplication Logic

A specialized C implementation of the **Ancient Egyptian Multiplication** (also known as Russian Peasant Multiplication). This project explores the historical algorithmic approach to multiplication using only addition, doubling, and halving—principles that mirror how modern digital circuits perform arithmetic at the bit level.

## 🧠 Algorithmic Concept
The core of this method lies in the decomposition of a multiplier into powers of two. In modern computer science, this is functionally equivalent to **Binary Multiplication**. 

### The Process:
1. **Halving:** The first number is repeatedly divided by 2 (integer division).
2. **Doubling:** The second number is repeatedly multiplied by 2.
3. **Accumulation:** Whenever the first number is odd, the current value of the second number is added to the total result.
4. **Termination:** The loop continues until the first number reaches zero.

## 🛠️ Technical Highlights
- **Bitwise Logic Emulation:** Although implemented with standard arithmetic operators, the logic directly maps to left-shifts (doubling) and right-shifts (halving) in low-level programming.
- **Iterative Efficiency:** Demonstrates an $O(\log n)$ time complexity, making it significantly more efficient than simple repetitive addition.
- **Resource Minimalism:** Shows how complex multiplication can be achieved in environments that only support basic addition and bit manipulation (common in embedded systems).

## 📊 Logic Example
To multiply $13 \times 12$:
| Multiplier (Num1) | Multiplicand (Num2) | Status | Result Addition |
| :--- | :--- | :--- | :--- |
| 13 | 12 | **Odd** | +12 |
| 6 | 24 | Even | (Ignore) |
| 3 | 48 | **Odd** | +48 |
| 1 | 96 | **Odd** | +96 |
| **Total** | | | **156** |

## 🚀 Getting Started
### Prerequisites
- A standard C compiler (GCC, Clang, etc.).

### Compilation
```bash
gcc -o egyptian_mult main.c

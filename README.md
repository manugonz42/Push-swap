# Push Swap

## Description
Push Swap is a challenging 42 project that tasks you with sorting a stack using specific movements. Develop algorithmic skills and optimize sorting methods within the constraints of limited instructions. Master the art of efficient stack manipulation.

## Movements
- `sa` - swap the first two elements at the top of stack A.
- `sb` - swap the first two elements at the top of stack B.
- `ss` - `sa` and `sb` simultaneously.
- `pa` - move the first element from stack B to stack A.
- `pb` - move the first element from stack A to stack B.
- `ra` - rotate stack A (move all elements up by one).
- `rb` - rotate stack B (move all elements up by one).
- `rr` - `ra` and `rb` simultaneously.
- `rra` - reverse rotate stack A (move all elements down by one).
- `rrb` - reverse rotate stack B (move all elements down by one).
- `rrr` - `rra` and `rrb` simultaneously.

## Features
- Sort a stack with minimal moves
- Develop algorithmic and optimization skills
- Limited instruction constraints

## Usage
1. Clone this repository:
```bash
git clone git@github.com:manugonz42/Push-swap.git push_swap
```
2. Navigate to the project directory: `cd push_swap`
3. Compile the project: `make`
4. Execute the program with the list of number to sort.

## Example
```bash
./push_swap 3 2 1

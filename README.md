# push_swap
42 project push_swap
[![letumany's 42 push_swap Score](https://badge42.vercel.app/api/v2/cl1l8hert000609l6rjl6rx6o/project/2476007)](https://github.com/JaeSeoKim/badge42)

This project comprises an interesting case study regarding sorting algorithms and its performances, being part of the core curriculum of all 42 schools worldwide. The task is simple: given a sequence of random numbers disposed in a stack data structure (stack A), sort them with the help of an empty auxiliary stack (stack B) and a set of specific stack operations. The operations allowed are described as follows, as written in our task:

- **```sa```** : swap a - Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements).
- **```sb```** : swap b - Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements).
- **```ss```** : sa and sb at the same time.
- **```pa```** : push a - take the first element at the top of b and put it at the top of a. Do nothing if B is empty.
- **```pb```** : push b - take the first element at the top of a and put it at the top of b. Do nothing if A is empty.
- **```ra```** : rotate a - shift up all elements of stack A by 1. The first element becomes the last one.
- **```rb```** : rotate b - shift up all elements of stack B by 1. The first element becomes the last one.
- **```rr```** : ra and rb at the same time.
- **```rra```** : reverse rotate a - shift down all elements of stack A by 1. The last element becomes the first one.
- **```rrb```** : reverse rotate b - shift down all elements of stack B by 1. The last element becomes the first one.
- **```rrr```** : rra and rrb at the same time.

## How to use?

#### Rules

| Rule         |                 Description                             |
|:------------:|:-------------------------------------------------------:|
| `make`       | Compile the program.                                    |
| `make clean` | Remove every objects of compilation                     |
| `make fclean`| Do `clean` rule and remove the executable program       |
| `make re`    | Do `fclean` rule and compile the program                |

#### Sorting

./push_swap 3 5 2 1 6\
./push_swap "3 5 2 1 6"
 
#### Tester
 `for deep testing`     bash test.sh\
`for visual tester`   python3 pyviz.py \`ruby -e "puts (-200..200).to_a.shuffle.join(' ')"\`\

##### ⇩`my algorithm`⇩
<img width="510" alt="Screen Shot 2022-01-29 at 18 27 26" src="https://user-images.githubusercontent.com/73405731/151953980-a64aa6bb-d006-4d61-8789-273de5cd921f.png">

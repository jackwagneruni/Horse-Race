# Algorithm

## Prototype Functions
```cpp
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);
```

## Functions Content

### Advance()
- Given a horse's position value:
  - Flip a coin.
  - If it is given the value of 1, add one to the horse's position.
  - If it is 0, do nothing.

### printLane()
- Accept input `horseNum` (the number of horses) and `horse_placements`, the array of integers representing each horse's position.
- In a single `for` loop:
  - Take the current score and print out that many `.`
  - Print the horse number.
  - Take `winningCondition - current score - 1` and print out that many `.`

### isWinner()
- Check a horse's value.
- If it is equal to the winning condition variable, return true.

### Main()
- Create a variable `keepGoing` and set it to `1`.
- Create a variable `winningCondition` and set it to `15`.
- Create an array `winners`.
- Create a `while` loop that runs while `keepGoing` is true:
  - In a `for` loop, cycle through each horse in the `horse_placements` array:
    - Run `advance()` with the current horse's value, the current cycle of the loop, and the horse's placement.
    - If `horse_placements` value is `>= winningCondition`:
      - Add the horse number to the `winners` array.
  - Run `printLane()` with the number of horses and the horse position array variable.

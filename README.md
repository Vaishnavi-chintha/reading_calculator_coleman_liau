# Readability Index Calculator

A 'C' program that estimates the U.S. school grade level required to understand a given text. It uses the **Coleman-Liau index**, a formula designed to assess the readability of English prose based on character, word, and sentence counts.

## Features

- Accepts user input as a block of text.
- Computes:
  - Average number of letters per 100 words.
  - Average number of sentences per 100 words.
- Applies the Coleman-Liau index to estimate grade level.
- Outputs:
  - `Grade X` (where X is the rounded grade level),
  - `Grade 16+` for college-level and beyond,
  - `Below Grade 1` for elementary text.

## Formula

The Coleman-Liau index is calculated as:

```bash
index = 0.0588 * L - 0.296 * S - 15.8
```

Where:
- `L` = average number of letters per 100 words
- `S` = average number of sentences per 100 words



## How to Run

1. Make sure you have `gcc` or any standard C compiler installed.
2. Compile the program:

```bash
gcc coleman_liau.c -o coleman_liau
```

```bash
./coleman_liau
```
## Example

Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!

Output: Grade 3



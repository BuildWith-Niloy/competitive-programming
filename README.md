# LightOJ 1255 - Substring Frequency

## Problem Statement
[Link to problem](https://vjudge.net/problem/LightOJ-1255)

Count the number of times a pattern appears in a text (including overlapping matches).

## Approach
- **Algorithm**: Knuth-Morris-Pratt (KMP)
- **Time Complexity**: O(n + m) where n = text length, m = pattern length
- **Space Complexity**: O(m) for LPS array

## Key Points
- Uses KMP's LPS (Longest Proper Prefix which is also Suffix) array
- Efficiently finds all occurrences including overlapping ones
- After finding a match, continues searching using the LPS array

## Example

Input:
text = "aaaa"
pattern = "aa"

Output: 3
(Matches at positions 0, 1, 2)

## Tags
`string-matching` `kmp` `pattern-matching`

# Specification

## Vote function

Complete the vote function

- The function taker arguments voter, ranl, and name. if name is a match for the name of a valid vandidate
then you should update the global prefensens array to indicate that the voter voter has that candidate as their rank preference (where 0 is the first preference, 1 is the second preference)
- If the preference is succesfully recorded, the function should return true; the function should return false otherwise (if for instance, name is not the name of one of the candidates)
- You may assume that no two candidates have the same name

## Tabualte function

Complete the Tabulate function

- The function should update the number of votes each candidate has at this stage of the runoff
- Recall that each stage in the runoff, every voter effectively votes for their top preferred candidate

## Print_winner function

Complete the print_winner function

- if any candidate has more than half of the vote, their name should be printed to stdout and the function should return true
- if nobody has won the election yet, the function should return false

## find_min function

Complete the find_min function

- The function should return the minimum vote total for any candidate who is still in the election

## is_tie function

Complete the `is_tie` function.

- the function takes an argument `min`, which is the ninimum number of votes that anyone in the election currently has.
- The function should return `true` if every candidate remaining in the election has the same number of votes and should return `false` otherwise.

## eliminate function

complete the `eliminate` function

- the function takes an argument `min`, which will be the minimum number of votes that anyone in the election currently has
- - the function eliminates the candidate (or candidates) who have `min` number of votes
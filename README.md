# LeetCode
## 1222. [Queens That Can Attack the King](https://leetcode.com/problems/queens-that-can-attack-the-king/)
### Approach:
The king can be attacked from 8 directions. We can start from the king and in each direction, we will store the position of the first queen we meet. Other queens present in the same direction behind the nearest queen can be ignored as they will not be able to attack the king.
So our solution involves few steps:
- Consider each direction.
- For each direction, continue to travel along that direction until the first queen occurs or the chess board ends.
- If any queen occurs, store its position into the answer and move to next direction.
- Return answer.

### Complexity Analysis:
#### Time complexity:
Time complexity only depends on the number of rows(n) or columns(n) of n*n board as we have to travel in all 8 directions across the rows, columns or diagonals.So overall time complexity is O(n).  

#### Space complexity:
We are storing the position of the queens in the form of matrix, hence space complexity is O(n*n).

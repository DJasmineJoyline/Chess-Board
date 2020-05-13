# Chess-Board
chess Board 1      
Given the position of a bishop and a queen in a n*n chessboard, mark the remaining positions in the chess board as follows: 
'*' --- if it is under attack from bishop  
'$' --- if it is under attack from queen 
'%' --- if it is under attack from both queen and bishop.  
'.' --- if it is not under attack.              

Input and Output Format:  Input consists of 5 integers where first integer, n, corresponds to the size of the chess board.  
Second and third integers correspond to the x and y coordinates of the bishop respectively, and fourth and fifth integers correspond to the x and y coordinates of the queen respectively.     
Output consists of a nxn matrix obtained by applying the above rules.     

Sample Input:  4  2  2  3  4     
Sample Output:     
*$*$  
.B$$  
%$%Q  
..$%

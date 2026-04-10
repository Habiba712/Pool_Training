#include <unistd.h>
#include <stdio.h>


int is_safe(int board[8], int col, int row){
	int i = 0;

	while( i < col){
			// row collision
		if(board[i] == row) return 0;

		int row_diff = row - board[i];
		if (row_diff < 0) row_diff = -row_diff;

		int col_diff = col - i;
		if (col_diff < 0) col_diff = -col_diff;

		if( row_diff == col_diff) return 0;
			// diagonal collision
		
	i++;
	}
	return 1;

}
int solve(int board[8],int col){
	int count = 0;
	int row = 0;

	if (col == 8) return 1;

	while(row < 8){
		if (is_safe(board, col, row)) {
			board[col] = row;
			count += solve(board, col +1);		
		}
		row++;
	}
	return count;


}

int ft_eight_queens_puzzle(void){
	int board[8];
	return solve(board, 0);

}

int main(void){
	
	int res = ft_eight_queens_puzzle();
	printf("%d", res);
	printf("%c", '\n');
	return 0;
}


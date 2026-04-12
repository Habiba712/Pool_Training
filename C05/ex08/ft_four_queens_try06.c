#include <unistd.h>
#include <stdio.h>

int is_safe(int board[4], int col, int row){
	int i = 0;
	while(i < col){
		if(board[i] == row) return 0;
		
		int diff_col = col - i;
		int diff_row = row - board[i];

		if (diff_col < 0) diff_col = -diff_col;
		if (diff_row < 0) diff_row = -diff_row;

		if (diff_col == diff_row) return 0;

	i++;
	}


	return 1;

}



int solve(int board[4], int col){
	
	int row = 0;
	int count = 0;
	if (col == 4) return 1;

	while(row < 4){
		if(is_safe(board, col, row)){
			board[col] = row;
			count += solve(board, col + 1);		
		}
	row++;
	}
	
	return count;

}

int ft_four_queens_try06(void){

	int board[4];
	int res = solve(board, 0);

	return res;
}



int main(void){
	int res = ft_four_queens_try06();
	printf("%d", res);
	printf("%c", '\n');
	return 0;
}

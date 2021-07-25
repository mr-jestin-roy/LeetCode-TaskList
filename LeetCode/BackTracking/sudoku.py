sudoku_board = [
    [7,0,0,0,0,9,3,0,1],
    [1,0,0,0,2,0,0,0,0],
    [3,0,0,0,8,0,0,0,6],
    [6,0,0,7,0,0,0,0,5],
    [0,8,0,0,9,0,0,0,3],
    [0,0,0,0,0,0,0,0,0],
    [0,4,0,0,5,0,0,0,9],
    [0,6,0,0,0,2,0,5,0],
    [0,0,0,0,0,0,2,1,0]
]

def print_board(board):
    print("------------------------------------")
    print("--------------BOARD-----------------")
    print("------------------------------------")
    
    for i in range(len(board)):
        if i%3 == 0 and i!=0:
            print("- - - - - - - - - -")

        for j in range(len(board[0])):
            if j%3 == 0 and j!=0:
                print("|", end="")

            if j == 8:
                print(board[i][j])
            else:
                print(str(board[i][j])+" ",end="")



def solve_sudoku(board):
    indexes = find_empty_cell(board)

    if not indexes:
        return True
 
    for attempt in range(1,10):
        if(is_valid(board,attempt,indexes)):
            
            board[indexes[0]][indexes[1]] = attempt

            if solve_sudoku(board):
                return True

            board[indexes[0]][indexes[1]] = 0

    return False


def is_valid(board, num, indexes):
    ## Checking the row
    for i in range(len(board[0])):
        if(board[indexes[0]][i] == num and indexes[1]!=i):
            return False

    ##Checking the column
    for i in range(len(board)):
        if(board[i][indexes[1]] == num and indexes[0]!=i):
            return False

    ##Checking the grid
    grid_x = indexes[1]//3
    grid_y = indexes[0]//3

    for i in range(grid_y*3,(grid_y*3)+3):
        for j in range(grid_x*3, (grid_x*3)+3):
            if (board[i][j]==num and (i,j) != indexes):
                return False

    return True



def find_empty_cell(board):
    for i in range(len(board)):
        for j in range(len(board[0])):
            if board[i][j] == 0:
                return (i,j)

    return False


if __name__ == '__main__':
    print_board(sudoku_board)
    solve_sudoku(sudoku_board)
    print_board(sudoku_board)
    
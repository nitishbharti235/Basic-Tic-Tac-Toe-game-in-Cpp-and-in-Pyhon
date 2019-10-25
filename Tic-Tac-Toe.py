
square = ['0', '1', '2' , '3', '4','5','6', '7', '8' , '9']

def Initialize_Board():
    for i in range(0,10):
        a= chr(i+48)
        #print(a)
        square[i]=a 
    print( "Player 1 (X)  -  Player 2 (O)" + "\n" + "\n")
    print( "\n")

    print( "     |     |     " + "\n")
    print( "  " + square[1] + "  |  " + square[2] + "  |  " + square[3] + "\n")

    print( "_____|_____|_____" + "\n")
    print( "     |     |     " + "\n")

    print( "  " + square[4] + "  |  " + square[5] + "  |  " + square[6] + "\n")

    print( "_____|_____|_____" + "\n")
    print( "     |     |     " + "\n")

    print( "  " + square[7] + "  |  " + square[8] + "  |  " + square[9] + "\n")

    print( "     |     |     " + "\n" + "\n")

def checkwin():
    if (square[1] == square[2] and square[2] == square[3]):
        return 1
    elif (square[4] == square[5] and square[5] == square[6]):
        return 1
    elif (square[7] == square[8] and square[8] == square[9]):
        return 1
    elif (square[1] == square[4] and square[4] == square[7]):
        return 1
    elif (square[2] == square[5] and square[5] == square[8]):
        return 1
    elif (square[3] == square[6] and square[6] == square[9]):
        return 1
    elif (square[1] == square[5] and square[5] == square[9]):
        return 1
    elif (square[3] == square[5] and square[5] == square[7]):
        return 1
    elif (square[1] != '1' and square[2] != '2' and square[3] != '3'
                    and square[4] != '4' and square[5] != '5' and square[6] != '6'
                  and square[7] != '7' and square[8] != '8' and square[9] != '9'):
        return 0
    else:
        return -1

def sq(i):
    return square[i]

def Display_Board():
    print("\n")
    print( "     |     |     " + "\n")
    print( "  " + sq(1) + "  |  " + sq(2) + "  |  " + sq(3) + "\n")
    print( "_____|_____|_____" + "\n")
    print( "     |     |     " + "\n")
    print( "  " + sq(4) + "  |  " + sq(5) + "  |  " + sq(6) + "\n")
    print( "_____|_____|_____" + "\n")
    print( "     |     |     " + "\n")
    print( "  " + sq(7) + "  |  " + sq(8) + "  |  " + sq(9) + "\n")
    print( "     |     |     " + "\n" + "\n")

if __name__ == "__main__":

    player = 1 
    game_number=1
    win1=0
    win2=0
    choice=0
    c=0
    while(1):
        Initialize_Board()
        if(c%2 == 0) :
            player=2
        else:
            player=1
        while(1):
            player = (player%2)+1
            print("Player "+str(player)+", enter a number:  ")
            choice=int(input())

            mark= 'X' if player==1 else 'O'

            if (choice == 1 and square[1] == '1'):
                square[1] = mark
            elif (choice == 2 and square[2] == '2'):
                square[2] = mark
            elif (choice == 3 and square[3] == '3'):
                square[3] = mark
            elif (choice == 4 and square[4] == '4'):
                square[4] = mark
            elif (choice == 5 and square[5] == '5'):
                square[5] = mark
            elif (choice == 6 and square[6] == '6'):
                square[6] = mark
            elif (choice == 7 and square[7] == '7'):
                square[7] = mark
            elif (choice == 8 and square[8] == '8'):
                square[8] = mark
            elif (choice == 9 and square[9] == '9'):
                square[9] = mark
            else:
                print( "Invalid Move\n\n" )
                player-=1
            i=checkwin()
            Display_Board()
            if( i!=-1 ):
                break
        if(i==1):
            k= player-1
            print( "==>\aPlayer "+str(k)+" Win\n\n" )
            if(k==1):
                win1+=1
            else:
                win2+=1
        else:
            print( "==>\aGame draw"+"\n"+"\n")
        print("Current Score: PLAYER 1 = "+str(win1)+"     "+"PLAYER 2 = "+str(win2)+"\n\n")
        print("Enter 1 to play more : Enter 0 to stop :")
        x=int(input())
        if(x==0):
                break
        c+=1
    print( "Final Score:\n" )
    print("Player1: "+str(win1)+"     "+"Player2: "+str(win2))
//
//  main.cpp
//  Tic-Tac-Toe
//
//  Created by Lhernandez on 2/21/15.
//  Copyright (c) 2015 Lhernandez. All rights reserved.
//

#include <iostream>

char table[3][3];
char turn = 'X';
bool winner = false;

void initialize()
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            table[i][j] = '_';
        }
    }

}

void showTable()
{

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%c\t", table[i][j]);
        }
        printf("\n");
    }
    
}
bool play(int position1, int position2)
{
    bool valid = false;
    if(table[position1][position2] == '_')
    {
        if(turn == 'X')
        {
            table[position1][position2] = turn;
            turn = 'O';
        }else
        {
            table[position1][position2] = turn;
            turn = 'X';
        }
        valid = true;
    }
    return valid;
}

void validWinner()
{

    
    if (table[0][0] == table[1][0] && table[1][0] == table[2][0] && table[2][0] != '_') {
        winner = true;
    }
    else if(table[0][1] == table[1][1] && table[1][1] == table[2][1] && table[2][1] != '_')
    {
        winner = true;
    }
    else if(table[0][2] == table[1][2] && table[1][2] == table[2][2] && table[2][2] != '_')
    {
        winner = true;
    }
    else if(table[0][0] == table[0][1] && table[0][1] == table[0][2] && table[0][2] != '_')
    {
        winner = true;
    }
    else if(table[1][0] == table[1][1] && table[1][1] == table[1][2] && table[1][2] != '_')
    {
        winner = true;
    }
    else if(table[2][0] == table[2][1] && table[2][1] == table[2][2] && table[2][2] != '_')
    {
        winner = true;
    }
    else if(table[0][0] == table[1][1] && table[1][1] == table[2][2] && table[2][2] != '_')
    {
        winner = true;
    }
    else if(table[2][0] == table[1][1] && table[1][1] == table[0][2] && table[0][2] != '_')
    {
        winner = true;
    }
  
}


int main(int argc, const char * argv[])
{
    // insert code here...
    initialize();
    int value1 = 0;
    int value2 = 0;
   
    showTable();
    while (winner == false) {
        std::cout << "Inserte el primer numero: ";
        std::cin >> value1;
        std::cout << "Inserte el segundo numero: ";
        std::cin >> value2;
        if(play(value1, value2))
        {
            showTable();
            validWinner();
        
        }
        else
        {
            printf("Position No Disponible \n=====================\n");
        }
       
        
      
    }
    printf("Existe un ganador \n =========================");
    
}

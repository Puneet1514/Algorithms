This file contains Some of the class AI Assignments

# Eight Queen Problem
	
	Que -> Eight-Queens problem Using UCS

	Run :
		javac Eight_Queen_Problem.java
		java Eight_Queen_Problem


	Output : 
		
		1 0 0 0 0 0 0 0 
		0 0 0 0 0 0 1 0 
		0 0 0 0 1 0 0 0 
		0 0 0 0 0 0 0 1 
		0 1 0 0 0 0 0 0 
		0 0 0 1 0 0 0 0 
		0 0 0 0 0 1 0 0 
		0 0 1 0 0 0 0 0 	

	
	Initial State: There are no queens on the The 8x8 board

	States : Any arrangement of all queens on the 8x8 board. 

	Path Cost : 1unit for each move
	
	Actions : A queen can move to one place towards it's right, left, down, up where there will be no attack

	Goal State: To Arrange 8 Quees on the board such that no one is under attack by any other queen.

	This Solution Uses UCS(Uniform Cost Search).


# Travel Sales Man

	Problem Statement -> TSP is touring problem in which n cities and the distance between each pair is given. We have to find a shrtest route to visit each city exactly once and come back to the starting point.

	Run : 
		gcc TRAVEL_SALES_MAN.cpp -lstdc++
		./a.out	


	Input :
 
		Enter no. of nodes: 5
		Distance of Node 1 to the following nodes: 
		2: 4

		3: 1

		4: 4

		5: 7

		Distance of Node 2 to the following nodes: 
		3: 1

		4: 3

		5: 4

		Distance of Node 3 to the following nodes: 
		4: 1

		5: 7

		Distance of Node 4 to the following nodes: 
		5: 4


	Output : 

		0 
		2 5 5 8 
		5 5 5 5 8 11 
		5 5 5 8 8 10 11 11 
		5 5 8 8 8 10 10 11 11 11 
		5 8 8 8 10 10 11 11 11 12 13 
		8 8 8 10 10 11 11 11 12 12 13 13 
		8 8 10 10 11 11 11 12 12 13 13 14 14 17 
		8 10 10 11 11 11 12 12 13 13 13 14 14 17 19 
		10 10 11 11 11 12 12 13 13 13 13 14 14 17 19 19 
		10 11 11 11 12 12 13 13 13 13 14 14 15 17 18 19 19 
		11 11 11 12 12 13 13 13 13 14 14 15 15 17 18 18 19 19 
		11 11 12 12 13 13 13 13 14 14 15 15 17 18 18 19 19 19 19 
		11 12 12 13 13 13 13 14 14 15 15 17 18 18 19 19 19 19 19 22 
		12 12 13 13 13 13 14 14 15 15 17 18 18 19 19 19 19 19 19 22 22 
		12 13 13 13 13 14 14 15 15 17 18 18 19 19 19 19 19 19 22 22 22 
		13 13 13 13 14 14 15 15 17 18 18 19 19 19 19 19 19 22 22 22 22 
		13 13 13 14 14 15 15 17 18 18 19 19 19 19 19 19 22 22 22 22 23 
		13 13 14 14 15 15 17 18 18 19 19 19 19 19 19 22 22 22 22 23 23 
		13 14 14 15 15 17 18 18 19 19 19 19 19 19 22 22 22 22 23 23 23 
		14 14 15 15 17 18 18 19 19 19 19 19 19 22 22 22 22 23 23 23 23 
		14 15 15 17 18 18 19 19 19 19 19 19 19 21 22 22 22 22 23 23 23 23 
		15 15 17 18 18 19 19 19 19 19 19 19 19 21 21 22 22 22 22 23 23 23 23 
		15 17 18 18 19 19 19 19 19 19 19 19 21 21 22 22 22 22 23 23 23 23 28 
		17 18 18 19 19 19 19 19 19 19 19 21 21 22 22 22 22 23 23 23 23 28 28 
		18 18 19 19 19 19 19 19 19 19 21 21 22 22 22 22 22 22 23 23 23 23 28 28 
		18 19 19 19 19 19 19 19 19 21 21 22 22 22 22 22 22 23 23 23 23 28 28 31 
		19 19 19 19 19 19 19 19 21 21 22 22 22 22 22 22 23 23 23 23 28 28 31 31 
		19 19 19 19 19 19 19 21 21 22 22 22 22 22 22 23 23 23 23 28 28 29 31 31 
		19 19 19 19 19 19 21 21 22 22 22 22 22 22 23 23 23 23 28 28 29 29 31 31 
		19 19 19 19 19 21 21 22 22 22 22 22 22 23 23 23 23 26 28 28 29 29 31 31 
		19 19 19 19 21 21 22 22 22 22 22 22 23 23 23 23 26 28 28 28 29 29 31 31 
		19 19 19 21 21 22 22 22 22 22 22 23 23 23 23 26 26 28 28 28 29 29 31 31 
		19 19 21 21 22 22 22 22 22 22 23 23 23 23 26 26 26 28 28 28 29 29 31 31 
		19 21 21 22 22 22 22 22 22 23 23 23 23 26 26 26 28 28 28 28 29 29 31 31 
		21 21 22 22 22 22 22 22 23 23 23 23 26 26 26 26 28 28 28 28 29 29 31 31 
		21 22 22 22 22 22 22 23 23 23 23 26 26 26 26 28 28 28 28 28 29 29 31 31 
		22 22 22 22 22 22 23 23 23 23 26 26 26 26 28 28 28 28 28 28 29 29 31 31 
		22 22 22 22 22 23 23 23 23 26 26 26 26 28 28 28 28 28 28 29 29 31 31 
		22 22 22 22 23 23 23 23 26 26 26 26 28 28 28 28 28 28 29 29 31 31 
		22 22 22 23 23 23 23 26 26 26 26 28 28 28 28 28 28 29 29 31 31 31 
		22 22 23 23 23 23 26 26 26 26 28 28 28 28 28 28 29 29 31 31 31 31 
		22 23 23 23 23 26 26 26 26 28 28 28 28 28 28 29 29 29 31 31 31 31 
		23 23 23 23 26 26 26 26 28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		23 23 23 26 26 26 26 28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		23 23 26 26 26 26 28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		23 26 26 26 26 28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		26 26 26 26 28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		26 26 26 28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		26 26 28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		26 28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		28 28 28 28 28 28 29 29 29 29 31 31 31 31 
		28 28 28 28 28 29 29 29 29 31 31 31 31 
		28 28 28 28 29 29 29 29 31 31 31 31 
		28 28 28 29 29 29 29 31 31 31 31 
		28 28 29 29 29 29 31 31 31 31 
		28 29 29 29 29 31 31 31 31 
		29 29 29 29 31 31 31 31 
		29 29 29 31 31 31 31 
		29 29 31 31 31 31 
		29 31 31 31 31 
		31 31 31 31 
		31 31 31 
		31 31 
		31 
		1 -> 3 -> 2 -> 4 -> 5 -> 1
		Cost: 9



	There is a non-negative cost c (i, j) to travel from the city i to city j. The goal is to find a tour of minimum cost. We assume that every two cities are connected. Such problems are called Traveling-salesman problem (TSP).
	TSP that returns a tour whose cost is never more than twice the cost of an optimal tour. The idea is to use Minimum Spanning Tree (MST).



# Grouping Population Using Genetic
	
	
	Run : 
		gcc Grouping_Population_Using_Genetic.cpp -lstdc++
		./a.out
	
	Input1 :  
	Enter no. of students: 
	100

	Output1 : 
	GROUP 1 Representative: 58
	54 46 66 59 57 72 42 58 32 35 38 63 33 32 44 47 36 73 65 45 70 33 63 69 53 44 47 67 40 45 38 64 37 44 63 49 52 43 65 67 50 
	GROUP 2 Representative: 6
	13 4 7 4 7 16 16 26 23 5 6 20 10 0 19 28 17 1 17 13 24 30 19 5 6 6 14 7 29 17 13 27 4 23 
	GROUP 3 Representative: 90


	1. Define a suitable representation of the problem to be solved.
	2. Create an initial population of individuals for evolution.
	3. Define a suitable fitness function for evaluating the individuals.
	4. Perform genetic operations (crossover and mutation) to generate possible offspring.
	5. Evaluate the fitness value of each individual.
	6. Select superior individuals according to their fitness values.
	7. If the termination criterion is not satisfied, go to Step 4; otherwise, stop the algorithm.


	This algo is based on encoding. Appropriate Crossover and Mutations generates the next generation. The crossover may adopt combination to generate the offspring chromosomes. A repairing mechanism is  used to convert infeasible chromosomes into feasible chromosomes.



# Min Max AlphaBetaPuning Game
	
	run -> 	gcc Min_Max_AlphaBetaPuning_GAme.cpp 
		./a.out

	Input / Output

		GAME

		Enter number of Sticks
		5
		Enter your choice :
		1. HUMAN  VS HUMAN
		2. HUMAN VS AI
		3. AI vs AI
		2
		Ready to toss!...
		AI won toss
		Game Started
		Chance: AI
		AI move : 1
		No of Sticks Left :  4
		Chance: Player
		3
		No of Sticks Left1
		Winner :
		HUMAN
		Game Over

		Enter 1 to play again and 0 to exit
		1
		Enter number of Sticks
		10
		Enter your choice :
		1. HUMAN  VS HUMAN
		2. HUMAN VS AI
		3. AI vs AI
		3
		Ready to toss!...
		AI 1 won toss
		Chance: AI 1 
		AI 1 selects : 1
		No of Sticks left :  9
		Chance: AI 1
		AI 2 selects : 1
		No of Sticks left :  8
		Chance: AI 1
		AI 1 selects : 3
		No of Sticks left :  5
		Chance: AI 1
		AI 2 selects : 1
		No of Sticks left :  4
		Chance: AI 1
		AI 1 selects : 3
		No of Sticks left :  1
		AI 1
		Game Over

		Enter 1 to play again and 0 to exit
		0


		Game of Sticks

In the game of sticks there is a heap of sticks on a board. On their turn, each player picks up 1 to 3 sticks. The one who has to 
pick the final stick will bethe loser.

Thos game is based on the concept of DFS Algorithm(Alpha Beta pruning) => Simplified version of Min Max Algorithm.

So The nodes of the tree represents current status of the game and the edges represents moves. At the leaves of the tree the outcom of the game is Win, Loss, draw and payoff.

In this three diff scenario is taken : 
1. HUman vs HUman
2. HUman vs AI
3. AI vs Ai

No of sticks are input by the user. The toss value is generated randomly(0 or 1). 

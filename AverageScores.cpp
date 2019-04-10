
#include <iostream>
#include <string>
#include <cstdbool>


int main()
{
	//the total of all scores added together
	double total = 0;
	//the average of the scores
	double average;
	//the number of scores inputted
	int count = 0;
	//main loop bool
	bool loop = true;
	//user input
	std::string input = "";
	//convert scored
	double score;

	std::cout << "Hello welcome to the test score average calculator!\n\n";

	while (loop) {
		std::cout << "Enter test score:  ";
		std::cin >> input;
		//convert input to double
		score = std::stod(input);
		if (score == 0) {
			loop = false;
			//we are done
		}
		else {
			count++;
			total += score;
		}
	}

	std::cout << "Total Scores: " << count << std::endl;
	if (count > 0) {
		std::cout << "Average Score: " << total / count << std::endl;
	}
	
	getchar();
	return 0;
}

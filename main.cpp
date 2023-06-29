#include <iostream>
#include <vector>

void orderWithLetters(std::vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == 1) {
			std::cout << arr[i] << "st" << " ";
		}
		else if (arr[i] == 2) {
			std::cout << arr[i] << "nd" << " ";
		}
		else if (arr[i] == 3) {
			std::cout << arr[i] << "rd" << " ";
		}
		else {
			std::cout << arr[i] << "th" << " ";
		}
	}
}

void miniPeaks(std::vector<int> arr)
{
	std::vector<int> newArr = {};
	for (int i = 1; i < arr.size() - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			newArr.push_back(arr[i]);
		}
	}
	for (int i = 0; i < newArr.size(); i++)
	{
		std::cout << newArr[i] << ", ";
	}
}

void fibonacciSequence(int num) {
	std::vector<int> sequence = { 0, 1 };
	for (int i = 2; i <= num; i++) {
		sequence.push_back(sequence[i - 1] + sequence[i - 2]);
	}
	for (int i = 0; i < sequence.size(); i++) {
		if (i != sequence.size() - 1) {
			std::cout << sequence[i] << ", ";
		}
		else {
			std::cout << sequence[i] << ".";
		}
	}
}

void perfectSquare(int num) {
	std::vector<std::vector<int>> arr = {};
	for (int i = 0; i < num; i++) {
		arr.push_back({});
		for (int j = 0; j < num; j++) {
			arr[i].push_back(num);
		}
	}
	for (const auto& row : arr) {
		for (const auto& element : row) {
			std::cout << element << " ";
		}
		std::cout << std::endl;
	}
}

void letterCount(std::vector<std::vector<char>> arr, char letter) {
	int count = 0;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (letter == arr[i][j]) {
				count++;
			}
		}
	}
	std::cout << count;
}

void findDiscount(int num, double percente) {
	double discount = num * percente / 100;
	std::cout << num - discount;
}

void oddUpEvenDown(std::vector<int> arr, int num) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] % 2 == 0) {
			arr[i] -= num;
		}
		else {
			arr[i] += num;
		}
		if (i != arr.size() - 1) {
			std::cout << arr[i] << ", ";
		}
		else {
			std::cout << arr[i] << ".";
		}
	}
}

void stringInOrder(std::string text) {
	for (int i = 1; i < text.length(); i++) {
		for (int j = 0; j < text.length(); j++) {
			if (text[i] < text[j]) {
				char temp = text[j];
				text[j] = text[i];
				text[i] = temp;
			}
		}
	}
	std::cout << text;
}

void getMatrixSum(std::vector<std::vector<int>> arr) {
	int sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (arr[i][j] == 0) {
				if (i + 1 < arr.size()) {
					arr[i + 1][j] = 0;
				}
			}
			else {
				sum += arr[i][j];
			}
		}
	}
	std::cout << sum;
}

void repeateString(std::string text) {
	std::string newText = "";
	for (int i = 0; i < text.length(); i++) {
		newText += text[i];
		newText += text[i];
	}
	std::cout << newText;
}

void isSafeBridge(std::string bridge) {
	for (int i = 0; i < bridge.length(); i++) {
		if (bridge[i] == ' ') {
			std::cout << "false";
			break;
		}
	}
	std::cout << "true";
}

void sortVector(std::vector<int> arr) {
	for (int i = 1; i < arr.size(); i++) {
		for (int j = 0; j < arr.size(); j++) {
			if (arr[j] > arr[i]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < arr.size(); i++) {
		if (i != arr.size() - 1) {
			std::cout << arr[i] << ", ";
		}
		else {
			std::cout << arr[i] << ".";
		}
	}
}

void getWordCount(std::string text) {
	int count = 1;
	if (text.length() <= 0) {
		std::cout << 0;
	}
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == ' ') {
			count++;
		}
	}
	std::cout << count;
}

int main() {
	std::cout << "13. Order with letters: ";
	orderWithLetters({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 1, 3, 5 });
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "12. Mini peaks: ";
	miniPeaks({ 2, 1, 3, 6, 4, 9, 7 });
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "11. Fibonacci sequence: ";
	fibonacciSequence(10);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "10. Prefect square NxN: " << std::endl;
	perfectSquare(3);
	std::cout << std::endl;

	std::cout << "9. Count of letter: ";
	letterCount({ {'D', 'E', 'Y', 'H', 'A', 'D'},
				 {'C', 'B', 'Z', 'Y', 'J', 'K'},
				 {'D', 'B', 'C', 'A', 'M', 'N'},
				 {'F', 'G', 'G', 'R', 'S', 'R'},
				 {'V', 'X', 'H', 'A', 'S', 'S'} },
		'D');
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "8. Discount: ";
	findDiscount(1500, 50);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "7. Even down Odd up: ";
	oddUpEvenDown({ 3, 2, 7 }, 2);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "6. Ordered text: ";
	stringInOrder("acbklandsal");
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "5. Sum of matrix: ";
	getMatrixSum({ {1, 1, 1, 0}, {0, 5, 0, 2}, {6, 1, 0, 9} });
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "4. Repeated text: ";
	repeateString("Hello!_");
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "3. Word count: ";
	getWordCount("Just an example here move along");
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "2. Safe bridge: ";
	isSafeBridge("###");
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "1. Sorted vector: ";
	sortVector({ 5, 1, 3, 6, 49, 7, 8, 6, 84, 12, 4, 2 });
	std::cout << std::endl;
}
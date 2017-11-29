#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <limits>
#include <ctime>
#include <vector>
#include <tuple>
#include <cmath>

using namespace std;

int size, vertex, result, median, i, j, cap, dem;
unsigned int seed = 140596;
vector<int> factors;

class Node {
        int capacity;
        int demand;
        int median;

	public:
		Node(void);
		void setValues(int capacity, int demand);
		int getCapacity(void);
		int getDemand(void);
		int getMedian(void);

};

Node::Node(void) {
	this -> capacity = -1;
	this -> demand = -1;
	this -> median = -1;
}

void Node::setValues(int capacity, int demand) {
	this -> capacity = capacity;
	this -> demand = demand;
}

int Node::getCapacity(void) {
	return this -> capacity;
}

int Node::getDemand(void) {
	return this -> demand;
}

int Node::getMedian(void) {
	return this -> median;
}

void generateRandomMap(vector<tuple<int, int>> *medians) {
	int x = size / 
	for(auto it = medians.begin(), int i = 0; it != medians.end(); it++, i++) {
		it.pushback(i).make_tuple(rand() % 
		
}

void primeFactors(int n) {
	if(n % 2 == 0) factors.pushback(2);
	while(n % 2 == 0) n = n/2;

	for (int i = 3; i <= sqrt(n); i = i+2) {
		if(n % i == 0) factors.pushback(i);
		while(n % i == 0) n = n/i;
	}

	if (n > 2) factors.pushback(n);
}

int main(int argc, char *argv[]) {
	srand(seed);
        cin >> size;
        cin >> median;
        cin >> vertex;
        cin >> result;
        Node nodesMap[size][size];
	vector<tuple<int, int>> medians[median];
        while(!cin.eof()) {
                cin >> i >> j >> cap >> dem;
		nodesMap[i][j].setValues(cap, dem);
        }
	primeFactors(median);
        return 0;
}

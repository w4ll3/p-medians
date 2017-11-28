#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <limits>
#include <ctime>

using namespace std;

unsigned int seed = 140596;

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

int main(int argc, char *argv[]) {
        int size, vertex, result, median, i, j, cap, dem;
	srand(seed);
        cin >> size;
        cin >> median;
        cin >> vertex;
        cin >> result;
        Node nodesMap[size][size];
	Node medians[median];
        while(!cin.eof()) {
                cin >> i >> j >> cap >> dem;
		nodesMap[i][j].setValues(cap, dem);
        }
        return 0;
}

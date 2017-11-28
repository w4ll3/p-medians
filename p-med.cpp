#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <limits>

using namespace std;

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
	this -> capacity = 0;
	this -> demand = 0;
	this -> median = -1;
}

void Node::setValues(int capacity, int demand) {
	this -> capacity = capacity;
	this -> demand = demand;
}

int Node::getCapacity(void) {
	return capacity;
}

int Node::getDemand(void) {
	return demand;
}

int Node::getMedian(void) {
	return median;
}
	

int main(int argc, char *argv[]) {
        int size, vertex, result, median, i, j, cap, dem;
        cin >> size;
        cin >> median;
        cin >> vertex;
        cin >> result;
        Node graph[size][size];
        while(!cin.eof()) {
                cin >> i >> j >> cap >> dem;
		graph[i][j].setValues(cap, dem);
        }
	int greaterCap = -numeric_limits<int>::infinity();
	for(i = 0; i < vertex; i++) {
		for(j; ((size / vertex) % j) != 0; j++) {
			if((cap = graph[i][j].getCapacity()) > greaterCap) greaterCap = cap;
		}
		j++;
		cout << "its me mario" << endl;
		cout << greaterCap << endl;
	}
        return 0;
}

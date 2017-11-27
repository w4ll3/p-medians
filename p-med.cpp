#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct node {
        int capacity;
        int demand;
        int median;
};
typedef node node;

int main(int argc, char *argv[]) {
        int size, vertex, result, median, i, j;
        cin >> size;
        cin >> median;
        cin >> vertex;
        cin >> result;
        node graph[size][size];
        while(!cin.eof()) {
                cin >> i >> j;
                cin >> graph[i][j].capacity >> graph[i][j].demand;
        }
        return 0;
}

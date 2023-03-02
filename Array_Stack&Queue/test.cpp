#include <iostream>
#include <cassert>
#include "ArrayQueue.h"

using namespace std;

void test_enqueue_dequeue() {
    ArrayQueue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    assert(q.dequeue() == 1);
    assert(q.dequeue() == 2);
    assert(q.dequeue() == 3);
}

void test_peek() {
    ArrayQueue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    assert(q.peek() == 1);
    q.dequeue();
    assert(q.peek() == 2);
}

void test_isEmpty() {
    ArrayQueue<int> q;
    assert(q.isEmpty() == true);
    q.enqueue(1);
    assert(q.isEmpty() == false);
    q.dequeue();
    assert(q.isEmpty() == true);
}

void test_resize() {
    ArrayQueue<int> q;
    for(int i=1; i<=11; i++) {
        q.enqueue(i);
    }
    assert(q.peek() == 1);
    assert(q.dequeue() == 1);
    assert(q.peek() == 2);
    for(int i=2; i<=11; i++) {
        assert(q.dequeue() == i);
    }
}

int main() {
    test_enqueue_dequeue();
    test_peek();
    test_isEmpty();
    test_resize();
    cout << "All test cases passed" << endl;
    return 0;
}


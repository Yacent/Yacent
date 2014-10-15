/*#include<iostream>
#include<stdlib.h>
#include "Stack.h"

int main() {
    Stack st;
	if (!st.empty()) {
	    cout << "Congretulation, ther is no element" << endl;
	}
	for (int i = 0; i < 5; i++) {
		int test;
		cin >> test;
	    st.push(test);
	}
	for (int i = 0; i < 5; i++) {
		int h;
		st.top(h);
	    cout << h << " ";
		st.pop();
	}
	cout << endl;
	system("pause");
	return 0;
}*/


#include"Queue.h"
#include<stdlib.h>

int main() {
	Queue qu;
	if (!qu.empty()) {
	    cout << "FUCK YOU" << endl;
	}
	for (int i = 0; i < 10; i++) {
	    int test;
		cin >> test;
		qu.append(test);
	}
	int j;
	qu.retrieve(j);
	cout << j << endl;
	for (int i = 0; i < 5; i++) {
		qu.serve();
	}
	for (int i = 0; i < 2; i++) {
		int test;
		cin >> test;
		qu.append(test);
	}
	for (int i = 0; i < 7; i++) {
	    int h;
		qu.retrieve(h);
		cout << h << " ";
		qu.serve();
	}
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
struct ITINERARY {
	string FIRST;
	string FINAL;
	int NUM;
	double DISTANCE;
};
const int N = 3;
void enterData(ITINERARY ROUT[]) {
	for (int i = 0; i < N; i++) {
		cout << "Enter the data for the march" << i + 1 << ":\n";
		cout << "Enter the starting point: ";
		cin >> ROUT[i].FIRST;
		cout << "Enter the destination: ";
		cin >> ROUT[i].FINAL;
		cout << "Number: ";
		cin >> ROUT[i].NUM;
		cout << "Distance: ";
		cin >> ROUT[i].DISTANCE;
	}
}
void organizeRecords(ITINERARY ROUT[]) {
	sort(ROUT, ROUT + N, [](const ITINERARY& a, const ITINERARY& b) {
		return a.DISTANCE > b.DISTANCE;
		});
}
void informationOutput(ITINERARY ROUT[]) {
	int num;
	cout << "Enter the route number: ";
	cin >> num;
	for (int i = 0; i < N; i++) {
		if (ROUT[i].NUM == num) {
			cout << "Information about the route:\n";
			cout << "The starting point: " << ROUT[i].FIRST << "\n";
			cout << "The destination: " << ROUT[i].FINAL << "\n";
			cout << "Number: " << ROUT[i].NUM << "\n";
			cout << "Distance: " << ROUT[i].DISTANCE << "\n";
			return;
		}
		else {
			cout << "Route with number" << num << "not found";
		}
	}
}
int main() {
	ITINERARY ROUT[N];
	enterData(ROUT);
	organizeRecords(ROUT);
	informationOutput(ROUT);
	return 0;

}
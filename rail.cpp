#include <bits/stdc++.h>
using namespace std;

class TicketSystem {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int ticketCounter = 1;

public:
    int bookTicket() {
        minHeap.push(ticketCounter);
        return ticketCounter++;
    }

    void cancelTicket(int ticketNo) {
        cout << "Ticket " << ticketNo << " canceled\n";
    }

    void getNextTicket() {
        if (!minHeap.empty()) {
            cout << "Next ticket to be processed: " << minHeap.top() << endl;
            minHeap.pop();
        } else {
            cout << "No pending tickets.\n";
        }
    }
};

int main() {
    TicketSystem ts;
    int t1 = ts.bookTicket();
    int t2 = ts.bookTicket();
    ts.getNextTicket();
    ts.cancelTicket(t2);
    ts.getNextTicket();

    return 0;
}

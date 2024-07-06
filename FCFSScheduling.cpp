#include <iostream>
using namespace std;

class Process {
public:
    int pdId;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;


    void calculateCompletionTime(Process par[], int n) {
        par[0].completionTime = par[0].burstTime;
        for (int i = 1; i < n; i++) {
            par[i].completionTime = par[i].burstTime + par[i - 1].completionTime;
        }
    }

    void calculateTurnaroundTime(Process par[], int n) {
        for (int i = 0; i < n; i++) {
            par[i].turnaroundTime = par[i].completionTime - par[i].arrivalTime;
        }
    }

    void calculateWaitingTime(Process par[], int n) {
        for (int i = 0; i < n; i++) {
            par[i].waitingTime = par[i].turnaroundTime - par[i].burstTime;
        }
    }

    void findFCFS(Process par[], int n) {
        calculateCompletionTime(par, n);
        calculateTurnaroundTime(par, n);
        calculateWaitingTime(par, n);
    }

    void printFCFS(Process par[], int n) {
        cout << "FCFS Scheduling:" << endl;
        cout << "pdId\tarrival time\tburst time\tcompletion time\tturnaround time\twaiting time" << endl;

        for (int i = 0; i < n; i++) {
            cout << par[i].pdId << "\t\t" << par[i].arrivalTime << "\t\t" << par[i].burstTime
                 << "\t\t" << par[i].completionTime << "\t\t" << par[i].turnaroundTime
                 << "\t\t" << par[i].waitingTime << endl;
        }
    }
};

int main() {
    int n = 5;
    Process par[n] = {{0, 0, 5}, {1, 1, 9}, {2, 2, 5}, {3, 3, 6}, {4, 4, 10}};

    Process fcfs;
    fcfs.findFCFS(par, n);
    fcfs.printFCFS(par, n);

    return 0;
}

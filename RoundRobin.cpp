#include<iostream>
using namespace std;
class Process{
    public:
    int pdId;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    void completion_time(Process arr[],int n,int quantum){
        int remaining_time[n];
        for(int i=0;i<n;i++)
        remaining_time[i]=arr[i].burstTime;
        int current_time=0;
        bool isDone=false;
        while(!isDone){
            isDone=true;
           
            for (int i = 0; i < n; i++)
            {   if(remaining_time[i]>0){
                isDone=false;
            
                if(remaining_time[i]>quantum){
                remaining_time[i]=remaining_time[i]-quantum;   
                current_time=current_time+quantum;         }
            }
            else{
                current_time = current_time+remaining_time[i];
                arr[i].completionTime=current_time;
                remaining_time[i]=0;
            }
            }
        }
    }

 void calculateTurnaroundTime(Process arr[], int n) {
     for (int i = 0; i < n; i++) {
         arr[i].turnaroundTime = arr[i].completionTime - arr[i].arrivalTime;
     }
 }
 void calculateWaitingTime(Process arr[], int n) {
     for (int i = 0; i < n; i++) {
         arr[i].waitingTime = arr[i].turnaroundTime - arr[i].burstTime;
     }
 }
  void findFCFS(Process arr[], int n,int quantum) {
     completion_time(arr, n,quantum);
     calculateTurnaroundTime(arr, n);
     calculateWaitingTime(arr, n);
 }
 void printFCFS(Process arr[], int n,int quantum) {
    cout << "Round Robin Scheduling:" << endl;
    cout << "pdId\tarrival time\tburst time\tcompletion time\tturnaround time\twaiting time" <<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i].pdId << "\t\t" << arr[i].arrivalTime << "\t\t" << arr[i].burstTime
             << "\t\t" << arr[i].completionTime << "\t\t" << arr[i].turnaroundTime
             << "\t\t" << arr[i].waitingTime << endl;
    }
}

};

int main(){
    int n=6;
    Process arr[6]={{0,0,4},{1,1,5},{2,2,2},{3,3,1},{4,4,6},{5,5,3}};
    int quantum=2;
     Process roundRobin;
 roundRobin.findFCFS(arr, n,quantum);
 roundRobin.printFCFS(arr, n,quantum);
}
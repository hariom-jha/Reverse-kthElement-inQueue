#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseKelement(queue<int> &q , int k){
    stack<int> s;
    int count =0;
    int n =q.size();

    while(!q.empty()){
        int temp= q.front();
        q.pop();
        s.push(temp);
        count++;

        if (count ==k){
            break;
        }
            }
    
    // step2: stacl to queue 
    while(!s.empty()){
        int temp= s.top();
        s.pop();
        s.push(temp);

    }
    // step3 : push n-k element from q front to back
    count=0;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count== n-k)
        break;
    }
}

int main(){

queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

reverseKelement(q,3);
cout<<"printing queue ";
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
cout<<endl;
return 0;
}

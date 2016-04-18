#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

/*class Cmp {
    public:
    bool operator() (int &t1, int &t2) {
        return t1 < t2;
    }
};
*/
int main(){
    priority_queue<int, vector<int>, greater<int> > p;

    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(2);
    while (!p.empty()) {
        cout<<p.top()<<endl;
        p.pop();
    }
    cout<<"\n"<<p.size();
}

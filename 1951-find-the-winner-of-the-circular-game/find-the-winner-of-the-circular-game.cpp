class Solution {
public:
    int findTheWinner(int n, int k) {
       queue<int> q;
       for(int i=1;i<=n;i++)
        q.push(i);
        //this will push the array element in the queue.
       
       while(q.size()>1){
        for(int i=0;i<k-1;i++){
        q.push(q.front());//this will add front element in the last(rear).
         q.pop();
      } 
     q.pop();
       }
return q.front();
    }
};
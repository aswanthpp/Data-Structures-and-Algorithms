/*
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
*/
void QueueStack :: push(int x)
{
        // Your Code
        int l1=q1.size();
        int l2=q2.size();
        if(l1!=0){
            for(int i=0;i<l1;i++){
                int q=q1.front();
                q1.pop();
                q2.push(q);
            }
            q2.push(x);
        }
        else if(l2!=0){
            for(int i=0;i<l2;i++){
                int q=q2.front();
                q2.pop();
                q1.push(q);
            }
            q1.push(x);
        }
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code  
        int l1=q1.size();
        int l2=q2.size();
        int x;
        if(l1!=0){
            x=q1.front();
            q1.pop();
        }
        else if(l2!=0){
            x=q2.front();
            q2.pop();
        }
        return x;
}


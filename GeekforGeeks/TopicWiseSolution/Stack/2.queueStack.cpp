/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */
/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        // Your Code
        int l1=s1.size();
        int l2=s2.size();
        if(l2==0){
            for(int i=0;i<l1;i++){
                s2.push(s1.top());
                s1.pop();
            }
            s2.push(x);
        }
        else if(l1==0){
            for(int i=0;i<l2;i++){
                s1.push(s2.top());
                s2.pop();
            }
            s1.push(x);
        }
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code  
        int l1=s1.size();
        int l2=s2.size();
        int p;
        if(l1==0){
            p=s2.top();
            s2.pop();
        }
        else if(l2==0){
            p=s1.top();
            s1.pop();
        }
        return p;
}


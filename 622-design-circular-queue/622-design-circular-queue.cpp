class MyCircularQueue {
    int * arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        size =k;
        arr = new int[k];
        front =-1;
        rear = -1;   
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        if( front ==-1){
            front=0;
        }
        // else if((rear+1)%size == size && front !=0){
        //     rear =0;
        // }
        // else {
           
        // }
        rear = (rear+1)%size;
        arr[rear]= value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        else if(front == rear){
            front = rear =-1;
        }
        // else if(front == size-1){
        //     front =0;
        // }
        // else{
        //     front++;
        // }
        else{
        front = (front+1)%size;
        }
        return true;
    }
    
    int Front() {
        if(!isEmpty()){
        return arr[front];
        }
        else{
            return -1;
        }
    }
    
    int Rear() {
        if(!isEmpty()){
        return arr[rear];
        }
        else{
            return -1;
        }
    }
    
    bool isEmpty() {
        if(front == -1 ){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if((rear+1)%size == front){
            return true;
        }
        else {
            return false;
        }
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
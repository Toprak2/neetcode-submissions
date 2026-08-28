class Node{
    public:

    int value;
    Node *prev;

    Node(){
        this->prev = nullptr;
    }

};


class MinStack {

private:

    Node *top_node;

public:
    MinStack() {
        this->top_node = nullptr;
    }
    
    void push(int val) {

        Node *new_node = new Node;

        new_node->value = val;


        if(top_node == nullptr){
            this->top_node = new_node;
            return;
        }

        new_node->prev = this->top_node;
        
        this->top_node = new_node;
    }
    
    void pop() {
        
        Node *old = this->top_node;

        if(old->prev != nullptr){
            this->top_node = old->prev;
        }
        else{
            this->top_node = nullptr;
        }

        delete old;    

    }
    
    int top() {
        return this->top_node->value;
    }
    
    int getMin() {

        int min= this->top_node->value;
        Node *curr_node = this->top_node;


        while(curr_node->prev != nullptr){
            curr_node = curr_node->prev;

            if(curr_node->value < min){
                min = curr_node->value;
            }
        }
        return min;
    }
};

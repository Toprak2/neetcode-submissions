class Node {
   public:
    int value;
    int prev_min;
    Node* prev_node;

    Node() { this->prev_node = nullptr;}
};

class MinStack {
   private:
    Node* top_node;

   public:
    MinStack() { this->top_node = nullptr; }

    void push(int val) {
        Node* new_node = new Node;

        new_node->value = val;

        if (top_node == nullptr) {
            new_node->prev_min=val;
            this->top_node = new_node;
            return;
        }

        new_node->prev_node = this->top_node;

        int prev_min = new_node->prev_node->prev_min;
        if( prev_min < val){
            new_node->prev_min=prev_min;
        }
        else{
            new_node->prev_min=val;
        }
        

        this->top_node = new_node;
    }

    void pop() {

        if(this->top_node == nullptr){
            return;
        }

        Node* old = this->top_node;

        this->top_node = old->prev_node;

        delete old;
    }

    int top() { return this->top_node->value; }

    int getMin() {
        return this->top_node->prev_min;
    }
};

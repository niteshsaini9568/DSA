class Solution {
  public:
    
    string doc = "";
    stack<char> redost;
    
    // append operation
    void append(char X) {
        doc.push_back(X);
    
        // clear redo stack on new write
        while (!redost.empty()) redost.pop();
    }
    
    // undo operation
    void undo() {
        if (!doc.empty()) {
            char last = doc.back();
            doc.pop_back();
            redost.push(last);
        }
    }
    
    // redo operation
    void redo() {
        if (!redost.empty()) {
            char ch = redost.top();
            redost.pop();
            doc.push_back(ch);
        }
    }
    
    // read operation
    string read() {
       return doc;
    }
};
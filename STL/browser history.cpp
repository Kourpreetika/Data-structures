class BrowserHistory {//used a vector with index because it simulates browser timeline efficiently, avoids unnecessary stack transfers, and keeps operations O(1) with clean implementation
public:
    vector<string> history;
    int curr;
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        curr = 0;
    }
    
    void visit(string url) {
         history.resize(curr + 1); 
        history.push_back(url);
        curr++;
    }
    
    string back(int steps) {
        curr = max(0,curr-steps);//Move back steps times, but don’t go below index 0
        return history[curr];
    }
    
    string forward(int steps) {
        curr = min((int)history.size()-1 , curr+steps); ///Move forward steps times, but don’t go beyond the last page  
        return history[curr];
     }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
//https://leetcode.com/problems/design-browser-history/
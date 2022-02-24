class BrowserHistory {
public:
    string history[101];
    int ind = 0 , end =0;
    
    BrowserHistory(string homepage) {
        history[ind] = homepage;    
    }
    
    void visit(string url) {
        //move an index fuirther
        ind++;
        history[ind] = url;
        end = ind;
    }
    
    string back(int steps) {
        ind = max(ind - steps, 0);
        return history[ind];
    }
    
    string forward(int steps) {
        ind = min(ind+steps, end);
        return history[ind];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
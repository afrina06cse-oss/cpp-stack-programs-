#include <iostream>
using namespace std;

#define MAX 10

class BrowserHistory {
    string history[MAX];
    int top;

public:
    BrowserHistory() {
        top = -1;
    }

    void visit(string page) {
        history[++top] = page;
    }

    void back() {
        if (top >= 0)
            top--;
    }

    string currentPage() {
        return history[top];
    }
};

int main() {
    BrowserHistory b;

    b.visit("Google.com");
    b.visit("YouTube.com");
    b.visit("ABCSC.com");
    b.visit("Facebook.com");

    b.back();
    b.back();

    cout << "Current page: " << b.currentPage();

    return 0;
}

#include <vector>
#include <stack>
#include <string>

int calculate(char op, int a, int b) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            throw std::runtime_error("unknown op");
    }
}

int hmax = 0;
int pops = 0;

void pop(int &hCurrent, std::stack<char *> &Arg) {
    hCurrent--;
    Arg.pop();
    pops++;
}

void push(const char *value, int &hCurrent, std::stack<char *> &Arg) {
    hCurrent++;
    if (hCurrent > hmax) hmax = hCurrent;
    Arg.push((char *&&) value);
}

int ExpressionValue(std::string str) {

    std::vector<char> Expr(str.c_str(), str.c_str() + str.size() + 1);

    std::stack<char *> Arg;
    std::stack<char> Opr;

    int hCurrent = 0;
    char *first;
    std::string result;

    for (char &element : Expr) {
        if (element == '(') {
            continue;
        }

        if (element == ')') {
            first = Arg.top();
            pop(hCurrent, Arg);
            result = std::to_string(calculate(Opr.top(), atoi(first), atoi(Arg.top())));
            pop(hCurrent, Arg);
            Opr.pop();

            push(result.c_str(), hCurrent, Arg);
            continue;
        }

        if (element >= 48 && element <= 57) {

            push(&element, hCurrent, Arg);
            continue;
        }

        Opr.push(element);
    }

    printf("Max: %d, Pop: %d", hmax, pops);

    return atoi(Arg.top());
}

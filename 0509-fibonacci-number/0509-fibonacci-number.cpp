class Solution {
public:
    int fib(int n) {
        int first = 0;
        int second =1;
        int fibo;
        if(n == 0) return first;
        else if (n ==1 ) return second;
        else if (n>1){
            for(int i =1; i<n; i++){
                fibo = first + second;
                first = second;
                second = fibo;
            }
        } return fibo; 

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
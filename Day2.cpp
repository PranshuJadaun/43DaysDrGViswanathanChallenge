// 412. Fizz Buzz

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        for(int i=1;i<n+1;i++){
            if(i%3==0){
                if(i%5==0){
                    s.push_back("FizzBuzz");
                }
                else{
                    s.push_back("Fizz");
                }
            }
            else if(i%5==0){
                s.push_back("Buzz");
            }
            else{
                s.push_back(to_string(i));
            }
        }
        return s;
    }
};

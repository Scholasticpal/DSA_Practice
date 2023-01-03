class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        int bulls = 0, cows=0;
        string final;
        for(int i = 0; i<n; i++){
            if(secret.at(i) == guess.at(i)){
                bulls++;
                secret.erase(secret.begin() + i);
                guess.erase(guess.begin() + i);
                n--;
                i = i-1;
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n;j++){
                    if(secret.at(i)==guess.at(j)){
                        cows++;
                        secret.erase(secret.begin() + i);
                        guess.erase(guess.begin() + j);
                        n--;
                        i = i-1;
                        j = j-1;
                        break;
                }
            }
        }
        string x = to_string(bulls);
        string y = to_string(cows);
        final = x+"A"+y+"B";
        return final;
    }
};

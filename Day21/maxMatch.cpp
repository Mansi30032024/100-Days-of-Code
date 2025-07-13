 #include<iostream>
 #include<vector>
 #include<algorithm>
using namespace std;

  int match(vector<int>& players, vector<int>& trainers) {
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());
    int i = 0, j = 0, match = 0;
    while (i < players.size() && j < trainers.size()) {
        if (players[i] <= trainers[j]) { 
        //[1(player):1(trainer)]
            match++;
            i++;  j++;// move both
        } else { j++; }//trainer weak , move
    }
    return match;
    }
    int main(){
      vector<int> players = {1, 2, 3};
      vector<int> trainers = {2, 3};
      int result = match(players, trainers);
      cout << result << endl;
      return 0;
    }

/*n = player.size() && m = trainers.size()
sorting both O(n logn + m log m)
while loop with two pointers  O(n + m)
TC: O(n logn + m log m)
SC : O(1)
*/
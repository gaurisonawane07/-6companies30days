/*There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n,
 and moving clockwise from the nth friend brings you to the 1st friend.
The rules of the game are as follows:
Start at the 1st friend.
Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
The last friend you counted leaves the circle and loses the game.
If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
Else, the last friend in the circle wins the game.
Given the number of friends, n, and an integer k, return the winner of the game.*/

/*approach:this is a classic josephus problem
initially consider winner as 0
count k friends
and kth friend leaves the game again start from next
continue until only one peson remain who is the winner
*/
#include<iostream>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner = 0;
        for(int i = 1;i<=n;++i){
            winner = (winner+k)%i;
        }
        return winner+1;
    }
};
int main(){
    Solution s;
    int n,k;
    cin>>n>>k;
    cout<<"winner is:"<<s.findTheWinner(n,k);
}
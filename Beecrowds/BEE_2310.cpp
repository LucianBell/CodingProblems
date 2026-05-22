/*
A volleyball coach would like to keep statistics about his team. In every game he keeps
track of the number of services, blocks and attacks of each player, as well as how many
of these services, blocks and attacks were successful (scored points). Your program must
show, with two decimal points what is the total percentage of services, blocks and attacks
by the whole team that were successful.

Input
Input starts with the number of players N (1 ≤ N ≤ 100), followed by the names of each of
these players. Below the name of each player, two rows of integers are presented. In the first
row, the numbers represent the service, blocks and attack attempts (0 ≤ S,B,A ≤ 10000) by the
specific player. In the second row there is the number of these services, blocks and attacks
(0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) that were successful.

Output
The output must contain the total percentage of successful services, blocks and attacks by the
whole team, with two digits after the decimal point, as shown in the example.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int num_players, s, b, a, ss, sb, sa;
    int stats[3]  = {0, 0, 0}, success[3] = {0, 0, 0};
    double decimals;
    string player;

    
    cin >> num_players;

    for (int i = 0; i < num_players; i++)
    {
        cin >> player;
        cin >> s >> b >> a;
        
        stats[0] += s;
        stats[1] += b;
        stats[2] += a;

        cin >> ss >> sb >> sa;
        
        success[0] += ss;
        success[1] += sb;
        success[2] += sa;
    }
    
    decimals = (double(success[0]) / stats[0]) * 100.0;
    cout << "Pontos de Saque: " << fixed << setprecision(2) << decimals << " %." << endl;
    
    decimals = (double(success[1]) / stats[1]) * 100.0;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << decimals << " %." << endl;
    
    decimals = (double(success[2]) / stats[2]) * 100.0;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << decimals << " %." << endl;

    return 0;
}


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cctype>
using namespace std;

struct Player
{
    string name;
    int score;
};

string remove_vowels(string s)
{
    string result;
    for (char c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            continue;
        }
        result += c;
    }
    return result;
}

bool compare_by_score(const Player &p1, const Player &p2)
{
    return p1.score > p2.score;
}

bool compare_by_name(const Player &p1, const Player &p2)
{
    return p1.name < p2.name;
}

int count_greater_than(const vector<Player> &players, int x)
{
    int count = 0;
    for (const Player &p : players)
    {
        if (p.score > x)
        {
            count++;
        }
    }
    return count;
}

int count_equal_to(const vector<Player> &players, int x)
{
    int count = 0;
    for (const Player &p : players)
    {
        if (p.score == x)
        {
            count++;
        }
    }
    return count;
}

bool are_equal(const vector<Player> &v1, const vector<Player> &v2)
{
    if (v1.size() != v2.size())
    {
        return false;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i].name != v2[i].name || v1[i].score != v2[i].score)
        {
            return false;
        }
    }
    return true;
}

double average_score(const vector<Player> &players)
{
    int sum = 0;
    for (const Player &p : players)
    {
        sum += p.score;
    }
    return (double)sum / players.size();
}

int main()
{
    vector<Player> players;

    ifstream file("player.txt");
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            size_t pos = line.find(',');
            string name = line.substr(0, pos);
            int score = stoi(line.substr(pos + 1));

            Player p{name, score};
            players.push_back(p);
        }
        file.close();
    }
    else
    {
        cout << "Error opening the file" << endl;
        return -1;
    }

    // 1
    cout << "1. The names of the players without vowels are:" << endl;
    for (const Player &p : players)
    {
        cout << remove_vowels(p.name) << endl;
    }
    cout << endl;

    // 2
    cout << "2. The names and scores of the top five players are:" << endl;
    vector<Player> sorted_by_score(players);
    stable_sort(sorted_by_score.begin(), sorted_by_score.end(), compare_by_score);
    for (int i = 0; i < 5 && i < sorted_by_score.size(); i++)
    {
        cout << sorted_by_score[i].name << " " << sorted_by_score[i].score << endl;
    }
    cout << endl;

    // 3
    cout << "3. The names of the players in alphabetical order are:" << endl;
    vector<Player> sorted_by_name(players);
    sort(sorted_by_name.begin(), sorted_by_name.end(), compare_by_name);
    for (const Player &p : sorted_by_name)
    {
        cout << p.name << endl;
    }
    cout << endl;

    // 4
    cout << "4. The names of the players in reverse order are:" << endl;
    vector<Player> reversed(players);
    reverse(reversed.begin(), reversed.end());
    for (const Player &p : reversed)
    {
        cout << p.name << endl;
    }
    cout << endl;

    // 5
    int x = 8000; // Change this value as needed
    cout << "5. The number of players with a score greater than " << x << " is: " << endl;
    cout << count_greater_than(players, x) << endl;
    cout << endl;

    // 6
    x = 8000; // Change this value as needed
    cout << "6. The number of players with a score equal to " << x << " is: " << endl;
    cout << count_equal_to(players, x) << endl;
    cout << endl;

    // 7
    cout << "7. Copying the list and checking for equality:" << endl;
    vector<Player> copy(players);
    cout << "The copy and the original are " << (are_equal(copy, players) ? "equal" : "not equal") << endl;
    cout << endl;

    // 8
    cout << "8. The average score of the players is:" << endl;
    cout << average_score(players) << endl;
    cout << endl;

    return 0;
}

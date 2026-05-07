#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int height = park.size();
    int width = park[0].size();
    int curX = 0, curY = 0;
    
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (park[i][j] == 'S'){
                curY = i;
                curX = j;
            }
        }
    }
    
    for (string& route : routes){
        size_t spacePos = route.find(' ');
        char op = route[0];
        int dist = stoi(route.substr(spacePos + 1));
        
        int dx = 0, dy = 0;
        if (op == 'E') dx = 1;
        else if (op == 'W') dx = -1;
        else if (op == 'N') dy = -1;
        else if (op == 'S') dy = 1;
        
        int nextX = curX;
        int nextY = curY;
        bool possible = true;
        
        for (int i = 0; i < dist; i++){
            nextX += dx;
            nextY += dy;
            
            if (nextX < 0 || nextX >= width || nextY < 0 || nextY >= height 
                || park[nextY][nextX] == 'X')
            {
                possible = false;
                break;
            }
        }
        
        if (possible){
            curX = nextX;
            curY = nextY;
        }
    }
    answer = {curY, curX};
    
    return answer;
}
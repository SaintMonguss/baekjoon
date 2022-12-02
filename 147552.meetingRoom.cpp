#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int count;
    std::cin >> count;
    int answer = 0;

    std::vector<std::vector<int>> meetingInfo;
    
    for(int i = 0 ; i < count ; i++)
    {
        int start;
        int end;
        std::vector<int> time;
        time.clear();
        std::cin >> start;
        std::cin >> end;
        time.push_back(start);
        time.push_back(end);
        meetingInfo.push_back(time);
        sort(meetingInfo.begin(), meetingInfo.end(), cmp);

        
    }
       
}

bool cmp(std::vector<int> &v1, std::vector<int> &v2){
  if(v1[1] == v2[1])
    return v1[0]<v2[0];
  else return v1[1]<v2[1];
}